#pragma once
#include <iostream>
using namespace std;

class ALU {
protected:
	int NoOfAdders, NoOfSubtractor, NoOfRegisters, sizeOfRegisters;
public:
	ALU(int NoOfAdders = 1, int NoOfSubtractor = 1, int NoOfRegisters = 1, int sizeOfRegisters = 1);
	ALU(const ALU&);
	int getNoOfAdders()const;
	int getNoOfSubtractor()const;
	int getNoOfRegisters()const;
	int getsizeOfRegisters()const;
	void setNoOfAdders(int x);
	void setNoOfSubtractor(int x);
	void setNoOfRegisters(int x);
	void setsizeOfRegisters(int x);
};

class ControlUnit {
protected:
	float clock;
public:
	ControlUnit(float clock = 0.0);
	ControlUnit(const ControlUnit&);
	float getclock()const;
	void setclock(float t);
};

class CPU : public ALU, ControlUnit {
protected: 
	ALU alu;
	ControlUnit cu;
public:
	CPU(ALU alu, ControlUnit cu);
	CPU(const CPU&);
	ALU getALU()const;
	ControlUnit getCU()const;
	void setALU(const ALU&);
	void setCU(const ControlUnit&);
};

class MainMemory {
protected: 
	int capacity;
	string technologyType;
public:
	MainMemory(int capacity = 1, string = "N/A");
	MainMemory(const MainMemory&);
	int getCapacity()const;
	string getTechnologyType()const;
	void setCapacity(int x);
	void setTechnologyType(string s);
};

class Port {
protected: 
	string type;
	int baud_rate;
public:
	Port(string = "N/A", int baud_rate = 0);
	Port(const Port&);
	int getbaud_rate()const;
	string gettype()const;
	void setbaud_rate(int x);
	void settype(string s);
};

class MotherBoard : public MainMemory, Port {
protected:
	MainMemory mm;
	Port ports[];
};