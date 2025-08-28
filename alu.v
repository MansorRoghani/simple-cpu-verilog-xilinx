`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:22:41 11/29/2009 
// Design Name: 
// Module Name:    alu 
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
module alu(input [15:0] alu_input_1, alu_input_2,input [5:0] ctrl,
output [15:0]alu_out,output carry,zero);

assign {carry,alu_out}= (ctrl == 6'b000000)?alu_input_1&alu_input_2:
								(ctrl == 6'b000001)?alu_input_1|alu_input_2:
								(ctrl == 6'b000010)?alu_input_1+alu_input_2:
								(ctrl == 6'b000110)?alu_input_1-alu_input_2:
								(ctrl == 6'b001111)?alu_input_1*alu_input_2:1'b0;
								
assign	zero = ({carry,alu_out}==0)?1'b1:1'b0;

endmodule
