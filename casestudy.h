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
	int NumOfPorts;
	Port ports[];
public:
	MotherBoard(MainMemory mm, int NumOfPorts, Port ports[]);
	MotherBoard(MotherBoard&);
	MainMemory getMainMemory();
	Port getPort(int i);
	void setMainMemory(MainMemory&);
	void setPort(int i, Port port);
};

class PhysicalMemory{
protected:
	int capacity;
public:
	PhysicalMemory(int capacity);
	PhysicalMemory(PhysicalMemory&);
	int getCapacity() const;
	void setCapacity(int x);
};

class Computer public : PhysicalMemory, MotherBoard, CPU{
protected:
	PhysicalMemory pm;
	MotherBoard mb;
	CPU cpu;
public:
	Computer (PhysicalMemory pm, MotherBoard mb, CPU cpu);
	Computer (Computer& );
	PhysicalMemory getPhysicalMemory() const;
	MotherBoard getMotherBoard() const;
	CPU getCPU() const;
	void setPhysicalMemory(PhysicalMemory& );
	void setMotherBoard(MotherBoard& );
	void setCPU(CPU& );
};

class GraphicsCard{
protected:
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard(string brand, int memorySize, double price);
	GraphicsCard(GraphicsCard& );
	string getBrand();
	int getMemorySize();
	double getPrice();
	void setBrand(string );
	void setMemorySize(int);
	void setPrice(double);
};

class StorageDevice{
protected:
	string type;
	int capacity;
	double price;
public:
	StorageDevice(string type, int capacity, double price);
	StorageDevice(StorageDevice& );
	string gettype();
	int getcapacity();
	double getPrice();
	void settype(string );
	void setcapacity(int);
	void setPrice(double);
};

class StorageDevice{
protected:
	string type;
	int speed;
	double price;
public:
	StorageDevice(string type, int speed, double price);
	StorageDevice(StorageDevice& );
	string gettype();
	int getspeed();
	double getPrice();
	void settype(string );
	void setspeed(int);
	void setPrice(double);
};

class PowerSupply{
protected:
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply(string efficiencyRating, int wattage, double price);
	PowerSupply(PowerSupply& );
	string getEfficiencyRating();
	int getwattage();
	double getPrice();
	void setEfficiencyRating(string );
	void setwattage(int);
	void setPrice(double);
};

class Battery{
protected:
	int capacity;
public:
	Battery(int capacity);
	Battery(Battery&);
	int getCapacity() const;
	void setCapacity(int x);
};