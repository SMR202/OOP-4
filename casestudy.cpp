#include "C:\Users\PC\Desktop\oop-Assign3\casestudy.h"

ALU::ALU(int NoOfAdders = 1, int NoOfSubtractor = 1, int NoOfRegisters = 1, int sizeOfRegisters = 1) : NoOfAdders(NoOfAdders), NoOfSubtractor(NoOfSubtractor), NoOfRegisters(NoOfRegisters), sizeOfRegisters(sizeOfRegisters) {}
ALU::ALU(const ALU& other) {
	this->NoOfAdders = other.NoOfAdders;
	this->NoOfSubtractor = other.NoOfSubtractor;
	this->NoOfRegisters = other.NoOfRegisters;
	this->sizeOfRegisters = other.sizeOfRegisters;
}
int ALU::getNoOfAdders() const{
	return this->NoOfAdders;
}
int ALU::getNoOfSubtractor() const {
	return this->NoOfSubtractor;
}
int ALU::getNoOfRegisters() const {
	return this->NoOfRegisters;
}
int ALU::getsizeOfRegisters() const {
	return this->sizeOfRegisters;
}
void ALU::setNoOfAdders(int x) {
	this->NoOfAdders = x;
}
void ALU::setNoOfSubtractor(int x) {
	this->NoOfSubtractor = x;
}
void ALU::setNoOfRegisters(int x) {
	this->NoOfRegisters = x;
}
void ALU::setsizeOfRegisters(int x) {
	this->sizeOfRegisters = x;
}

ControlUnit::ControlUnit(float clock = 0.0) : clock(clock){}
ControlUnit::ControlUnit(const ControlUnit& other) {
	this->clock = other.clock;
}
float ControlUnit::getclock() const {
	return this->clock;
}
void ControlUnit::setclock(float t) {
	this->clock = t;
}
CPU::CPU(ALU alu, ControlUnit cu): alu(alu), cu(cu){}
CPU::CPU(const CPU& other) {
	this->alu = other.alu;
	this->cu = other.cu;
}
ALU CPU::getALU()const {
	return this->alu;
}
ControlUnit CPU::getCU()const {
	return this->cu;
}
void CPU::setALU(const ALU& other) {
	this->alu = other;
}
void CPU::setCU(const ControlUnit& other) {
	this->cu = other;
}
MainMemory::MainMemory(int capacity = 1, string = "N/A") : capacity(capacity), technologyType(technologyType) {}
MainMemory::MainMemory(const MainMemory& other) {
	this->capacity = other.capacity;
	this->technologyType = other.technologyType;
}
int MainMemory::getCapacity()const {
	return this->capacity;
}
string MainMemory::getTechnologyType()const {
	return this->technologyType;
}
void MainMemory::setCapacity(int x) {
	this->capacity = x;
}
void MainMemory::setTechnologyType(string s) {
	this->technologyType = s;
}
Port::Port(string type = "N/A", int baud_rate = 0) : type(type) , baud_rate(baud_rate){}
Port::Port(const Port& other) {
	this->type = other.type;
	this->baud_rate = other.baud_rate;
}
int Port::getbaud_rate()const {
	return this->baud_rate;
}
string Port::gettype()const {
	return this->type;
}
void Port::setbaud_rate(int x) {
	this->baud_rate = x;
}
void Port::settype(string s) {
	this->type = s;
}
