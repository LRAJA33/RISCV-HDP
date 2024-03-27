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

![Screenshot from 2024-03-24 22-46-05](https://github.com/LRAJA33/RISCV-HDP/assets/105126037/be71fb00-1a99-4b22-826a-c2d6c8a57cf1)


## Flow Chart



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

