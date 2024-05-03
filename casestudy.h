#pragma once
#ifndef CASESTUDY
#define CASESTUDY
#include <iostream>
using namespace std;

class ALU {
protected:
	int NoOfAdders, NoOfSubtractor, NoOfRegisters, sizeOfRegisters;
public:
	ALU(int NoOfAdders, int NoOfSubtractor, int NoOfRegisters, int sizeOfRegisters);
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
	ControlUnit(float clock);
	ControlUnit(const ControlUnit&);
	float getclock()const;
	void setclock(float t);
};

class CPU {
protected:
	ALU alu;
	ControlUnit cu;
	string name;
	double price;
public:
	CPU();
	CPU(ALU& alu, ControlUnit& cu, string name , double price);
	CPU(const CPU&);
	ALU& getALU();
	ControlUnit& getCU();
	void setALU(const ALU&);
	void setCU(const ControlUnit&);
	string getName();
	void setName(string s);
	void setPrice(double);
	double getPrice();
};

class AppleSilicon: public CPU {
public:
	AppleSilicon() {
		CPU::setName("AppleSilicon");
	}
};
class Intel : public CPU {
public:
	
};
class Ryzen : public CPU {
public:
	
};
class MainMemory {
protected:
	int capacity;
	string technologyType;
public:
	MainMemory(int capacity, string);
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
	Port(string, int baud_rate);
	Port(const Port&);
	int getbaud_rate()const;
	string gettype()const;
	void setbaud_rate(int x);
	void settype(string s);
};

class MotherBoard {
protected:
	MainMemory mm;
	int NumOfPorts;
	Port ports[20];
	string name;
	double price;
public:
	MotherBoard();
	MotherBoard(MainMemory& mm, Port ports[20], string name, double price);
	MotherBoard(MotherBoard&);
	MainMemory& getMainMemory();
	Port& getPort(int i);
	void setMainMemory(MainMemory&);
	void setPort(int i, Port port);
	string getName();
	void setName(string s);
	void setPrice(double);
	double getPrice();
};

class PhysicalMemory {
protected:
	int capacity;
	string type;
	double price;
public:
	PhysicalMemory(int capacity, string type, double price);
	PhysicalMemory(PhysicalMemory&);
	int getCapacity() const;
	void setCapacity(int x);
	string getType();
	void setType(string s);
	void setPrice(double);
	double getPrice();
};

class Computer {
protected:
	PhysicalMemory pm;
	MotherBoard mb;
	CPU cpu;
public:
	Computer();
	Computer(PhysicalMemory& pm, MotherBoard& mb, CPU& cpu);
	Computer(Computer&);
	PhysicalMemory& getPhysicalMemory();
	MotherBoard& getMotherBoard();
	CPU& getCPU() ;
	void setPhysicalMemory(PhysicalMemory&);
	void setMotherBoard(MotherBoard&);
	void setCPU(CPU&);
};

class GraphicsCard {
protected:
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard():brand(""), memorySize(0), price(0.0) {}
	GraphicsCard(string brand, int memorySize, double price);
	GraphicsCard(GraphicsCard&);
	string getBrand();
	int getMemorySize();
	double getPrice();
	void setBrand(string);
	void setMemorySize(int);
	void setPrice(double);
};
class Nvidia : public GraphicsCard {

};
class AMD : public GraphicsCard {

};
class StorageDevice {
protected:
	string type;
	int capacity;
	double price;
public:
	StorageDevice() : type(""), capacity(0), price(0.0) {}
	StorageDevice(string type, int capacity, double price);
	StorageDevice(StorageDevice&);
	string gettype();
	int getcapacity();
	double getPrice();
	void settype(string);
	void setcapacity(int);
	void setPrice(double);
};
class NetworkCard {
protected:
	string type;
	int speed;
	double price;
public:
	NetworkCard() : type(""), speed(0), price(0.0) {}
	NetworkCard(string type, int speed, double price);
	NetworkCard(NetworkCard&);
	string gettype();
	int getspeed();
	double getPrice();
	void settype(string);
	void setspeed(int);
	void setPrice(double);
};
class PowerSupply {
protected:
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply() : efficiencyRating(""), wattage(0), price(0.0) {}
	PowerSupply(string efficiencyRating, int wattage, double price);
	PowerSupply(PowerSupply&);
	string getEfficiencyRating();
	int getwattage();
	double getPrice();
	void setEfficiencyRating(string);
	void setwattage(int);
	void setPrice(double);
};
class Battery {
protected:
	int capacity;
public:
	Battery() : capacity(0) {}
	Battery(int capacity);
	Battery(Battery&);
	int getCapacity() const;
	void setCapacity(int x);
};
class Case {
protected:
	string formFactor;
	string color;
	double price;
public:
	Case() :formFactor(""), color(""), price(0) {}
	Case(string formFactor, string color, double price);
	Case(Case&);
	string getFormFactor();
	string getColor();
	void setFormFactor(string new_Form);
	void setColor(string new_Color);
	void setPrice(double);
	double getPrice();
};
class ComputerAssembly {
protected:
	double TotalPrice;
	Case PC_case;
	Computer computer;
	PowerSupply psu;
	GraphicsCard gpu;
	StorageDevice drive;
	NetworkCard netcard;
	Battery battery;

public:
	ComputerAssembly();
	ComputerAssembly(Computer& computer, Case& PC_case, PowerSupply& psu, GraphicsCard& gpu, StorageDevice& drive, NetworkCard& netcard, Battery& battery);
	ComputerAssembly(ComputerAssembly&);
	double getTotalPrice();
	void InputSpecs();
	void Display();
};


#endif // CASESTUDY