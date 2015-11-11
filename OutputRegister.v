`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:48:54 11/08/2015 
// Design Name: 
// Module Name:    OutputRegister 
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
module OutputRegister(
	 input [15:0] data_in,
	 input clock,
	 output reg [15:0] data_out,
	 input outputWrite
	 );
always @ (outputWrite)
begin
	if (outputWrite == 1) begin
		$display("Output: %i", data_in);
		data_out = data_in;
	end
end

endmodule
