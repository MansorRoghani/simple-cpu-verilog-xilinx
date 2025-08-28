`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:01:15 11/29/2009 
// Design Name: 
// Module Name:    increament 
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
module increament(input [31:0]increament_input, output [31:0]increament_out);
assign	increament_out = increament_input +1'b1;
endmodule
