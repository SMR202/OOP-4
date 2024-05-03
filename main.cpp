//Muhammad Sameer
//D
//23i-0634
//Shehreyar Rashid
//Muhammad Abdur Rafey
//Muhammad Ariyan

#include "C:\Users\Adnan Ahmed\Downloads\23i-0634_D\oop-Assign3\casestudy.h"
#include <iostream>
using namespace std;

int main() {

	int n, m, sum = 0, PCcheck, CPUcheck, Laptopcheck, TotalPrice = 0;
	float f;
	double d;
	string s;
	Computer c;
	Case cs;
	PowerSupply p;
	GraphicsCard g;
	StorageDevice sd;
	NetworkCard nc;
	Battery b;
	AppleSilicon a;

	cout << "Enter Your Specs: \n";

	do {
		cout << "Is your system a PC or a Mac\nEnter no.\n1. PC\n2. Mac\n";
		cin >> PCcheck;
		if (PCcheck != 1 && PCcheck != 2) {
			cout << "Incorrect input! Try Again: \n";
		}
	} while (PCcheck != 1 && PCcheck != 2);
	do {
		cout << "Is your system a Laptop or a Desktop\nEnter no.\n1. Laptop\n2. Desktop\n";
		cin >> Laptopcheck;
		if (Laptopcheck != 1 && Laptopcheck != 2) {
			cout << "Incorrect input! Try Again: \n";
		}
	} while (Laptopcheck != 1 && Laptopcheck != 2);

	if (Laptopcheck == 1) {
		cout << "Enter price of Laptop: ";
		cin >> d;
		TotalPrice = d;
		TotalPrice = d;
		c.getCPU().setPrice(d);
	}
	if (PCcheck == 2) {
		CPUcheck = 3;
	}
	else {
		do {
			cout << "CPU\nEnter no.\n1. Intel\n2. AMD\n";
			cin >> CPUcheck;
			if (CPUcheck != 1 && CPUcheck != 2) {
				cout << "Incorrect input! Try Again: \n";
			}
		} while (CPUcheck != 1 && CPUcheck != 2);
	}
	if (CPUcheck == 1) {
		c.getCPU().setName("Intel");
	}
	else if (CPUcheck == 2) {
		c.getCPU().setName("AMD");
	}
	else {
		c.getCPU().setName("AppleSilicon");
	}
	cout << "ALU: \n";
	cout << "No. Of Adders: ";
	cin >> n;
	c.getCPU().getALU().setNoOfAdders(n);
	cout << "No. Of Subtractors: ";
	cin >> n;
	c.getCPU().getALU().setNoOfSubtractor(n);
	cout << "No. Of Registors: ";
	cin >> n;
	c.getCPU().getALU().setNoOfRegisters(n);
	cout << "Size Of Registers: ";
	cin >> n;
	c.getCPU().getALU().setsizeOfRegisters(n);
	cout << "Control Unit clock: ";
	cin >> f;
	c.getCPU().getCU().setclock(f);
	if (Laptopcheck == 2) {
		cout << "Enter price of CPU: ";
		cin >> d;
		c.getCPU().setPrice(d);
	}
	cout << "Enter Motherboard name: ";
	cin >> s;
	c.getMotherBoard().setName(s);
	if (Laptopcheck == 2) {
		cout << "Enter price of MotherBoard: ";
		cin >> d;
		c.getMotherBoard().setPrice(d);
	}
	cout << "Enter main memory for the motherboard: \n";
	cout << "Capacity: ";
	cin >> n;
	c.getMotherBoard().getMainMemory().setCapacity(n);
	cout << "Technology Type: ";
	cin >> s;
	c.getMotherBoard().getMainMemory().setTechnologyType(s);

	cout << "Enter Ports: \nEnter 0 to stop: \n";
	for (int i = 0; ; i++) {
		cout << "name: ";
		cin >> s;
		cout << "baud_rate: ";
		cin >> n;
		if (s == "0") {
			break;
		}
		Port p(s, n);
		c.getMotherBoard().setPort(i, p);
	}

	cout << "Enter MotherBoard RAM slots: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		do {
			cout << "Enter RAM in slot " << i + 1 << ": ";
			cin >> m;
		} while (m != 1 && m != 2 && m != 4 && m != 8 && m != 16 && m != 32 && m != 64 && m != 128);
		sum += m;
	}
	c.getPhysicalMemory().setCapacity(sum);
	bool flag = false;
	cout << "Enter Ram type: ";
	do {
		cin >> s;
		if (s != "DDR1" && s != "DDR2" && s != "DDR3" && s != "DDR4" && s != "DDR5" && s != "LPDDR1" && s != "LPDDR2" && s != "LPDDR3" && s != "LPDDR4" && s != "LPDDR5") {
			flag = true;
			cout << "Incorrect Type! Retry: ";
		}
		else {
			flag = false;
		}
	} while (flag);
	c.getPhysicalMemory().setType(s);
	if (Laptopcheck == 2) {
		cout << "Enter price of PhysicalMemory: ";
		cin >> d;
		c.getPhysicalMemory().setPrice(d);
	}
	if (PCcheck == 1) {

		cout << "Enter GPU Brand: ";
		cin >> s;
		g.setBrand(s);

		cout << "Enter GPU VRAM: ";
		cin >> n;
		g.setMemorySize(n);
		if (Laptopcheck == 2) {
			cout << "Enter GPU price: ";
			cin >> d;
			g.setPrice(d);
		}
	}
	else {
		g.setBrand("APPLE");
	}
	cout << "Enter StorageDevice Type (HDD, SSD, NVMe): ";
	do {
		cin >> s;
		if (s != "HDD" && s != "SSD" && s != "NVMe")
			cout << "Incorrect Type, Try Again: ";
	} while (s != "HDD" && s != "SSD" && s != "NVMe");
	sd.settype(s);

	cout << "Enter StorageDevice Capacity in GBs: ";
	cin >> n;
	sd.setcapacity(n);
	if (Laptopcheck == 2) {
		cout << "Enter StorageDevice price: ";
		cin >> d;
		sd.setPrice(d);
	}
	cout << "Enter NetworkCard Type: ";
	cin >> s;
	nc.settype(s);

	cout << "Enter NetworkCard Speed: ";
	cin >> n;
	nc.setspeed(n);
	if (Laptopcheck == 2) {
		cout << "Enter NetworkCard price: ";
		cin >> d;
		nc.setPrice(d);
	}
	if (Laptopcheck == 2) {
		cout << "Enter PowerSupply Efficiency Rating (e.g. 80PlusBronze)\nIf no rating then write NONE: ";
		do {
			cin >> s;
			if (s != "NONE" && s != "80PlusBronze" && s != "80PlusSilver" && s != "80PlusGold" && s != "80PlusPlatinum")
				cout << "Incorrect Rating, Try Again: ";
		} while (s != "NONE" && s != "80PlusBronze" && s != "80PlusSilver" && s != "80PlusGold" && s != "80PlusPlatinum");
		p.setEfficiencyRating(s);

		cout << "Enter PowerSupply Wattage: ";
		cin >> n;
		p.setwattage(n);


		cout << "Enter PowerSupply price: ";
		cin >> d;
		p.setPrice(d);
	}
	if (Laptopcheck == 1) {
		cout << "Enter Battery Capacity: ";
		cin >> n;
		b.setCapacity(n);
	}
	else
	{
		cout << "Enter Case FormFactor: ";
		do {
			cin >> s;
			if (s != "ATX" && s != "Micro ATX" && s != "Mini ITX")
				cout << "Incorrect Type, Try Again: ";
		} while (s != "ATX" && s != "Micro ATX" && s != "Mini ITX");
		cs.setFormFactor(s);
		cout << "Enter Case Color: ";
		cin >> s;
		cs.setColor(s);
	}

	if (Laptopcheck == 2) {
		cout << "Enter Case price: ";
		cin >> d;
		cs.setPrice(d);
	}

	ComputerAssembly C(c, cs, p, g, sd, nc, b);

	C.Display();

}