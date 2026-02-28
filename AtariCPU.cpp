#include <fstream>
#include <iostream>
#include "AtariCPU.h"


void processOperation(CPUReg& Reg) {

}


void loadROM(uint8_t* romMemory, const char* dir) {
	std::fstream rom(dir);
	rom.seekg(0, rom.end);
	int len = rom.tellg();
	rom.seekg(0, rom.beg);
	if (rom.is_open())
		rom.read((char*)romMemory, len);
	else
		std::cout << "Failed to open ROM";
}


int main(int argc, char* argv[]) {
	CPUReg Reg;
	//uint8_t memory[64000] = { 0 };
	//uint8_t* adressPointer = memory;
	uint8_t romMemory[44000] = { 0 };
	//uint8_t* adressPointer = memory;
	int cycleCount = 0;

	loadROM(romMemory, "SpaceInvaders.a26");

	return 1;
}