`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:10 11/29/2009 
// Design Name: 
// Module Name:    calab 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module calab(input rst,clk);
wire [31:0]mux32jump,pc_out,instruction_out,increament_out,add_outputa,mux32branch;
wire regdst ,jump,branch,memread,memtoreg,memwrite,alusrc,regwrite,carry,zero,outbranch;
wire [5:0] aluop; 
wire [4:0] regdst_output;
wire [15:0]read_data1,read_data2,alusrc_output,alu_out,read_data,memtoreg_output;


pc pc_name (
    .pc_input(mux32jump), 
    .rst(rst), 
	 .clk(clk),
    .pc_out(pc_out)
   );
increament increament_name (
    .increament_input(pc_out), 
    .increament_out(increament_out)
    );
	 
	 
	 

	 instruction_memory instruction_memory_name (
    .clk(clk), 
    .rst(rst), 
    .instruction_address(pc_out), 
    .instruction_out(instruction_out)
    );

control control_name (
    .clk(clk), 
    .instruction(instruction_out), 
    .regdst(regdst), 
    .jump(jump), 
    .branch(branch), 
    .memread(memread), 
    .memtoreg(memtoreg), 
    .memwrite(memwrite), 
    .alusrc(alusrc), 
    .regwrite(regwrite), 
    .aluop(aluop)
    );

mux_regdst mux_regdst_name (
    .regdst_input0(instruction_out[20:16]), 
    .regdst_input1(instruction_out[15:11]), 
    .select(regdst), 
    .regdst_output(regdst_output)
    );

registers registers_name (
    .clk(clk), 
    .rst(rst), 
    .regwrite(regwrite), 
    .read_register1(instruction_out[25:21]), 
    .read_register2(instruction_out[20:16]), 
    .write_register(regdst_output), 
    .write_data(memtoreg_output), 
    .read_data1(read_data1), 
    .read_data2(read_data2)
    );


mux16 mux16_alusrc_name (
    .mux16_input0(read_data2), 
    .mux16_input1(instruction_out[15:0]), 
    .select(alusrc), 
    .mux16_output(alusrc_output)
    );

alu alu_name (
    .alu_input_1(read_data1), 
    .alu_input_2(alusrc_output), 
    .ctrl(aluop), 
    .alu_out(alu_out), 
    .carry(carry), 
    .zero(zero)
    );


datamemory datamemory_name (
    .mem_read(memread), 
    .mem_write(memwrite), 
    .clk(clk), 
    .rst(rst), 
    .address(alu_out), 
    .write_data(read_data2), 
    .read_data(read_data)
    );



mux16 mux16memtoreg_name (
    .mux16_input0(alu_out), 
    .mux16_input1(read_data), 
    .select(memtoreg), 
    .mux16_output(memtoreg_output)
    );


	 
	 
	 
adder adder_name (
    .add_input1(increament_out), 
    .add_input2(instruction_out[15:0]), 
    .add_outputa(add_outputa)
    );
	 and andbranch(outbranch,branch,zero);
	 
	 mux32 mux32branch_name (
    .mux32_input0(increament_out), 
    .mux32_input1(add_outputa), 
    .select(outbranch), 
    .mux32_output(mux32branch)
    );

mux32 mux32jump_name (
    .mux32_input0(mux32branch), 
    .mux32_input1({increament_out[31:26],instruction_out[25:0]}), 
    .select(jump), 
    .mux32_output(mux32jump)
    );









endmodule
