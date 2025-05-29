/*
 *   stm32f107_gpio.h
 *  Created on: May 29, 2025
 *  Author: gandl bhargavi
 */

#ifndef STM32F107_GPIO_H
#define STM32F107_GPIO_H

#include <stdint.h>

/* Base Address for GPIOA */
#define GPIOA_BASE  0x40010800
#define RCC_BASE    0x40021000

/* Register definitions */
#define GPIOA_CRL   *(volatile uint32_t *)(GPIOA_BASE + 0x00)  // Control Register Low
#define GPIOA_ODR   *(volatile uint32_t *)(GPIOA_BASE + 0x0C)  // Output Data Register
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)    // Clock Enable Register

/* Pin Definition */
#define LED_PIN 5

/* Function Prototypes */
void gpio_init(void);
void led_toggle(void);
void delay(void);

#endif /* STM32F107_GPIO_H */

