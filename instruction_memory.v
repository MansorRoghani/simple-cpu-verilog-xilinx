`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:46 11/29/2009 
// Design Name: 
// Module Name:    instruction_memory 
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
module instruction_memory(input clk,rst ,input [31:0]instruction_address,output reg[31:0]instruction_out);
reg [31:0] memory[63:0];
always @(posedge clk)
begin
		instruction_out = memory[instruction_address];
if (rst)	
begin
		//firs part
		memory[4'b0000]=32'b001111_00000_00001_00000_00000_111111;
		memory[4'b0001]=32'b001111_00000_00010_00000_00001_000011;
		memory[4'b0010]=32'b001111_00000_00011_00000_00000_100000;
		//use alu
		memory[4'b0011]=32'b000000_00001_00010_00100_00000_000010;
		memory[4'b0100]=32'b000000_00001_00011_00101_00000_000110; 
		memory[4'b0101]=32'b000000_00001_00010_00110_00000_001111;
		//save and loud
		memory[4'b0110]=32'b100110_00000_00010_00000_00000_000001;
		memory[4'b0111]=32'b001110_00000_00111_00000_00000_000001;
		//jump and branch
		memory[4'b1000]=32'b000100_00000_00000_00000_00000_000010;
		memory[4'b1010]=32'b001100_00010_00111_00000_00000_000010;
/*
		//r1 
		memory[4'b0000]=32'b001111_00000_00001_00000_00000_000001; 
		//r2
		memory[4'b0001]=32'b001111_00000_00010_00000_00000_000001;
		//r3 =6
		memory[4'b0010]=32'b001111_00000_00011_00000_00000_000110;
	
		//r1 + 1
		memory[4'b0011]=32'b001111_00001_00001_00000_00000_000001;
		//r1 *r2
		memory[4'b0100]=32'b000000_00001_00010_00010_00000_001111;
		//branch
		memory[4'b0101]=32'b001100_00001_00011_00000_00000_000100;
		//jump
		memory[4'b0110]=32'b000100_00000_00000_00000_00000_000011;
 */
end   
end
endmodule
