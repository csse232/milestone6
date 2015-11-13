`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:29:39 11/09/2015
// Design Name:   TopLevel
// Module Name:   /home/griseous/Documents/csse232/Milestone5/top_test.v
// Project Name:  Milestone5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopLevel
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_test;

	// Inputs
	reg clock;
	reg [15:0] in;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	TopLevel uut (
		.clock(clock), 
		.in(in), 
		.out(out)
	);
	
	/*wire [15:0] PCin = uut.PCin, PCout = uut.PCout, WriteData = uut.WriteData, MemOut = uut.MemOut, MemIn = uut.MemIn, WriteFile = uut.WriteFile,
		readData1 = uut.readData1, readData2 = uut.readData2, ALUa = uut.ALUa, ALUb = uut.ALUb, ALUOutput = uut.ALUOutput, AOutput = uut.AOutput, 
		BOutput = uut.BOutput, ALUOutOutput = uut.ALUOutOutput, MemoryRegOut = uut.MemoryRegOut, IExtendedOut = uut.IExtendedOut,
		JExtendedOut = uut.JExtendedOut;
	
	wire [11:0] jImm = uut.jImm;
	wire [5:0] iImm = uut.jImm;
	wire [3:0] op = uut.op;
	wire [2:0] rd = uut.rd, rs = uut.rs, rt = uut.rt, funk = uut.funk, WriteReg = uut.WriteReg, ALUControl = uut.ALUControl, ALUOp = uut.ALUOp;
	wire [1:0] MemToReg = uut.MemToReg, RegDest = uut.RegDest, SrcB = uut.SrcB, PCSrc = uut.PCSrc;
	wire PCWrite = uut.PCWrite, branchCond = uut.branchCond, isZero = uut.isZero, MemWrite = uut.MemWrite, MemRead = uut.MemRead, 
		IRWrite = uut.IRWrite, RegWrite = uut.RegWrite, OutputWrite = uut.OutputWrite, MemSrc = uut.MemSrc, SrcA = uut.SrcA;
	*/
	
	wire [15:0] PC = uut.PCout;
	wire [1:0] PCSrc = uut.PCSrc;
	
	
	//memory
	//wire [15:0] test [0:255] = uut.Memory.memory;
	wire [15:0] Mem0 = uut.Memory.memory[0];
	wire [15:0] MemOut = uut.MemOut;
	wire MemSrc = uut.MemSrc;
	wire [15:0] MemoryReg = uut.MemoryRegOut;
	wire [1:0] MemToReg = uut.MemToReg;
	wire MemWrite = uut.MemWrite;
	wire [15:0] MemIn = uut.BOutput;
	
	//registers
	wire [15:0] reg_zero = uut.RegisterFile.register[0];
	wire [15:0] reg_RV = uut.RegisterFile.register[1];
	wire [15:0] reg_SP = uut.RegisterFile.register[2];
	wire [15:0] reg_RA = uut.RegisterFile.register[3];
	wire [15:0] reg_T0 = uut.RegisterFile.register[4];
	wire [15:0] reg_T1 = uut.RegisterFile.register[5];
	wire [15:0] reg_T2 = uut.RegisterFile.register[6];
	wire [15:0] reg_T3 = uut.RegisterFile.register[7];
	
	wire [15:0] readData1 = uut.readData1;
	wire [1:0] RegDest = uut.RegDest;
	
	
	//control unit
	wire [4:0] current_state = uut.Control.current_state;
	
	//commands
	wire [3:0] op = uut.op;
	wire [2:0] rs = uut.rs;
	wire [2:0] rt = uut.rt;
	wire [2:0] rd = uut.rd;
	wire [2:0] funk = uut.funk;
	wire [11:0] jImm = uut.jImm;
	wire [5:0] iImm = uut.iImm;
	
	//registerfile
	wire regWrite = uut.RegisterFile.regWrite;
	wire [2:0] writeReg = uut.RegisterFile.writeReg;
	wire [15:0] writeData = uut.RegisterFile.writeFile;
	
	//alu
	wire [15:0] ALUOutput = uut.ALUOutput;
	wire [15:0] ALUOutOutput = uut.ALUOutOutput;
	wire isZero = uut.isZero;
	
	//multiplexors
	/*wire [2:0] RegMux = uut.WriteRegSourceMux.out;
	wire [2:0] RegMuxin0 = uut.WriteRegSourceMux.in1;
	wire [2:0] RegMuxin1 = uut.WriteRegSourceMux.in2;
	wire [2:0] RegMuxin2 = uut.WriteRegSourceMux.in3;
	wire [1:0] RegMuxcon = uut.WriteRegSourceMux.control;*/
	
	initial begin //clock
			#100;
			forever
				begin
					clock = 0;
					#10;
					clock = 1'b1;
					#10;
				end
	end	
	
	
	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      //in = 'h13b0;
		in = 'h7FFF;
		// Add stimulus here
		#100;
	end
      
endmodule

/*
          _____                    _____                    _____            _____            _____          
         /\    \                  /\    \                  /\    \          /\    \          /\    \         
        /::\    \                /::\    \                /::\____\        /::\____\        /::\    \        
       /::::\    \              /::::\    \              /:::/    /       /:::/    /       /::::\    \       
      /::::::\    \            /::::::\    \            /:::/    /       /:::/    /       /::::::\    \      
     /:::/\:::\    \          /:::/\:::\    \          /:::/    /       /:::/    /       /:::/\:::\    \     
    /:::/__\:::\    \        /:::/__\:::\    \        /:::/    /       /:::/    /       /:::/__\:::\    \    
   /::::\   \:::\    \      /::::\   \:::\    \      /:::/    /       /:::/    /        \:::\   \:::\    \   
  /::::::\   \:::\    \    /::::::\   \:::\    \    /:::/    /       /:::/    /       ___\:::\   \:::\    \  
 /:::/\:::\   \:::\ ___\  /:::/\:::\   \:::\    \  /:::/    /       /:::/    /       /\   \:::\   \:::\    \ 
/:::/__\:::\   \:::|    |/:::/  \:::\   \:::\____\/:::/____/       /:::/____/       /::\   \:::\   \:::\____\
\:::\   \:::\  /:::|____|\::/    \:::\  /:::/    /\:::\    \       \:::\    \       \:::\   \:::\   \::/    /
 \:::\   \:::\/:::/    /  \/____/ \:::\/:::/    /  \:::\    \       \:::\    \       \:::\   \:::\   \/____/ 
  \:::\   \::::::/    /            \::::::/    /    \:::\    \       \:::\    \       \:::\   \:::\    \     
   \:::\   \::::/    /              \::::/    /      \:::\    \       \:::\    \       \:::\   \:::\____\    
    \:::\  /:::/    /               /:::/    /        \:::\    \       \:::\    \       \:::\  /:::/    /    
     \:::\/:::/    /               /:::/    /          \:::\    \       \:::\    \       \:::\/:::/    /     
      \::::::/    /               /:::/    /            \:::\    \       \:::\    \       \::::::/    /      
       \::::/    /               /:::/    /              \:::\____\       \:::\____\       \::::/    /       
        \::/____/                \::/    /                \::/    /        \::/    /        \::/    /        
         ~~                       \/____/                  \/____/          \/____/          \/____/         
                                                                                                             
          _____                    _____                    _____                    _____                   
         /\    \                  /\    \                  /\    \                  /\    \                  
        /::\    \                /::\    \                /::\    \                /::\    \                 
       /::::\    \              /::::\    \              /::::\    \              /::::\    \                
      /::::::\    \            /::::::\    \            /::::::\    \            /::::::\    \               
     /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \              
    /:::/  \:::\    \        /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \             
   /:::/    \:::\    \      /::::\   \:::\    \      /::::\   \:::\    \      /::::\   \:::\    \            
  /:::/    / \:::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \           
 /:::/    /   \:::\ ___\  /:::/\:::\   \:::\    \  /:::/\:::\   \:::\    \  /:::/\:::\   \:::\____\          
/:::/____/     \:::|    |/:::/__\:::\   \:::\____\/:::/__\:::\   \:::\____\/:::/  \:::\   \:::|    |         
\:::\    \     /:::|____|\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /\::/    \:::\  /:::|____|         
 \:::\    \   /:::/    /  \:::\   \:::\   \/____/  \:::\   \:::\   \/____/  \/_____/\:::\/:::/    /          
  \:::\    \ /:::/    /    \:::\   \:::\    \       \:::\   \:::\    \               \::::::/    /           
   \:::\    /:::/    /      \:::\   \:::\____\       \:::\   \:::\____\               \::::/    /            
    \:::\  /:::/    /        \:::\   \::/    /        \:::\   \::/    /                \::/____/             
     \:::\/:::/    /          \:::\   \/____/          \:::\   \/____/                  ~~                   
      \::::::/    /            \:::\    \               \:::\    \                                           
       \::::/    /              \:::\____\               \:::\____\                                          
        \::/____/                \::/    /                \::/    /                                          
         ~~                       \/____/                  \/____/                                           
                                                                                                             
*/