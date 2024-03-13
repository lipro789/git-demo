#ifndef _LED_H
#define _LED_H


#include "./SYSTEM/sys/sys.h"

/*���Ŷ���*/

#define LEDO_GPIO_PORT                      GPIOF
#define LEDO_GPIO_PIN                       GPIO_PIN_9

#define LED0_GPIO_CLK_ENABLE()              do{ __HAL_RCC_GPIOF_CLK_ENABLE(); }while(0)               /* PF��ʱ��ʹ�� */

#define LED1_GPIO_PORT                      GPIOF
#define LED1_GPIO_PIN                       GPIO_PIN_10

#define LED1_GPIO_CLK_ENABLE()              do{ __HAL_RCC_GPIOF_CLK_ENABLE(); }while(0)                /* PF��ʱ��ʹ�� */

/*LED�˿ڶ���*/
#define LED0(x)    do{x ? \
                      HAL_GPIO_WritePin(LEDO_GPIO_PORT,LEDO_GPIO_PIN,GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LEDO_GPIO_PORT,LEDO_GPIO_PIN,GPIO_PIN_RESET); \
                     }while(0)
/*LED�˿ڶ���*/
#define LED1(x)    do{x ? \
                      HAL_GPIO_WritePin(LED1_GPIO_PORT,LED1_GPIO_PIN,GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LED1_GPIO_PORT,LED1_GPIO_PIN,GPIO_PIN_RESET); \
                     }while(0)

/*LED�˿�ȡ��*/    
#define LED0_TOGGLE()  do{ HAL_GPIO_TogglePin(LEDO_GPIO_PORT,LEDO_GPIO_PIN); }while(0)
#define LED1_TOGGLE()  do{ HAL_GPIO_TogglePin(LED1_GPIO_PORT,LED1_GPIO_PIN); }while(0)
                      
                     

/*�ⲿ�ӿں���*/
void led_init(void);      /*��ʼ��*/




#endif
