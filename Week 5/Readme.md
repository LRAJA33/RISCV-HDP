# Creating Custom RISC-V Processor 
## Unique Instruction
![Unique_Code](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/40cd821a-ea84-4ae3-87d0-a046363764f0)

###.JSON
```
{
    "ALU_dist": 3,
    "pc_bit_width":8,
    "value_bit_width":32,
    "data_mem_bit_width":8,
    "immediate":12,
    "address_size":5,
    "shamt":5,
    "instructions":{
        "LUI"   :false, 
        "AUIPC" :false,
        "JAL"   :true,  
        "JALR"  :false,
        "BEQ"   :true,
        "BNE"   :true,
        "BLT"   :false,
        "BGE"   :false,
        "BLTU"  :false,
        "BGEU"  :false,
        "LB"    :false,
        "LH"    :false,
        "LW"    :true,
        "LBU"   :false,
        "LHU"   :false,
        "SB"    :false,
        "SH"    :false,
        "SW"    :true,
        "ADDI"  :true,
        "SLTI"  :false,
        "SLTIU" :false,
        "XORI"  :false,
        "ORI"   :true,
        "ANDI"  :true,
        "SLLI"  :false,
        "SRLI"  :true,
        "SRAI"  :false,
        "ADD"   :false,
        "SUB"   :false,
        "SLL"   :false,
        "SLT"   :false,
        "SLTU"  :false,
        "XOR"   :false,
        "SRL"   :false,
        "SRA"   :false,
        "OR"    :false,
        "AND"   :true,
        "MUL"   :false,
        "MULH"  :false,
        "MULHSU":false,
        "MULHU" :false,
        "DIV"   :false,
        "DIVU"  :false,
        "REM"   :false,
        "REMU"  :false,
        "R_type":true,
        "I_type":true,
        "S_type":true,
        "B_type":true,
        "U_type":true,
        "J_type":true,
        "M_type":false 
    },
    "pipelines" :{
        "IF-ID" : true,
        "ID-ALU": false,
        "ALU-M1": false,
        "M1-M2" : true,
        "M2-WB" : true
    },
    "ASIC":false
}
```
## iverilog Simulation

Modify the Processor.v and Testbench.v according to the input and output
```
 iverilog -o vending_v testbench_modified.v processor_modified.v
  vvp vending_v

```
![VCD FIle Generation](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/340c12d8-0684-413e-ac54-f3fcd6c5f242)

![Iverilog_Simulationoutput](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/4a7cdc75-b98a-4248-a03f-88e786966df9)
