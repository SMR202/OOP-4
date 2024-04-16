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

MotherBoard::MotherBoard(MainMemory mm, int NumOfPorts, Port ports[]) : mm(mm), NumOfPorts(NumOfPorts) {
	for (int i = 0; i < NumOfPorts; i++) {
		this->ports[i] = ports[i];
	}
}
MotherBoard::MotherBoard(MotherBoard& other) {
	this->mm = other.mm;
	this->NumOfPorts = other.NumOfPorts;
	for (int i = 0; i < NumOfPorts; i++) {
		this->ports[i] = other.ports[i];
	}
}
MainMemory MotherBoard::getMainMemory() {
	return mm;
}
Port MotherBoard::getPort(int i) {
	return ports[i];
}
void MotherBoard::setMainMemory(MainMemory& other) {
	mm = other.mm;
}
void MotherBoard::setPort(int i, Port port) {
	ports[i] = port;
}
PhysicalMemory::PhysicalMemory(int capacity) : capacity(capacity){}
PhysicalMemory::PhysicalMemory(PhysicalMemory& capacity){
	this->capacity = other.capacity;
}
int PhysicalMemory::getCapacity() const{
	return capacity;
}
void PhysicalMemory::setCapacity(int x){
	capacity = x;
}
Computer::Computer (PhysicalMemory pm, MotherBoard mb, CPU cpu) : pm(pm), mb(mb), cpu(cpu){}
Computer::Computer (Computer& other){
	this->pm = other.pm;
	this->mb = other.mb;
	this->cpu = other.cpu;
}
PhysicalMemory Computer::getPhysicalMemory() const{
	return pm;
}
MotherBoard Computer::getMotherBoard() const{
	return mb;
}
CPU Computer::getCPU() const{
	return cpu;
}
void Computer::setPhysicalMemory(PhysicalMemory& other){
	this->pm = other.pm;
}
void Computer::setMotherBoard(MotherBoard& other){
	this->mb = other.mb;
}
void Computer::setCPU(CPU& other){
	this->cpu = other.cpu;
}
GraphicsCard::GraphicsCard(string brand, int memorySize, double price) : brand(brand), memorySize(memorySize), price(price){}
GraphicsCard::GraphicsCard(GraphicsCard& other){
	this->brand = other.brand;
	this->memorySize = other.memorySize;
	this->price = other.price;
}
string GraphicsCard::getBrand(){
	return brand;
}
int GraphicsCard::getMemorySize(){
	return memorySize;
}
double GraphicsCard::getPrice(){
	return price;
}
void GraphicsCard::setBrand(string new_brand){
	this->brand = new_brand;
}
void GraphicsCard::setMemorySize(int new_size){
	this->memorySize = new_size;
}
void GraphicsCard::setPrice(double new_price){
	this->price = new_price;
}
StorageDevice::StorageDevice(string type, int capacity, double price) : type(type), capacity(capacity), price(price){}
StorageDevice::StorageDevice(StorageDevice& other){
	this->type = other.type;
	this->capacity = other.capacity;
	this->price = other.price;
}
string StorageDevice::gettype(){
	return type;
}
int StorageDevice::getcapacity(){
	return capacity;
}
double StorageDevice::getPrice(){
	return price;
}
void StorageDevice::settype(string new_type){
	this->type = new_type;
}
void StorageDevice::setcapacity(int new_size){
	this->capacity = new_size;
}
void StorageDevice::setPrice(double new_price){
	this->price = new_price;
}

NetworkCard::NetworkCard(string type, int speed, double price) : type(type), speed(speed), price(price){}
NetworkCard::NetworkCard(NetworkCard& other){
	this->type = other.type;
	this->speed = other.speed;
	this->price = other.price;
}
string NetworkCard::gettype(){
	return type;
}
int NetworkCard::getspeed(){
	return speed;
}
double NetworkCard::getPrice(){
	return price;
}
void NetworkCard::settype(string new_type){
	this->type = new_type;
}
void NetworkCard::setspeed(int new_size){
	this->speed = new_size;
}
void NetworkCard::setPrice(double new_price){
	this->price = new_price;
}
PowerSupply::PowerSupply(string efficiencyRating, int wattage, double price) : efficiencyRating(efficiencyRating), wattage(wattage), price(price){}
PowerSupply::PowerSupply(PowerSupply& other){
	this->efficiencyRating = other.efficiencyRating;
	this->wattage = other.wattage;
	this->price = other.price;
}
string PowerSupply::getEfficiencyRating(){
	return efficiencyRating;
}
int PowerSupply::getwattage(){
	return wattage;
}
double PowerSupply::getPrice(){
	return price;
}
void PowerSupply::setEfficiencyRating(string new_efficiencyRating){
	this->efficiencyRating = new_efficiencyRating;
}
void PowerSupply::setwattage(int new_size){
	this->wattage = new_size;
}
void PowerSupply::setPrice(double new_price){
	this->price = new_price;
}

Battery::Battery(int capacity) : capacity(capacity){}
Battery::Battery(Battery& capacity){
	this->capacity = other.capacity;
}
int Battery::getCapacity() const{
	return capacity;
}
void Battery::setCapacity(int x){
	capacity = x;
}

Case::Case(string formFactor, string color) : formFactor(formFactor), color(color){}
Case::Case(Case& other){
	this->formFactor = other.formFactor;
	this->color = other.color;
}
string Case::getFormFactor(){
	return formFactor;
}
string Case::getColor(){
	return color;
}
void Case::setFormFactor(string new_Form){
	this->formFactor = new_Form;
}
void Case::setColor(string new_Color){
	this->color = new_Color;
}

ComputerAssembly::ComputerAssembly(double price) : price(price){}
ComputerAssembly::ComputerAssembly(ComputerAssembly& other){
	this->price = other.price;
}
double ComputerAssembly::getPrice(){
	return this->price;
}
void ComputerAssembly::setPrice(double new_price){
	this->price = new_price;
}
