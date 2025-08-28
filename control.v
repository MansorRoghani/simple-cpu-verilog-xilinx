`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:49 11/29/2009 
// Design Name: 
// Module Name:    control 
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
module control(input clk,input [31:0] instruction,output reg regdst ,jump,branch
,memread,memtoreg,memwrite,alusrc,regwrite,output reg[5:0] aluop );

always @(instruction)
begin
	case (instruction[31:26])
		//alu to reg R  type
		6'b000000:
			begin
				regdst=1'b1;
				jump=1'b0;
				branch=1'b0;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b0;
				alusrc=1'b0;
				regwrite=1'b1;
				aluop= instruction [5:0];
			end
			//load mem to reg I type
		6'b001110:
			begin
				regdst=1'b0;
				jump=1'b0;
				branch=1'b0;
				memread=1'b1;
				memtoreg=1'b1;
				memwrite=1'b0;
				alusrc=1'b1;
				regwrite=1'b1;
				aluop= 6'b000010;
			end
			//branch I  type
		6'b001100:
			begin
				regdst=1'b0;
				jump=1'b0;
				branch=1'b1;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b0;
				alusrc=1'b0;
				regwrite=1'b0;
				aluop= 6'b00000110;
			end
		//jump j type
		6'b000100:
			begin
				regdst=1'b0;
				jump=1'b1;
				branch=1'b0;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b0;
				alusrc=1'b0;
				regwrite=1'b0;
				aluop= 6'bxxxxxx;
			end
		//mem to reg  =====load
	//	6'b100100:
		//	begin
			//	regdst=1'b0;
			//	jump=1'b0;
			//	branch=1'b0;
			//	memread=1'b1;
			//	memtoreg=1'b1;
			//	memwrite=1'b0;
			//	alusrc=1'b1;
			//	regwrite=1'b1;
			//	aluop= 6'b000010;
		//	end
			//// save  reg  to mem i 
		6'b100110:
			begin
				regdst=1'b0;
				jump=1'b0;
				branch=1'b0;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b1;
				alusrc=1'b1;
				regwrite=1'b0;
				aluop= 6'b000010;
			end
			//save to reg i
		6'b001111:
			begin
				regdst=1'b0;
				jump=1'b0;
				branch=1'b0;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b0;
				alusrc=1'b1; 
				regwrite=1'b1;
				aluop= 6'b000010;
			end
			default :
			begin
				regdst=1'b0;
				jump=1'b0;
				branch=1'b0;
				memread=1'b0;
				memtoreg=1'b0;
				memwrite=1'b0;
				alusrc=1'b0; 
				regwrite=1'b0;
				aluop= 6'b000000;
			end
	endcase
end
endmodule
