/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IN_9_Pin GPIO_PIN_13
#define IN_9_GPIO_Port GPIOC
#define IN_10_Pin GPIO_PIN_14
#define IN_10_GPIO_Port GPIOC
#define IN_8_Pin GPIO_PIN_3
#define IN_8_GPIO_Port GPIOA
#define IN_1_Pin GPIO_PIN_4
#define IN_1_GPIO_Port GPIOA
#define IN_3_Pin GPIO_PIN_5
#define IN_3_GPIO_Port GPIOA
#define IN_2_Pin GPIO_PIN_6
#define IN_2_GPIO_Port GPIOA
#define IN_4_Pin GPIO_PIN_7
#define IN_4_GPIO_Port GPIOA
#define OUT_12_Pin GPIO_PIN_12
#define OUT_12_GPIO_Port GPIOB
#define OUT_16_Pin GPIO_PIN_15
#define OUT_16_GPIO_Port GPIOB
#define OUT_15_Pin GPIO_PIN_8
#define OUT_15_GPIO_Port GPIOA
#define IN_6_Pin GPIO_PIN_9
#define IN_6_GPIO_Port GPIOA
#define IN_5_Pin GPIO_PIN_10
#define IN_5_GPIO_Port GPIOA
#define CAN_FAULT_Pin GPIO_PIN_15
#define CAN_FAULT_GPIO_Port GPIOA
#define CAN_OK_Pin GPIO_PIN_3
#define CAN_OK_GPIO_Port GPIOB
#define IN_7_Pin GPIO_PIN_4
#define IN_7_GPIO_Port GPIOB
#define OUT_13_Pin GPIO_PIN_5
#define OUT_13_GPIO_Port GPIOB
#define OUT_14_Pin GPIO_PIN_8
#define OUT_14_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
