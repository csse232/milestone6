`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:41 10/19/2015 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
    input clock,
    input MemWrite,
    input MemRead,
    input [15:0] WriteData,
    output reg [15:0] MemOut,
    input [15:0] MemIn
    );
reg [15:0] memory [0:255]; //unsure if this is the correct value¸ may be 2 to the power of 16 -1

//load the program
initial $readmemb("program.mem", memory);
initial MemOut = 0;


always @ (MemWrite or MemRead or WriteData or MemIn)
begin
	
	if (MemRead) begin
		MemOut = memory[MemIn];
	end
	
	if (MemWrite) begin
		$display("Writing %b to memory",WriteData);
		memory[MemIn] = WriteData;
	end

end


endmodule
