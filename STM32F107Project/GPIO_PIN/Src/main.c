/**
 * @file main.c
 * @author Gandla bhargavi
 * @brief Main file for GPIO LED blinking
 * @version 0.1
 * @date 2025-06-03
 *
 */
#include "stm32f107_gpio.h"

/**
 * @brief  Initialize GPIO for LED blinking.
 *
 */
void gpio_init(void) {
    RCC_APB2ENR |= (1 << 2);  // Enable GPIOA Clock
    GPIOA_CRL &= ~(0xF << (LED_PIN * 4)); // Clear settings
    GPIOA_CRL |= (0x1 << (LED_PIN * 4));  // Set pin as output
}
/**
 * @brief Toggle the LED state.
 *
 */
void led_toggle(void) {
    GPIOA_ODR ^= (1 << LED_PIN);  // Toggle LED
}

/**
 * @brief  Delay function to create a simple delay.
 *
 */
void delay() {
    for (volatile int i = 0; i < 100000; i++);  // Simple delay loop
}

/**
 * @brief  Main function to initialize GPIO and
 * toggle LED in an infinite loop.
 *
 * @return int
 */
int main() {
    gpio_init();
    while (1) {
        led_toggle();
        delay();
    }
}
