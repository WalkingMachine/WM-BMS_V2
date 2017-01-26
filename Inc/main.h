/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define B2_GREEN_LED_Pin GPIO_PIN_2
#define B2_GREEN_LED_GPIO_Port GPIOE
#define MCU_RED_LED_Pin GPIO_PIN_3
#define MCU_RED_LED_GPIO_Port GPIOE
#define B1_RED_LED_Pin GPIO_PIN_4
#define B1_RED_LED_GPIO_Port GPIOE
#define B2_RED_LED_Pin GPIO_PIN_5
#define B2_RED_LED_GPIO_Port GPIOE
#define B2_CURR_VZCR_Pin GPIO_PIN_0
#define B2_CURR_VZCR_GPIO_Port GPIOC
#define CHARGER_DETECT_Pin GPIO_PIN_0
#define CHARGER_DETECT_GPIO_Port GPIOA
#define B1_CURR_VZCR_Pin GPIO_PIN_1
#define B1_CURR_VZCR_GPIO_Port GPIOA
#define B2_CURR_SENS_Pin GPIO_PIN_2
#define B2_CURR_SENS_GPIO_Port GPIOA
#define B1_CURR_SENS_Pin GPIO_PIN_3
#define B1_CURR_SENS_GPIO_Port GPIOA
#define CURR_VOC_Pin GPIO_PIN_4
#define CURR_VOC_GPIO_Port GPIOA
#define B1_SPI_CS_Pin GPIO_PIN_4
#define B1_SPI_CS_GPIO_Port GPIOC
#define B2_SPI_CS_Pin GPIO_PIN_5
#define B2_SPI_CS_GPIO_Port GPIOC
#define B1_CHARGE_Pin GPIO_PIN_8
#define B1_CHARGE_GPIO_Port GPIOE
#define B2_CHARGE_Pin GPIO_PIN_9
#define B2_CHARGE_GPIO_Port GPIOE
#define B1_DISCHARGE_Pin GPIO_PIN_10
#define B1_DISCHARGE_GPIO_Port GPIOE
#define B2_DISCHARGE_Pin GPIO_PIN_11
#define B2_DISCHARGE_GPIO_Port GPIOE
#define BUTTON_USER_Pin GPIO_PIN_12
#define BUTTON_USER_GPIO_Port GPIOE
#define BUTTON_SHUTDOWN_Pin GPIO_PIN_13
#define BUTTON_SHUTDOWN_GPIO_Port GPIOE
#define B2_CELL_PD_Pin GPIO_PIN_8
#define B2_CELL_PD_GPIO_Port GPIOD
#define B1_CELL_PD_Pin GPIO_PIN_9
#define B1_CELL_PD_GPIO_Port GPIOD
#define B1_CURR_FAULT_EN_Pin GPIO_PIN_0
#define B1_CURR_FAULT_EN_GPIO_Port GPIOD
#define B2_CURR_FAULT_EN_Pin GPIO_PIN_1
#define B2_CURR_FAULT_EN_GPIO_Port GPIOD
#define B1_CURR_FAULT_Pin GPIO_PIN_3
#define B1_CURR_FAULT_GPIO_Port GPIOD
#define B2_CURR_FAULT_Pin GPIO_PIN_4
#define B2_CURR_FAULT_GPIO_Port GPIOD
#define B2_CELL_ALERT_Pin GPIO_PIN_5
#define B2_CELL_ALERT_GPIO_Port GPIOD
#define B1_CELL_ALERT_Pin GPIO_PIN_6
#define B1_CELL_ALERT_GPIO_Port GPIOD
#define MCU_GREEN_LED_Pin GPIO_PIN_0
#define MCU_GREEN_LED_GPIO_Port GPIOE
#define B1_GREEN_LED_Pin GPIO_PIN_1
#define B1_GREEN_LED_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
