`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:09:20 10/19/2015 
// Design Name: 
// Module Name:    Mux2in16b 
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
module Mux2in16b(
    input [15:0] in1,
    input [15:0] in2,
    input control,
    input clock,
    output reg [15:0] out
    );
always @ (in1 or in2 or control)

begin
	if (control == 0)
	begin
		out = in1;
	end
	else begin
		out = in2;
	end
end

endmodule
