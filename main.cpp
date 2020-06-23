/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS        500
#define SERIAL_TO_PC_TX         P7_1
#define SERIAL_TO_PC_RX         P7_0

Serial pc(SERIAL_TO_PC_TX, SERIAL_TO_PC_RX, 115200);


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);

    while (true) {
        pc.printf("Toggle\n");
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE_MS);
    }
}
