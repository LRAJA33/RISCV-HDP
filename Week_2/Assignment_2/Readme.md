# Assignment 2
Measure CPU performance of all the programs mentioned above using either godbolt or RISC-V disassembler.

# Command
```
riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -o ./Counter.o Counter.c
riscv64-unknown-elf-objdump -d -r Counter.o > Counter_assembly.txt
```
Let us assume the number of clock cycles for the RISC-V instructions.

Instructions associated with add : 2 cycles.

Instructions associated with mul, div, load, store, and move: 3 cycles.

Instructions associated with jump, and branch: 4 cycles.

All other Instructions: 2 cycles.

# Counter

# CPU performance

```
addi	sp,sp,-32 -> 2 cycles
sd	ra,24(sp) -> 3 cycles
sd	s0,16(sp) -> 3 cycles
addi	s0,sp,32 -> 2 cycles
sw	zero,-20(s0) -> 3 cycles
```
Clock cycle per instruction (CPI) = Total number of clock cycles / Number of instructions

So, CPI will be 13 / 5 = 2.6.

Now, CPU time = CPI x Number of instructions for a program x Clock cycle time (T)

Let's assume, T = 100ps.

So, CPU time = 2.6 x 5 x 100ps = 2600ps or 1.3ns.

# Matrix Multiplication

# CPU performance
```
addi	sp,sp,-80 -> 2 cycles
sd	ra,72(sp) -> 3 cycles
sd	s0,64(sp) -> 3 cycles
addi	s0,sp,80 -> 2 cycles
sd	a0,-72(s0) -> 3 cycles
sd	a1,-80(s0) -> 3 cycles
lui	a5,%hi(.LC2) -> 3 cycles
addi	a0,a5,%lo(.LC2) -> 2 cycles
call	puts -> 2 cycles
call	clock -> 2 cycles
sd	a0,-40(s0) -> 3 cycles
sw	zero,-20(s0) -> 3 cycles
j	.L2 -> 3 cycles
```
Clock cycle per instruction (CPI) = Total number of clock cycles / Number of instructions

So, CPI will be 34/ 13 = 2.615.

Now, CPU time = CPI x Number of instructions for a program x Clock cycle time (T)

Let's assume, T = 100ps.

So, CPU time = 2.615 x 13 x 100ps = 3399ps or 3.399 ns.

# ALU

# CPU performance
```
addi	sp,sp,-32 -> 2 cycles
sd	ra,24(sp)  -> 3 cycles
sd	s0,16(sp)  -> 3 cycles
addi	s0,sp,32  -> 2 cycles
lui	a5,%hi(.LC0)  -> 3 cycles
addi	a0,a5,%lo(.LC0)  -> 2 cycles
call	printf  -> 2 cycles
addi	a4,s0,-28  -> 2 cycles
addi	a5,s0,-24  -> 2 cycles
mv	a2,a4  -> 3 cycles
mv	a1,a5  -> 3 cycles
lui	a5,%hi(.LC1)  -> 3 cycles
addi	a0,a5,%lo(.LC1)  -> 2 cycles
call	scanf  -> 2 cycles
lui	a5,%hi(.LC2)  -> 3 cycles
addi	a0,a5,%lo(.LC2)  -> 2 cycles
call	printf  -> 2 cycles
addi	a5,s0,-29  -> 2 cycles
mv	a1,a5  -> 3 cycles
lui	a5,%hi(.LC3)  -> 3 cycles
addi	a0,a5,%lo(.LC3)  -> 2 cycles
call	scanf  -> 2 cycles
lbu	a5,-29(s0)  -> 3 cycles
sext.w	a5,a5  -> 2 cycles
mv	a3,a5  -> 3 cycles
li	a4,45  -> 3 cycles
beq	a3,a4,.L2  -> 4 cycles
mv	a3,a5  -> 3 cycles
li	a4,45  -> 3 cycles
bgt	a3,a4,.L3  -> 4 cycles
mv	a3,a5  -> 3 cycles
li	a4,42  -> 3 cycles
beq	a3,a4,.L4  -> 4 cycles
mv	a3,a5  -> 3 cycles
li	a4,43  -> 3 cycles
beq	a3,a4,.L5  -> 4 cycles
mv	a4,a5  -> 3 cycles
li	a5,38  -> 3 cycles
beq	a4,a5,.L6  -> 4 cycles
j	.L7  -> 3 cycles
```
Clock cycle per instruction (CPI) = Total number of clock cycles / Number of instructions

So, CPI will be 111/ 40 = 2.775.

Now, CPU time = CPI x Number of instructions for a program x Clock cycle time (T)

Let's assume, T = 100ps.

So, CPU time = 2.775x 40 x 100ps = 11100ps or 11.10 ns.
