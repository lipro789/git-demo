
#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/usart/usart.h"
#include "./SYSTEM/delay/delay.h"
#include "./BSP/LED/led.h"

int temp;
int main(void)
{
    HAL_Init();                         /* 初始化HAL库 */
    sys_stm32_clock_init(336, 8, 2, 7); /* 设置时钟,168Mhz */
    delay_init(168);                    /* 延时初始化 */
  
    led_init();                         //初始化led
    
    while(1)
    {
            temp++;
//          LED0(0);                     //led0亮
//          LED1(1);                     //led1灭
//          delay_ms(200);
//          LED1(0);                     //led0灭
          //LED0(1);                     //led0亮
          delay_ms(200);  

        
    }
}

