# 🧠 Understanding GPIO Basics in Microcontrollers

This project explains the **basic steps required to enable and control GPIO pins** in any microcontroller, using **STM32F103/105/107** as a working example.

---

## 📌 Objective

To turn ON/OFF an LED connected to a microcontroller pin using **bare-metal (register-level) programming**.

---

## 🧭 General Steps to Use GPIO in Any Microcontroller

### 1️⃣ Identify the GPIO Port and Pin

- Determine which port and pin the device (LED, button, etc.) is connected to.
- Example: GPIOD Pin 12 (STM32F103).

### 2️⃣ Enable the Peripheral Clock (RCC or similar)

- Enable the clock to the GPIO port using the microcontroller’s RCC or system controller.

```c
RCC->APB2ENR |= (1 << 5);  // Enable clock for GPIOD
```

### 3️⃣ Configure the GPIO Pin Mode

Decide whether the pin is Input or Output.

Choose output type (Push-Pull/Open-Drain) and speed.

```c
GPIOD->CRH &= ~(0xF << 16); // Clear bits for Pin 12
GPIOD->CRH |=  (0x2 << 16); // Set as Output Push-Pull, 2MHz
```

### 4️⃣ Write or Read from the Pin

Set Pin High (ON):

```c
GPIOD->BSRR = (1 << 12);
```

Set Pin Low (OFF):

```c
GPIOD->BRR = (1 << 12);
```

Read Input Pin:

```c
int pin_state = (GPIOD->IDR >> 12) & 0x01;
```

### ⚙️ Example Hardware Setup

Microcontroller: STM32F103 / STM32F105 / STM32F107

Peripheral: LED connected to GPIOD Pin 12

Tools: STM32CubeIDE / Keil MDK / OpenOCD + VSCode

### 📂 File Structure

Edit
├── main.c           # Application code
├── startup.s        # Startup code (if applicable)
├── linker.ld        # Linker script
└── README.md        # This file

### 📚 Reference

STM32F1 Reference Manual: STMicroelectronics Official Site            
ARM Cortex-M3 Architecture Manual
