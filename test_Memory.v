`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:57:45 11/08/2015
// Design Name:   Memory
// Module Name:   /home/griseous/Documents/csse232/Milestone5/test_Memory.v
// Project Name:  Milestone5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_Memory;

	// Inputs
	reg clock;
	reg MemWrite;
	reg MemRead;
	reg [15:0] WriteData;
	reg [15:0] MemIn;

	// Outputs
	wire [15:0] MemOut;

	// Instantiate the Unit Under Test (UUT)
	Memory uut (
		.clock(clock), 
		.MemWrite(MemWrite), 
		.MemRead(MemRead), 
		.WriteData(WriteData), 
		.MemOut(MemOut), 
		.MemIn(MemIn)
	);
	
	initial begin //clock
		#100;
		forever
			begin
				clock = 0;
				#10
				clock = 1'b1;
				#10;
			end
	end	
	
	
	initial begin
		// Initialize Inputs
		clock = 0;
		MemWrite = 0;
		MemRead = 0;
		WriteData = 0;
		MemIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		
		MemRead = 1;
		#100;
		MemRead = 0;
		MemWrite = 1;
		MemIn = 1;
		WriteData = 16'b1010_1010_1010_1010;
		#100;
	end
      
endmodule

