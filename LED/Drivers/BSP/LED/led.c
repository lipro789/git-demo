#include "./BSP/LED/led.h"

//��ʼ��LED���IO�ڣ�����ʹ��ʱ��
void led_init(void){

    //1.GPIOʱ��ʹ��
    LED0_GPIO_CLK_ENABLE();                             //LED0ʱ��ʹ��
    LED1_GPIO_CLK_ENABLE();                             //LED1ʱ��ʹ��                 
  
    //2.��ʼ��GPIO
    GPIO_InitTypeDef gpio_init_struct;             
    gpio_init_struct.Pin = LEDO_GPIO_PIN;               //LED0���� 
    gpio_init_struct.Mode =GPIO_MODE_OUTPUT_PP;         //�������     
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_LOW;       //����
    HAL_GPIO_Init(LEDO_GPIO_PORT,&gpio_init_struct);    //��ʼ��LED0����
    
    gpio_init_struct.Pin = LED1_GPIO_PIN;               //LED1���� 
    HAL_GPIO_Init(LED1_GPIO_PORT,&gpio_init_struct);    //��ʼ��LED1����
    
    //3.���øߵ�ƽ
    LED0(1);                                           //�ر�LED0
    LED1(1);                                           //�ر�LED1
}
