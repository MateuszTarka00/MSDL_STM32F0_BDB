/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for canOpenManagerT */
osThreadId_t canOpenManagerTHandle;
const osThreadAttr_t canOpenManagerT_attributes = {
  .name = "canOpenManagerT",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityNormal3,
};
/* Definitions for inputCheckT */
osThreadId_t inputCheckTHandle;
const osThreadAttr_t inputCheckT_attributes = {
  .name = "inputCheckT",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for tpdoRequesterT */
osThreadId_t tpdoRequesterTHandle;
const osThreadAttr_t tpdoRequesterT_attributes = {
  .name = "tpdoRequesterT",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void canOpenManager(void *argument);
void inputCheck(void *argument);
void tpdoRequester(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of canOpenManagerT */
  canOpenManagerTHandle = osThreadNew(canOpenManager, NULL, &canOpenManagerT_attributes);

  /* creation of inputCheckT */
  inputCheckTHandle = osThreadNew(inputCheck, NULL, &inputCheckT_attributes);

  /* creation of tpdoRequesterT */
  tpdoRequesterTHandle = osThreadNew(tpdoRequester, NULL, &tpdoRequesterT_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_canOpenManager */
/**
  * @brief  Function implementing the canOpenManagerT thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_canOpenManager */
void canOpenManager(void *argument)
{
  /* USER CODE BEGIN canOpenManager */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END canOpenManager */
}

/* USER CODE BEGIN Header_inputCheck */
/**
* @brief Function implementing the inputCheckT thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_inputCheck */
void inputCheck(void *argument)
{
  /* USER CODE BEGIN inputCheck */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END inputCheck */
}

/* USER CODE BEGIN Header_tpdoRequester */
/**
* @brief Function implementing the tpdoRequesterT thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_tpdoRequester */
void tpdoRequester(void *argument)
{
  /* USER CODE BEGIN tpdoRequester */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END tpdoRequester */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
