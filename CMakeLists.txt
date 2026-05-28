cmake_minimum_required(VERSION 3.10)

project(BlockchainSimulator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(BlockchainSimulator
    src/main.cpp
    src/Block.cpp
    src/Blockchain.cpp
    src/Transaction.cpp
    src/WalletSystem.cpp
    src/SmartContract.cpp
    src/VirtualMachine.cpp
)

add_executable(BlockchainTests
    tests/test.cpp
    src/Block.cpp
    src/Blockchain.cpp
    src/WalletSystem.cpp
    src/SmartContract.cpp
)