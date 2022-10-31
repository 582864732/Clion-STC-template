//
// Created by 58286 on 2022/10/31.
//
#include "gpio.h"

void gpio_config(void)
{
    //P3.6 config
    GPIO_P3_SetMode(GPIO_Pin_6,GPIO_Mode_Output_PP);
    GPIO_SetPullUp(GPIO_Port_3,GPIO_Pin_6,1);

    GPIO_P3_SetMode(GPIO_Pin_2,GPIO_Mode_Output_PP);
    GPIO_SetPullUp(GPIO_Port_3,GPIO_Pin_2,1);

    GPIO_P3_SetMode(GPIO_Pin_3,GPIO_Mode_Output_PP);
    GPIO_SetPullUp(GPIO_Port_3,GPIO_Pin_3,1);

    GPIO_P3_SetMode(GPIO_Pin_4,GPIO_Mode_Output_PP);
    GPIO_SetPullUp(GPIO_Port_3,GPIO_Pin_4,1);

    GPIO_P3_SetMode(GPIO_Pin_5,GPIO_Mode_Output_PP);
    GPIO_SetPullUp(GPIO_Port_3,GPIO_Pin_5,1);

    //P3.7 config
    GPIO_SetDigitalInput(GPIO_Port_6,GPIO_Pin_7,1);
    GPIO_P3_SetMode(GPIO_Pin_7,GPIO_Mode_InOut_QBD);

    //P1.2 config
    GPIO_SetDigitalInput(GPIO_Port_1,GPIO_Pin_2,1);
    GPIO_P1_SetMode(GPIO_Pin_2,GPIO_Mode_Input_HIP);
}
