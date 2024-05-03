#include "C:\Users\Adnan Ahmed\Downloads\23i-0634_D\oop-Assign3\casestudy.h"

ALU::ALU(int NoOfAdders = 1, int NoOfSubtractor = 1, int NoOfRegisters = 1, int sizeOfRegisters = 1) : NoOfAdders(NoOfAdders), NoOfSubtractor(NoOfSubtractor), NoOfRegisters(NoOfRegisters), sizeOfRegisters(sizeOfRegisters) {}
ALU::ALU(const ALU& other) {
	this->NoOfAdders = other.NoOfAdders;
	this->NoOfSubtractor = other.NoOfSubtractor;
	this->NoOfRegisters = other.NoOfRegisters;
	this->sizeOfRegisters = other.sizeOfRegisters;
}
int ALU::getNoOfAdders() const {
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

ControlUnit::ControlUnit(float clock = 0.0) : clock(clock) {}
ControlUnit::ControlUnit(const ControlUnit& other) {
	this->clock = other.clock;
}
float ControlUnit::getclock() const {
	return this->clock;
}
void ControlUnit::setclock(float t) {
	this->clock = t;
}
CPU::CPU() : name(""), price(0) {}
CPU::CPU(ALU& alu , ControlUnit& cu , string name = "", double price = 0) : alu(alu), cu(cu), name(name), price(price) {}
CPU::CPU(const CPU& other) {
	this->alu = other.alu;
	this->cu = other.cu;
	this->name = other.name;
	this->price = other.price;
}
ALU& CPU::getALU() {
	return this->alu;
}
ControlUnit& CPU::getCU() {
	return this->cu;
}
void CPU::setALU(const ALU& other) {
	this->alu = other;
}
void CPU::setCU(const ControlUnit& other) {
	this->cu = other;
}
string CPU::getName() {
	return name;
}
void CPU::setName(string s) {
	name = s;
}
void CPU::setPrice(double new_price) {
	this->price = new_price;
}
double CPU::getPrice() {
	return price;
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
Port::Port(string type = "N/A", int baud_rate = 0) : type(type), baud_rate(baud_rate) {}
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

MotherBoard::MotherBoard() {}
MotherBoard::MotherBoard(MainMemory& mm , Port ports[20] = {'\0'}, string name = "", double price = 0) : mm(mm), name(name), price(price) {
	for (int i = 0; i < 20; i++) {
		this->ports[i] = ports[i];
	}
}
MotherBoard::MotherBoard(MotherBoard& other) {
	this->mm = other.mm;
	this->NumOfPorts = other.NumOfPorts;
	for (int i = 0; i < NumOfPorts; i++) {
		this->ports[i] = other.ports[i];
	}
	this->name = other.name;
	this->price = other.price;
}
MainMemory& MotherBoard::getMainMemory() {
	return mm;
}
string MotherBoard::getName() {
	return name;
}
void MotherBoard::setName(string s) {
	name = s;
}
Port& MotherBoard::getPort(int i) {
	return ports[i];
}
void MotherBoard::setMainMemory(MainMemory& other) {
	mm = other;
}
void MotherBoard::setPort(int i, Port port) {
	ports[i] = port;
}
void MotherBoard::setPrice(double new_price) {
	this->price = new_price;
}
double MotherBoard::getPrice() {
	return price;
}

PhysicalMemory::PhysicalMemory(int capacity = 1, string type = "", double price = 0) : capacity(capacity), type(type), price(price) {}
PhysicalMemory::PhysicalMemory(PhysicalMemory& other) {
	this->capacity = other.capacity;
	this->type = other.type;
	this->price = other.price;
}
int PhysicalMemory::getCapacity() const {
	return capacity;
}
void PhysicalMemory::setCapacity(int x) {
	capacity = x;
}
void PhysicalMemory::setType(string s) {
	type = s;
}
string PhysicalMemory::getType() {
	return type;
}
void PhysicalMemory::setPrice(double new_price) {
	this->price = new_price;
}
double PhysicalMemory::getPrice() {
	return price;
}
Computer::Computer(){}
Computer::Computer(PhysicalMemory& pm, MotherBoard& mb , CPU& cpu ) : pm(pm), mb(mb), cpu(cpu) {}
Computer::Computer(Computer& other) {
	this->pm = other.pm;
	this->pm.setCapacity(other.pm.getCapacity());
	this->pm.setPrice(other.pm.getPrice());
	this->pm.setType(other.pm.getType());
	this->mb = other.mb;
	this->cpu = other.cpu;
}
PhysicalMemory& Computer::getPhysicalMemory() {
	return pm;
}
MotherBoard& Computer::getMotherBoard() {
	return mb;
}
CPU& Computer::getCPU() {
	return cpu;
}
void Computer::setPhysicalMemory(PhysicalMemory& other) {
	this->pm = other;
}
void Computer::setMotherBoard(MotherBoard& other) {
	this->mb = other;
}
void Computer::setCPU(CPU& other) {
	this->cpu = other;
}
GraphicsCard::GraphicsCard(string brand, int memorySize, double price) : brand(brand), memorySize(memorySize), price(price) {}
GraphicsCard::GraphicsCard(GraphicsCard& other) {
	this->brand = other.brand;
	this->memorySize = other.memorySize;
	this->price = other.price;
}
string GraphicsCard::getBrand() {
	return brand;
}
int GraphicsCard::getMemorySize() {
	return memorySize;
}
double GraphicsCard::getPrice() {
	return price;
}
void GraphicsCard::setBrand(string new_brand) {
	this->brand = new_brand;
}
void GraphicsCard::setMemorySize(int new_size) {
	this->memorySize = new_size;
}
void GraphicsCard::setPrice(double new_price) {
	this->price = new_price;
}
StorageDevice::StorageDevice(string type, int capacity, double price) : type(type), capacity(capacity), price(price) {}
StorageDevice::StorageDevice(StorageDevice& other) {
	this->type = other.type;
	this->capacity = other.capacity;
	this->price = other.price;
}
string StorageDevice::gettype() {
	return type;
}
int StorageDevice::getcapacity() {
	return capacity;
}
double StorageDevice::getPrice() {
	return price;
}
void StorageDevice::settype(string new_type) {
	this->type = new_type;
}
void StorageDevice::setcapacity(int new_size) {
	this->capacity = new_size;
}
void StorageDevice::setPrice(double new_price) {
	this->price = new_price;
}

NetworkCard::NetworkCard(string type, int speed, double price) : type(type), speed(speed), price(price) {}
NetworkCard::NetworkCard(NetworkCard& other) {
	this->type = other.type;
	this->speed = other.speed;
	this->price = other.price;
}
string NetworkCard::gettype() {
	return type;
}
int NetworkCard::getspeed() {
	return speed;
}
double NetworkCard::getPrice() {
	return price;
}
void NetworkCard::settype(string new_type) {
	this->type = new_type;
}
void NetworkCard::setspeed(int new_size) {
	this->speed = new_size;
}
void NetworkCard::setPrice(double new_price) {
	this->price = new_price;
}
PowerSupply::PowerSupply(string efficiencyRating, int wattage, double price) : efficiencyRating(efficiencyRating), wattage(wattage), price(price) {}
PowerSupply::PowerSupply(PowerSupply& other) {
	this->efficiencyRating = other.efficiencyRating;
	this->wattage = other.wattage;
	this->price = other.price;
}
string PowerSupply::getEfficiencyRating() {
	return efficiencyRating;
}
int PowerSupply::getwattage() {
	return wattage;
}
double PowerSupply::getPrice() {
	return price;
}
void PowerSupply::setEfficiencyRating(string new_efficiencyRating) {
	this->efficiencyRating = new_efficiencyRating;
}
void PowerSupply::setwattage(int new_size) {
	this->wattage = new_size;
}
void PowerSupply::setPrice(double new_price) {
	this->price = new_price;
}

Battery::Battery(int capacity) : capacity(capacity) {}
Battery::Battery(Battery& other) {
	this->capacity = other.capacity;
}
int Battery::getCapacity() const {
	return capacity;
}
void Battery::setCapacity(int x) {
	capacity = x;
}

Case::Case(string formFactor, string color, double price) : formFactor(formFactor), color(color), price(price) {}
Case::Case(Case& other) {
	this->formFactor = other.formFactor;
	this->color = other.color;
	this->price = other.price;
}
string Case::getFormFactor() {
	return formFactor;
}
string Case::getColor() {
	return color;
}
void Case::setFormFactor(string new_Form) {
	this->formFactor = new_Form;
}
void Case::setColor(string new_Color) {
	this->color = new_Color;
}
void Case::setPrice(double new_price) {
	this->price = new_price;
}
double Case::getPrice() {
	return price;
}
ComputerAssembly::ComputerAssembly() : TotalPrice(0) {}
ComputerAssembly::ComputerAssembly(Computer& computer, Case& PC_case, PowerSupply& psu, GraphicsCard& gpu, StorageDevice& drive, NetworkCard& netcard, Battery& battery) : computer(computer), PC_case(PC_case), psu(psu), gpu(gpu), drive(drive), netcard(netcard), battery(battery) {
	TotalPrice = computer.getCPU().getPrice() + PC_case.getPrice() + psu.getPrice() + gpu.getPrice() + drive.getPrice() + netcard.getPrice();
}
ComputerAssembly::ComputerAssembly(ComputerAssembly& other) {
	this->TotalPrice = other.TotalPrice;
	computer = other.computer;
	PC_case = other.PC_case;
	psu = other.psu;
	gpu = other.gpu;
	drive = other.drive;
	netcard = other.netcard;
	battery = other.battery;
}
double ComputerAssembly::getTotalPrice() {
	return this->TotalPrice;
}
void ComputerAssembly::InputSpecs() {
	int n, m, sum = 0, PCcheck, CPUcheck, Laptopcheck;
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
		c.getCPU().setPrice(d);
	}

	do {
		cout << "CPU\nEnter no.\n1. Intel\n2. AMD\n3.AppleSilicon\n";
		cin >> CPUcheck;
		if (CPUcheck != 1 && CPUcheck != 2 && CPUcheck != 3) {
			cout << "Incorrect input! Try Again: \n";
		}
	} while (CPUcheck != 1 && CPUcheck != 2 && CPUcheck != 3);
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
		cout << "Enter PowerSupply Efficiency Rating (e.g. 80 Plus Bronze)\nIf no rating then write NONE: ";
		do {
			cin >> s;
			if (s != "NONE" && s != "80 Plus Bronze" && s != "80 Plus Silver" && s != "80 Plus Gold" && s != "80 Plus Platinum")
				cout << "Incorrect Rating, Try Again: ";
		} while (s != "NONE" && s != "80 Plus Bronze" && s != "80 Plus Silver" && s != "80 Plus Gold" && s != "80 Plus Platinum");
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
	}
	cout << "Enter Case Color: ";
	cin >> s;
	cs.setColor(s);
	if (Laptopcheck == 2) {
		cout << "Enter Case price: ";
		cin >> d;
		cs.setPrice(d);
	}

 }
 void ComputerAssembly::Display() {
	 cout << "Your ";
	 if (PC_case.getFormFactor() != "") {
		 if (computer.getCPU().getName() == "AppleSilicon")
			 cout << "Mac";
		 else
			 cout << "Desktop";
	 }
	 else {
		 if (computer.getCPU().getName() == "AppleSilicon")
			 cout << "Macbook";
		 else
			 cout << "Laptop";
	 }
	 cout<<" Specs: \n";
	 cout << "CPU: "<< computer.getCPU().getName();
	 cout << "\nALU\nNoOfAdders: "<<computer.getCPU().getALU().getNoOfAdders();
	 cout << "\nNoOfSubtractors: " << computer.getCPU().getALU().getNoOfSubtractor();
	 cout << "\nNoOfRegisters: " << computer.getCPU().getALU().getNoOfRegisters();
	 cout << "\nsizeOfRegisters: " << computer.getCPU().getALU().getsizeOfRegisters()<<endl<<endl;

	 cout << "Control Unit: " << computer.getCPU().getCU().getclock() << endl << endl;

	 cout << "MotherBoard: "<<computer.getMotherBoard().getName()<<endl;
	 for (int i = 0; computer.getMotherBoard().getPort(i).getbaud_rate() != 0; i++) {
		 cout << computer.getMotherBoard().getPort(i).gettype() << ' ' << computer.getMotherBoard().getPort(i).getbaud_rate() << endl;
	 }
	 cout << "\nMain Memory: " << computer.getMotherBoard().getMainMemory().getTechnologyType() <<' '<< computer.getMotherBoard().getMainMemory().getCapacity()<<" bits" << endl << endl;

	 cout << "RAM: " << computer.getPhysicalMemory().getCapacity() << " GB " << computer.getPhysicalMemory().getType() << endl << endl;

	 if (computer.getCPU().getName() != "AppleSilicon") {
		 cout << "Graphics Card: " << gpu.getBrand() << ' ' << gpu.getMemorySize() << " GB \n\n";
	 }
	 else {
		 cout << "integrated Graphics\n\n";
	 }
	 cout << "Storage: " << drive.gettype() << ' ' << drive.getcapacity() << " GB\n\n";

	 cout << "NetworkCard: " << netcard.gettype() << ' ' << netcard.getspeed() << " Mbps\n\n";

	 if (PC_case.getFormFactor() != "") {

		 cout << "Power Supply: " << psu.getwattage() << ' ' << psu.getEfficiencyRating() << endl << endl;

		 cout << "Case: " << PC_case.getFormFactor() << ' ' << PC_case.getColor() << endl;

		
	 }
	 else {
		 cout << "Battery: " << battery.getCapacity() << endl << endl;
	 }
	 
	 cout << "\n----Total Price: " << TotalPrice << endl;

 }