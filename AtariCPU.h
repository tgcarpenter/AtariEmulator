#pragma once

struct CPUReg
{
	uint8_t Accumulator; //
	uint8_t ProcStatus; // Processor Status has 7 bit flags bit 8 is unused
	uint16_t ProgramCount;
	uint8_t StackPointer = 0x01FF; // Points to the top of the stack on Page 1 
	uint8_t X;
	uint8_t Y;
};

