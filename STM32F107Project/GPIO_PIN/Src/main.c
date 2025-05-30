#include "stm32f107_gpio.h"

void gpio_init(void) {
    RCC_APB2ENR |= (1 << 2);  // Enable GPIOA Clock
    GPIOA_CRL &= ~(0xF << (LED_PIN * 4)); // Clear settings
    GPIOA_CRL |= (0x1 << (LED_PIN * 4));  // Set pin as output
}

void led_toggle(void) {
    GPIOA_ODR ^= (1 << LED_PIN);  // Toggle LED
}

void delay() {
    for (volatile int i = 0; i < 100000; i++);  // Simple delay loop
}

int main() {
    gpio_init();
    while (1) {
        led_toggle();
        delay();
    }
}
