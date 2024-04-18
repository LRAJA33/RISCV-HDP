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
