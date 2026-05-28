# Blockchain Simulator Project

## Overview

This project is a simplified blockchain simulator written in C++.

The goal of the project is to demonstrate the basic concepts of blockchain systems such as:

- Blocks
- Hashes
- Mining
- Transactions
- Wallet balances
- Smart contracts
- Virtual machine execution
- Blockchain validation

The project was developed as a console application using object-oriented programming principles.

---

# Features

## Blockchain

- Genesis block creation
- Linked blocks using previous hashes
- Block mining simulation
- Blockchain validation

## Transactions

- Sender
- Receiver
- Amount transfer

## Wallet System

- Wallet creation
- Balance storage
- Transfer validation
- Global state updates

## Smart Contracts

- Contract state storage
- Increment and decrement operations
- Contract execution system

## Virtual Machine

- Instruction execution
- Smart contract interaction

## Tests

- Wallet tests
- Blockchain validation tests
- Smart contract tests

---

# Project Structure

```txt
include/
    Block.h
    Blockchain.h
    Transaction.h
    WalletSystem.h
    SmartContract.h
    VirtualMachine.h

src/
    Block.cpp
    Blockchain.cpp
    Transaction.cpp
    WalletSystem.cpp
    SmartContract.cpp
    VirtualMachine.cpp
    main.cpp

tests/
    test.cpp