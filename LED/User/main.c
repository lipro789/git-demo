
#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/usart/usart.h"
#include "./SYSTEM/delay/delay.h"
#include "./BSP/LED/led.h"

int temp;
int main(void)
{
    HAL_Init();                         /* ��ʼ��HAL�� */
    sys_stm32_clock_init(336, 8, 2, 7); /* ����ʱ��,168Mhz */
    delay_init(168);                    /* ��ʱ��ʼ�� */
  
    led_init();                         //��ʼ��led
    
    while(1)
    {
            temp++;
//          LED0(0);                     //led0��
//          LED1(1);                     //led1��
//          delay_ms(200);
//          LED1(0);                     //led0��
          //LED0(1);                     //led0��
          delay_ms(200);  

        
    }
}

