//
// Created by 58286 on 2022/10/31.
//

#ifndef SDCC_HARDWARE_GPIO_H_
#define SDCC_HARDWARE_GPIO_H_
#include <lint.h>
#include "fw_gpio.h"

#define LED P36

#define LED_ON() LED = 0
#define LED_OFF() LED = 1

void gpio_config(void);

#endif //SDCC_HARDWARE_GPIO_H_
