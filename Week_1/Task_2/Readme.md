# Assignment: Task 2 - 4-bit ALU Design and Verification
This assignment involves designing a 4-bit Arithmetic Logic Unit (ALU) in both C code and Verilog. The ALU design will be verified using gcc for the C code and iverilog along with gtkwave for the Verilog code. Below are the instructions for completing the assignment:

## Designing the 4-bit ALU in C:

Implement the 4-bit ALU functionality in C code.
Use basic arithmetic and logic operations such as addition, subtraction, bitwise AND, bitwise OR, etc.
Verify the correctness of the C code using gcc compiler.

#include <stdio.h>
#include <string.h>
int main() {
    int a, b, result;
    char operation;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the required operation (add, sub, mul, div): ");
    scanf(" %c", &operation);
    switch (operation) {
        case 'a':
            result = a + b;
            printf("Value of %d + %d is %d\n", a, b, result);
            break;
        case 's':
            result = a - b;
            printf("Value of %d - %d is %d\n", a, b, result);
            break;
        case 'm':
            result = a * b;
            printf("Value of %d * %d is %d\n", a, b, result);
            break;
        case 'd':
            if (b == 0) {
                printf("Can't divide when b is zero\n");
            } else {
                result = a / b;
                printf("Value of %d / %d is %d\n", a, b, result);
            }
            break;
        default:
            printf("Invalid operation selected\n");
            break;
    }
    return 0;
}  


## Verifying the C Code using gcc:

Compile the C code using the gcc compiler.
Run the compiled executable to verify the functionality of the 4-bit ALU.

![4bitalu_res](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/e96b8a7f-f305-4c07-9306-ab2b25ffdc38)

![4bitalu](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/62ed60fc-e236-427f-b556-8fb70b2798db)


## Installing Iverilog on Ubuntu:

Icarus Verilog (Iverilog) is an open-source simulator that supports the Verilog hardware description language (HDL) and is commonly used in small-scale projects for digital circuit design and verification.

1. Go to the official Icarus Verilog GitHub repository. Select the V12-branch and download
    https://github.com/steveicarus/iverilog/tree/v12-branch?ref=circuitcove.com
2. Open a terminal window and navigate to the directory where the zip or tarball was downloaded. Then, unpack the tarball or unzip using the following command:
     unzip iverilog-12-branch.zip
     cd iverilog-12-branch
4. Run the autoconf script to generate the configure file using the following command:
   
     sh ./autoconf.sh

6. Run the configure script using the following command:
   
     ./configure

8. Build Icarus Verilog using the make command:
   
      make
   
10. Install Icarus Verilog using the following command:
    
      sudo make install 

## Installing Gtkwave on Ubuntu:

gtkwave is a viewer for VCD (Value Change Dump) files which are usually created by digital circuit simulators. 

  sudo apt-get update

  sudo apt-get -y install gtkwave

## Designing the 4-bit ALU in Verilog:

Implement the 4-bit ALU functionality in Verilog HDL.
Define input and output ports for the ALU operations.
Write testbench code to verify the functionality of the Verilog ALU.

## alu.sv

module ALU(
    input [3:0] a, b,
    input [2:0] op,
    output reg [3:0] result
);

always @* begin
    case (op)
        3'b000: result = a + b;
        3'b001: result = a - b;
        3'b010: result = a * b;
        3'b011: if (b != 0) result = a / b;
                else result = 4'b0000;
        3'b100: result = a | b;
        3'b101: result = a ^ b;
        default: result = 4'b0000;
    endcase
end

endmodule

## alu_tb .sv

module ALU_tb();

reg [3:0] a, b;
reg [2:0]op;
wire [3:0] result; 

ALU uut (
.a(a),
.b(b),
.op(op),
.result(result)
);

initial begin
  $dumpfile("ALU.vcd");
  $dumpvars(1, ALU_tb);

a = 4'b1011; b = 4'b1001; op = 3'b000; #10;
a = 4'b1100; b = 4'b1001; op = 3'b101; #10;
a = 4'b1001; b = 4'b1101; op = 3'b010; #10;
a = 4'b1101; b = 4'b1111; op = 3'b100; #10;
end
endmodule

## Verifying the Verilog Code using iverilog and gtkwave:

Install iverilog and gtkwave on your Ubuntu system (instructions provided below).
Compile the Verilog code using iverilog.
Simulate the compiled Verilog code using vvp.
Use gtkwave to visualize the simulation waveform and verify the functionality of the Verilog ALU.



