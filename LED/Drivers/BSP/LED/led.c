#include "./BSP/LED/led.h"

//初始化LED相关IO口，并且使能时钟
void led_init(void){

    //1.GPIO时钟使能
    LED0_GPIO_CLK_ENABLE();                             //LED0时钟使能
    LED1_GPIO_CLK_ENABLE();                             //LED1时钟使能                 
  
    //2.初始化GPIO
    GPIO_InitTypeDef gpio_init_struct;             
    gpio_init_struct.Pin = LEDO_GPIO_PIN;               //LED0引脚 
    gpio_init_struct.Mode =GPIO_MODE_OUTPUT_PP;         //推挽输出     
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_LOW;       //低速
    HAL_GPIO_Init(LEDO_GPIO_PORT,&gpio_init_struct);    //初始化LED0引脚
    
    gpio_init_struct.Pin = LED1_GPIO_PIN;               //LED1引脚 
    HAL_GPIO_Init(LED1_GPIO_PORT,&gpio_init_struct);    //初始化LED1引脚
    
    //3.设置高电平
    LED0(1);                                           //关闭LED0
    LED1(1);                                           //关闭LED1
}
