# Computer Assembly System

A comprehensive C++ application for configuring and pricing computer systems, supporting both desktop PCs and laptops with various hardware configurations.

## Overview

This Object-Oriented Programming (OOP) project implements a computer assembly system that allows users to:
- Configure desktop PCs or laptops
- Choose between PC and Mac systems
- Input detailed hardware specifications
- Calculate total system cost
- Display comprehensive system specifications

## Features

### System Types Supported
- **Desktop PCs** (Intel/AMD based)
- **Laptops** (Intel/AMD based)  
- **Mac Systems** (Apple Silicon based)

### Hardware Components
- **CPU**: Intel, AMD, or Apple Silicon processors
- **ALU Configuration**: Adders, subtractors, registers
- **Control Unit**: Clock speed configuration
- **Motherboard**: Custom naming with ports and main memory
- **Physical Memory (RAM)**: Various DDR types and capacities
- **Graphics Card**: Discrete GPUs for PCs, integrated for Macs
- **Storage**: HDD, SSD, or NVMe drives
- **Network Card**: Configurable type and speed
- **Power Supply**: Efficiency ratings and wattage (desktop only)
- **Case**: Form factors and colors (desktop only)
- **Battery**: Capacity configuration (laptop only)

## Class Structure

### Core Classes
- `ALU`: Arithmetic Logic Unit configuration
- `ControlUnit`: CPU control unit with clock settings
- `CPU`: Complete processor with ALU and control unit
- `MainMemory`: Motherboard integrated memory
- `Port`: I/O port specifications
- `MotherBoard`: Main system board with ports and memory
- `PhysicalMemory`: RAM configuration and pricing
- `Computer`: Core system combining CPU, motherboard, and memory

### Component Classes
- `GraphicsCard`: GPU specifications and pricing
- `StorageDevice`: Storage type, capacity, and pricing
- `NetworkCard`: Network adapter configuration
- `PowerSupply`: PSU efficiency and wattage
- `Battery`: Battery capacity for laptops
- `Case`: Desktop case form factor and aesthetics

### Assembly Class
- `ComputerAssembly`: Complete system assembly with pricing

## Installation & Setup

### Prerequisites
- C++ compiler (GCC, MSVC, or Clang)
- Windows environment (current path configuration)

### Compilation
```bash
g++ -o computer_assembly main.cpp casestudy.cpp
```

### Running the Application
```bash
./computer_assembly
```

## Usage Guide

### Step-by-Step Configuration

1. **System Type Selection**
   - Choose between PC (1) or Mac (2)
   - Select Laptop (1) or Desktop (2)

2. **CPU Configuration**
   - Select processor type: Intel, AMD, or Apple Silicon
   - Configure ALU components (adders, subtractors, registers)
   - Set control unit clock speed

3. **Motherboard Setup**
   - Enter motherboard name
   - Configure main memory capacity and technology
   - Add I/O ports (enter "0" to stop)

4. **Memory Configuration**
   - Specify RAM slots and capacity per slot
   - Select RAM type (DDR1-5, LPDDR1-5)

5. **Graphics Configuration**
   - For PCs: Enter GPU brand and VRAM
   - Macs automatically use integrated graphics

6. **Storage & Networking**
   - Choose storage type (HDD/SSD/NVMe) and capacity
   - Configure network card type and speed

7. **Power & Case (Desktop Only)**
   - Set power supply efficiency rating and wattage
   - Choose case form factor and color

8. **Battery (Laptop Only)**
   - Specify battery capacity

### Valid Input Options

#### RAM Types
- DDR1, DDR2, DDR3, DDR4, DDR5
- LPDDR1, LPDDR2, LPDDR3, LPDDR4, LPDDR5

#### RAM Capacities (GB)
- 1, 2, 4, 8, 16, 32, 64, 128

#### Storage Types
- HDD, SSD, NVMe

#### Power Supply Ratings
- NONE, 80PlusBronze, 80PlusSilver, 80PlusGold, 80PlusPlatinum

#### Case Form Factors
- ATX, Micro ATX, Mini ITX

## Sample Output

```
Your Desktop Specs:
CPU: Intel
ALU
NoOfAdders: 4
NoOfSubtractors: 2
NoOfRegisters: 16
sizeOfRegisters: 64

Control Unit: 3.2

MotherBoard: ASUS ROG
USB 9600
HDMI 1920

Main Memory: DDR4 8 bits

RAM: 16 GB DDR4

Graphics Card: NVIDIA 8 GB

Storage: SSD 512 GB

NetworkCard: Ethernet 1000 Mbps

Power Supply: 650 80PlusGold

Case: ATX Black

----Total Price: 1250
```

## File Structure

```
project/
├── main.cpp           # Main application entry point
├── casestudy.cpp      # Class implementations
├── casestudy.h        # Header file with class declarations
└── README.md          # This file
```

## Technical Details

### Memory Management
- Uses object composition and aggregation
- Implements copy constructors for proper object copying
- Reference-based getters for efficient access

### Input Validation
- Validates system type selections
- Ensures proper RAM capacity values
- Verifies storage and power supply types
- Checks case form factor validity

### Pricing System
- Component-wise pricing for desktop systems
- Laptop pricing as single unit cost
- Automatic total price calculation

## Known Limitations

1. **Path Dependency**: Currently uses absolute path for header inclusion
2. **Platform Specific**: Designed for Windows environment
3. **Input Format**: Requires specific input formats for validation
4. **Memory**: No dynamic memory allocation error handling

## Future Enhancements

- [ ] Cross-platform compatibility
- [ ] Database integration for component pricing
- [ ] GUI implementation
- [ ] Export specifications to file
- [ ] Component compatibility checking
- [ ] Multiple configuration comparison

## Contributing

This is an academic project. For improvements or bug fixes:
1. Fork the repository
2. Create a feature branch
3. Submit a pull request with detailed description

## License

This project is created for educational purposes as part of an Object-Oriented Programming course assignment.

---

**Note**: This system is designed for educational demonstration of OOP principles including encapsulation, inheritance, and composition in C++.
