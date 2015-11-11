`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:31:02 11/09/2015
// Design Name:   RegisterFile
// Module Name:   /home/griseous/Documents/csse232/Milestone6/test_RegisterFile.v
// Project Name:  Milestone6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_RegisterFile;

	// Inputs
	reg [2:0] writeReg;
	reg [2:0] readReg1;
	reg [2:0] readReg2;
	reg [15:0] writeFile;
	reg clock;
	reg regWrite;

	// Outputs
	wire [15:0] readData1;
	wire [15:0] readData2;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.writeReg(writeReg), 
		.readReg1(readReg1), 
		.readReg2(readReg2), 
		.writeFile(writeFile), 
		.clock(clock), 
		.regWrite(regWrite), 
		.readData1(readData1), 
		.readData2(readData2)
	);
	
	wire [15:0] register [0:7] = uut.register;



	initial begin
		// Initialize Inputs
		writeReg = 0;
		readReg1 = 0;
		readReg2 = 0;
		writeFile = 0;
		clock = 0;
		regWrite = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		regWrite = 1;
		writeReg = 4;
		writeFile = 17;
		// Add stimulus here

	end
      
endmodule

