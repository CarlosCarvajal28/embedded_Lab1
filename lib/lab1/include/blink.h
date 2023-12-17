#ifndef _BLINKH
#define _BLINKH
#include <zephyr.h>
#include <device.h>
#include <drivers/gpio.h>

int second_thread_setup(const struct device *dev, gpio_pin_t pin, gpio_flags_t flags, int *counter);

int second_thread_iteration(const struct device *dev, gpio_pin_t pin, int led_state, int *counter);

int main_thread_setup(const struct device *dev, gpio_pin_t pin, gpio_flags_t flags);

int main_thread_iteration(const struct device *dev, gpio_pin_t pin, int led_state);

void thread_entry(void);

#endif