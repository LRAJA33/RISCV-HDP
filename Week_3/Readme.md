# Vending Machine Controller

## Project Overview:

The RISC-V-based vending machine project entails the development of an automated system for dispensing  using basic components such as a keypad, driver, and LCD display/LED Indication. The project aims to create a cost-effective and user-friendly solution for small-scale  dispensing applications, such as offices, small businesses, or personal use.

## Key Objectives:

Interface Design: Design an intuitive user interface using a keypad and LCD display to allow users to select their preferred  options easily.

Control System Development: Develop the control system using a RISC-V  Processorto manage the input from the keypad, control the  dispensing process, and display relevant information on the LCD /LED Indication.

Hardware Integration: Integrate the keypad, LCD display, and driver circuitry with the RISC-V  Processorto establish communication and ensure proper functioning of the  vending machine.

Software Implementation: Develop the software algorithms to interpret user input, control the operation of the vending machine components, such as the  dispenser and driver circuits, and manage the display of information on the LCD /LED Indication.

 Dispensing Mechanism: Implement a simple mechanism controlled by the RISC-V  Processorto dispense  in response to user input from the keypad.

## Block Diagram

![Screenshot from 2024-03-27 22-07-26](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/e9ecfc48-7250-475c-a17f-0b57547fb537)



## C Code

```
#include <stdio.h>
#include <stdbool.h>


void dispenseProduct(int productNumber) {
    printf("Product %d dispensed!\n", productNumber);
}

int main() {

    bool button1Pressed = false;
    bool button2Pressed = false;
    bool button3Pressed = false;
    bool paymentCompleted = false;
    int selectedProduct = 0;

    printf("Vending Machine Controller\n");

    while (1) {



        if (!button1Pressed && !button2Pressed && !button3Pressed) {
            printf("Please select a product (Enter 1, 2, or 3):\n");

            scanf("%d", &selectedProduct);
            if (selectedProduct == 1) {
                button1Pressed = true;
            } else if (selectedProduct == 2) {
                button2Pressed = true;
            } else if (selectedProduct == 3) {
                button3Pressed = true;
            }
        }


        if (!paymentCompleted) {
            printf("Please complete payment (Enter 1 for payment completed):\n");

            int paymentStatus;
            scanf("%d", &paymentStatus);
            if (paymentStatus == 1) {
                paymentCompleted = true;
            }
        }


        if (paymentCompleted) {
            if (button1Pressed) {
                printf("Product 1 dispensed.\n");
                dispenseProduct(1);
            } else if (button2Pressed) {
                printf("Product 2 dispensed.\n");
                dispenseProduct(2);
            } else if (button3Pressed) {
                printf("Product 3 dispensed.\n");
                dispenseProduct(3);
            }


            button1Pressed = false;
            button2Pressed = false;
            button3Pressed = false;
            paymentCompleted = false;
        }

    }

    return 0;
}

```
## Execution Steps:

1. Compile the Code: Compile the C code using a C compiler like gcc. Assuming your source file is named vend.c, you can compile it with the following command:
gcc -o vending_machine vend.c

2. Run the Executable: Execute the compiled program by running the generated executable. Use the following command:
./vending_machine

3. Test Product Selection: When prompted, enter the number corresponding to the product you want to select (1, 2, or 3) and press Enter.

4. Test Payment Completion: After selecting a product, the program will prompt you to complete the payment by entering 1 and pressing Enter.

5. Verify Product Dispensing: Once the payment is completed, the program will dispense the selected product and display a message indicating the product dispensed.

6. Repeat Testing: You can repeat the testing process by running the program again (./vending_machine) and selecting different products or completing payment multiple times.

7. Exit the Program: To exit the program, you can use the standard method for terminating comman
d-line programs, such as pressing Ctrl+C or closing the terminal window.

![Screenshot from 2024-03-27 21-51-54](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/318cd074-8d43-477d-9003-2781bf52353d)

