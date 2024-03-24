## ASSIGNMENT

1. Verify all the c code (counter, matrix multiplication, ALU code using RISC-V compiler and spike output.
2. Measure CPU performance of all the programs mentioned above using either godbolt or RISC-V disassembler.

## NOTES
# CPU Performance Metrics
Computer A is 1.2 times as fast as Computer B (30/25=1.25) 
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/a5575dc5-cff6-487c-82a0-a2d31616dc8f)

# CPU Execution Time:
The taken by the CPU to take the data from memory, process it and again send back to the memory 
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/831988e5-b1ae-4868-843c-6f50ae1f5096)

# Types of CPU Execution:
Two types of CPU Execution time a) User CPU time (Time spent on User Program) b) System CPU time (Time spent in OS on behalf of User program
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/bc685808-d2fc-4279-97e2-bcbea257f144)

# CPU Performance:
CPU Perfromance is calcualted based on the Time spent on User Program 
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/06a0c1cf-d5db-4eb8-903a-4cb8fb5a75cb)

# Clock
Clock Period/Clock frequency and Number of cycles decides the CPU performance
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/1bd009c2-4316-4a05-8b92-73a247d5bb23)

# CPU time
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/cac01460-bd22-4e00-b59d-ff0eee99347d)

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/ba74d2e4-3d04-4240-a3fd-ae1e492c8213)

# CPU Clock Cycles
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/aa8217a9-5391-478f-91ff-8b847e98daea)

# CPU Comparison
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/b30aacbc-593a-475a-9337-5ab920f6a86b)

# Swap Operation for Performance Comparison
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/fbd262b9-1008-4b62-83b4-38dd9bd579dd)

# CPI - Clock Cycles per Instructions
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/e2cd5331-3ea7-4716-88b9-cb7968eaa895)

# CPU Time with CPI - Clock Cycles per Instructions
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/5008d291-9606-47d5-81ed-ecc1be3a03e4)

# CPU Performance Example:
CPU 2 is 1.2 times faster than that of CPU 1 
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/f5b46045-41b1-4640-941b-220b555e38ea)

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/b372cf7f-2578-4a61-a69a-e3eb6860bd81)

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/3aeee155-8ea7-40a6-b317-4558740b03a7)

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/0b88efeb-c264-40c7-bdd3-e992b730d001)

# Code Sequence Speed Comparison:
Code Sequence 2 is faster than the code sequence 1
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/01b47d68-39f1-4c3d-918e-8887b9b21f2d)


# CHIPCRON UTILITY 
# Steps to be followed to create a Custom core using ChipCron tool
  # ChipCron tool Template
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/62d8496a-5399-455d-817e-d7e43b42b570)

  # Architecture Type Selection

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/aa5ebce7-421c-42b3-8bdc-3b01031e617c)

# + After Selecting the Architecture

PC and IF will be enabled for the selected architecture
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/e02e98c1-78fa-4002-8a8a-acf7a1c8fd42)

# Instruction Selection
Among 47 instructions select the instructions which ever we want for our applications. Select the Unique Instruction from your RISC V compiler output.
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/57239fdc-b6ff-4694-884d-301bfd411254)

# + After Selecting the Instruction

Decode Stage and Execution Stage will be enabled for the selected architecture
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/4c3df94a-5ac0-4790-a312-8eb3216ff532)

# Number of Register Selection
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/96bc82f5-1c0b-4658-8f79-076c2ce3d64f)

# + After Selecting the Number of Registers

RegF block is enabled for the selected architecture

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/98855502-a8f6-454e-9bc6-cf7e6e0c599a)

# Defining Memory Size
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/b1a58399-6a9d-456e-9c1d-a788df06c5d1)

# + After Selecting the Memory Size

MEM and WB block is enabled for the selected architecture

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/4e626021-c25e-42ba-a36c-a0b8643c127e)

# Pipelineling Stage
ChipCron supports 0 to 5 stages of Pipeline.
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/70928f97-5402-42b2-ac75-c9396effee32)

# + After Selecting the Pipeline Stage
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/67ed1830-f6e2-43c9-a57b-05bef7f2a3e7)

 # + After Full Connection

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/0ab28ced-3b50-4e9c-8ceb-1c067cfbc956)
 
Script based methodologies
Configuration file for Microarchitecture is dumped from RISCV compiler as a architecture specification
# ChipCron Optimization
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/a8e4a211-2ca5-4c47-a3a1-d2cf2fd4ca11)

# ChipCron file Dumping Procedure
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/6351cf9c-3054-4ec2-8aa7-720fc1128190)

Instruction (JSON) Files and Assembly file(.txt) need to be give as a input to ChipCron tool , it will generate a ZIP file. The file consists of Synthesizable RTL with testbench. We can perform RTL simulation using Verilog and testbench file.

![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/dda0f197-ab7c-4e6d-af3f-a02be5758a63)

## RISCV Explanation

# Overall Flow:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/dec9d4da-cf21-47ab-842d-58b4f00d8b7b)

# Application Flow:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/02f5c860-9abf-4c80-9831-7d601884c22b)


# Pseudo Instructions:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/4bc1943d-551f-44be-b902-1af83d91b42e)


# Base Integer Instructions:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/811ba63a-5da1-4c47-bafb-f167b5b2474b)


# Multiply Extenstion Instructions:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/0dc54e1f-792b-43b3-a2ff-6a4d1415a701)


# Floating Point Instructions:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/2dee7088-f1b7-4998-9aa0-7ed7549d719c)


# ABI:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/580cdf9d-6457-40c1-bd0b-077d4a17719e)


# Memory Allocation Pointers:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/5f017f3a-0efa-4191-848c-16189d3b68dd)


# Double Word:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/163201e3-6d4d-4a81-b095-6831cf8f5bd2)


# Unsigned Number Range:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/5f9f4cca-3605-4892-86ad-0674fd94c642)

# Unsigned Number Range General Formula:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/9c145d65-ccbb-4fd1-904c-422e13e55be2)


# Signed Number Range:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/7eb87b8c-3fcf-4cfe-9016-8c8d65373694)

# Summary Points:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/d4e138f2-bd8a-45d8-a6a5-db0ab01f19af)


# ABI Flow:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/5fd68bff-18f0-4f4b-888d-9228bfa8ce1b)


# ABI 32 Bit Registers:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/de090be1-bac1-48cb-8cf5-775131361d4b)


# Little Endian Memory Addressing:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/56d8e7ad-fc8f-48a5-88b5-83aa4306c4dc)


# Load Double Word Command:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/20c8e7fe-b443-4360-b6b1-2e613d4e4e6a)


# Add Command:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/2444640d-4fe3-47c9-8415-2d306078437f)


# Store Double Word Command:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/acb287af-1a85-4a5f-9168-e75dd950c08c)


# Conclusion of Registers:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/96105b36-cab5-441b-9118-ffbacd5369b3)


# ABI Registers:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/105d7c10-fd4e-4c06-8664-991e11ef33e6)


# How to Run C Program in RISC V:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/bcc09e2c-032e-4430-87b7-79fa2828b481)

## RISCV Microarchitecture.md
# Instruction Classess for Processor Implementation:
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/d7eea0ad-fe33-4b11-a4a9-520820fd6248)

# RISC V Instructions
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/d62a605a-955a-47da-8f0d-b1fd5e8ce662)

# Instruction Classess for Processor Implementation:
  1. Program counter cointains the address of the current instruction
  2. Every Instructions read one or two registers PC
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/a8d68724-5a97-4cfb-97be-41ebbe2f335c)

# Processor Implementation:
How Instructions are converted as architecture Processor Implementation
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/6257dee9-6aab-4204-9aab-665392aa8c1f)
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/fdc923ad-e873-4f6a-a1bb-4064da44f96a)

# Complete Architecture Complete Architecture
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/69617d36-8ed9-4513-b8f0-661c71d99287)
