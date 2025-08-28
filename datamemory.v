`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:27:57 11/29/2009 
// Design Name: 
// Module Name:    datamemory 
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
module datamemory(input mem_read,mem_write ,clk,rst ,
input [15:0]address ,write_data,output reg[15:0]read_data);

integer i; 
reg [15:0] memory[63:0];

always @(posedge clk)
begin
	if (rst)
		for (i=6'b000000;i<=6'b111111;i=i+6'b000001)
			memory[i]=1'b0;
	if (mem_read)
		read_data = memory[address];
	if (mem_write)
		memory[address] = write_data;

end
endmodule
