# Blockchain Simulator Documentation

## Project Overview

Blockchain Simulator is a C++ educational project designed to demonstrate the fundamental concepts of blockchain technology.

The simulator implements a simplified blockchain environment including:

* Block creation
* Hash generation
* Mining simulation
* Transaction processing
* Wallet management
* Smart contracts
* Virtual machine execution
* Blockchain validation

The project was developed using Object-Oriented Programming principles and built with CMake.

---

## Project Structure

```
BlockchainProject/
│
├── include/
│   ├── Block.h
│   ├── Blockchain.h
│   ├── Transaction.h
│   ├── WalletSystem.h
│   ├── SmartContract.h
│   └── VirtualMachine.h
│
├── src/
│   ├── Block.cpp
│   ├── Blockchain.cpp
│   ├── Transaction.cpp
│   ├── WalletSystem.cpp
│   ├── SmartContract.cpp
│   ├── VirtualMachine.cpp
│   └── main.cpp
│
├── tests/
│   └── test.cpp
│
├── docs/
│   └── Documentation.md
│
└── README.md
```

---

## Main Components

### Block

Represents a blockchain block.

Responsibilities:

* Store block data
* Store previous hash
* Generate hash value
* Simulate mining process

---

### Blockchain

Represents the blockchain itself.

Responsibilities:

* Store blocks
* Add new blocks
* Validate blockchain integrity

---

### Transaction

Represents a transfer between users.

Responsibilities:

* Sender information
* Receiver information
* Transfer amount

---

### Wallet System

Manages user balances.

Responsibilities:

* Create wallets
* Execute transactions
* Update balances

---

### Smart Contract

Represents a simplified smart contract.

Responsibilities:

* Store contract state
* Execute contract operations

Implemented operations:

* Increment
* Decrement

---

### Virtual Machine

Executes smart contract instructions.

Responsibilities:

* Execute contract commands
* Simulate blockchain virtual machine behavior

---

## Blockchain Workflow

1. Genesis block is created.
2. Transactions are generated.
3. Wallet balances are updated.
4. Smart contract instructions are executed.
5. New block is mined.
6. Blockchain integrity is verified.

---

## Testing

The project contains automated tests located in:

```
tests/test.cpp
```

Implemented tests:

* Wallet transaction test
* Smart contract test
* Blockchain validation test

---

## Build Instructions

Generate build files:

```bash
cmake -B build
```

Build project:

```bash
cmake --build build
```

Run simulator:

```bash
./BlockchainSimulator.exe
```

Run tests:

```bash
./BlockchainTests.exe
```

---

## Conclusion

This project demonstrates the core concepts of blockchain technology through a simplified educational implementation written in C++.
