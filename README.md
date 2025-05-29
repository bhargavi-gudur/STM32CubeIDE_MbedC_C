# STM32 Bare-Metal GPIO LED Control (Code-Only Project)

## 📝 Overview

This project contains bare-metal C code for toggling an LED on an STM32F107RB microcontroller. It is written and tested for successful build in **STM32CubeIDE**, but **not yet run on actual hardware**. It's ideal for learning low-level embedded development through direct register access.

✅ **Built successfully** using **STM32CubeIDE**.  
❌ **Not tested on actual hardware** yet.

## 🎯 Purpose

- Practice direct register (bare-metal) programming
- Understand GPIO configuration without HAL/LL libraries
- Explore STM32 GPIO control fundamentals

---

## 🔧 Development Tools

- **STM32CubeIDE** – for writing, compiling, and managing the project
- **Visual Studio Code** – for source control operations.
- **GitHub** – for version control
- **Optional**: Makefile for command-line builds

---

## 🛠 Requirements

- STM32CubeIDE installed
- VS Code installed (optional, for GitHub)
- GitHub installed and configured

---

## 🔌 Code Behavior

- LED connected to **GPIOA Pin 5** is toggled repeatedly
- GPIO configured using **register-level** (bare-metal) C code
- Simple blocking delay added for visible blink rate

---

## 🧠 Function Definitions

```c
void gpio_init(void);     // Initializes GPIOA pin 5 as output
void led_toggle(void);    // Toggles GPIOA pin 5
void delay(void);         // Busy-wait loop for delay

## 🗂️ Project Structure
 
GPIO_PIN/
├── Inc/
│ └── stm32f107_gpio.h # GPIO function declarations
│
├── Src/
│ ├── main.c # Main application logic
│ ├── syscalls.c # System call stubs for newlib
│ ├── sysmem.c # Memory allocation support
│
├── Startup/ # (Assumed startup files, if present)
│
├── STM32F107RBTX_FLASH.ld # Linker script
├── .cproject / .project # Eclipse-based project files
├── .gitignore # Git ignored files
└── README.md # Project documentation
