## Assignment 1
  Verify all the c code (counter, matrix multiplication, ALU code using RISC-V compiler and spike output.
# Commands
```
riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -ffreestanding -o ./Counter.o Counter.c
spike pk Counter.o
```
# Code for Counter.C
```
#include <stdio.h>
#include <time.h>

void delay(int n) {
    int us = n; // microseconds
    clock_t start_time = clock();
    while (clock() < start_time + (us * CLOCKS_PER_SEC / 1000000));
}

void display(int count) // Function to display the data on the four Led's
{
	printf("Count value is: %d\n", count);						
}

int main()
{
	int count = 0x00000000;
	while (1)
	{
		display(count);
		count++;
        if(count==16){
            count=0;
        }
		delay(500000);   // delay by 0.5 microseconds
	}
}
```
Spike Simulation
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/5cdca57b-1a48-410a-9c49-2e62e383590f)


# Code for Matrix Multiplication.C
// C program to multiply two matrices
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Edit MACROs here, according to your Matrix Dimensions for
// mat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2

void mulMat(int mat1[][C1], int mat2[][C2])
{
	int rslt[R1][C2];

	printf("Multiplication of given two matrices is:\n");

    clock_t start_time, end_time;

    start_time = clock() ; 

	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			rslt[i][j] = 0;

			for (int k = 0; k < R2; k++) {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}

			printf("%d\t", rslt[i][j]);
		}

		printf("\n");
	}

    end_time = clock() ; 
    printf("Total time taken in seconds %d:\n", end_time - start_time);

}

// Driver code
int main()
{
	// R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
	// values in MACROs)
	int mat1[R1][C1] = { { 1, 1 },
						{ 2, 2 } };

	int mat2[R2][C2] = { { 1, 1 },
						{ 2, 2 } };


	if (C1 != R2) {
		printf("The number of columns in Matrix-1 must be "
			"equal to the number of rows in "
			"Matrix-2\n");
		printf("Please update MACROs value according to "
			"your array dimension in "
			"#define section\n");

		exit(EXIT_FAILURE);
	}

	// Function call
	mulMat(mat1, mat2);

	return 0;
}
```
Spike Simulation
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/e13678e0-16a7-4737-9531-683252d29261)


# Code for ALU.C
```
#include<stdio.h>
int main() {

int a,b,result ; // introducting a,b, result as integers
char op;  // Operation
printf("Enter two numbers:"); //printing and scanning the numbers
scanf("%d %d", &a, &b);

printf("Enter the operation from ADD, SUB, MUL, DIV, OR, AND, XOR : "); //printing what operation is to be done
scanf(" %c", &op);

switch(op) {
 case '+': // Addition
   result = a + b; 
  break;
 
 case '-': // Subtraction
    result = a - b;
  break;

 case '*': // Multiplication
    result = a * b;
  break;

 case '/': // Division
    result = a / b;
  break;

 case '|': // OR
   result = a | b;
  break;

 case '&': // AND
   result = a & b;
  break;

 case '^': // XOR
   result = a ^ b;
  break;

 default: // If others, wrong operation will be generated
   printf("Wrong operation");
   return 1;
}

printf("Result is: %d", result); // Printing the result

return 0;

}

```
Spike Simulation
![image](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/6d4c4d86-f5e8-467f-aa22-b8fdf18ef599)

