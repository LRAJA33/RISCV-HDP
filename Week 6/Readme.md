# Synthesis
Commands
```
read_liberty -lib sky130_fd_sc_hd__tt_025C_1v80_256.lib
read_verilog processor_modified.v
synth -top wrapper
abc -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib
dfflibmap -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib
write_verilog synth_processor.v
show wrapper
```
### abc Output
![abc result](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/fe91d429-c03e-4f70-b093-b0f89bc9195f)

### RTL Schematic
![RTL_Schematic](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/1e4fa8f1-8b2f-457d-ab74-47a15278e1b7)

## Gate Level Simulation

commands

```
iverilog -o output_gls testbench_modified.v synth_processor.v sky130_sram_1kbyte_1rw1r_32x256_8.v sky130_fd_sc_hd.v primitives.v
vvp output_gls
```
### VCD File Generation

vsduser@rajasekar:~/Rajasekar/Synthesis$ 
vsduser@rajasekar:~/Rajasekar/Synthesis$ vvp output_gls 
VCD info: dumpfile waveform.vcd opened for output.
Test Results:
    PASSES:           0
    FAILS :           0
Finish simulation at time               112000
testbench_modified.v:248: $finish called at 112000000000000000 (1ps)

![Gatelevel Simulation](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/ddc37285-dd4b-44a7-a010-3243c42c7231)

