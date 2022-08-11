/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define POT_Pin GPIO_PIN_0
#define POT_GPIO_Port GPIOA
#define LED52_Pin GPIO_PIN_7
#define LED52_GPIO_Port GPIOA
#define LED41_Pin GPIO_PIN_0
#define LED41_GPIO_Port GPIOB
#define LED51_Pin GPIO_PIN_1
#define LED51_GPIO_Port GPIOB
#define LED11_Pin GPIO_PIN_2
#define LED11_GPIO_Port GPIOB
#define BUTTON_Pin GPIO_PIN_10
#define BUTTON_GPIO_Port GPIOB
#define BUTTON_EXTI_IRQn EXTI15_10_IRQn
#define LEFT_GREEN_Pin GPIO_PIN_12
#define LEFT_GREEN_GPIO_Port GPIOB
#define LEFT_YELLOW_Pin GPIO_PIN_13
#define LEFT_YELLOW_GPIO_Port GPIOB
#define LEFT_RED_Pin GPIO_PIN_14
#define LEFT_RED_GPIO_Port GPIOB
#define RIGHT_GREEN_Pin GPIO_PIN_15
#define RIGHT_GREEN_GPIO_Port GPIOB
#define RIGHT_YELLOW_Pin GPIO_PIN_8
#define RIGHT_YELLOW_GPIO_Port GPIOA
#define RIGHT_RED_Pin GPIO_PIN_9
#define RIGHT_RED_GPIO_Port GPIOA
#define LED22_Pin GPIO_PIN_10
#define LED22_GPIO_Port GPIOA
#define LED13_Pin GPIO_PIN_11
#define LED13_GPIO_Port GPIOA
#define LED42_Pin GPIO_PIN_12
#define LED42_GPIO_Port GPIOA
#define LED12_Pin GPIO_PIN_15
#define LED12_GPIO_Port GPIOA
#define LED31_Pin GPIO_PIN_3
#define LED31_GPIO_Port GPIOB
#define LED53_Pin GPIO_PIN_4
#define LED53_GPIO_Port GPIOB
#define LED32_Pin GPIO_PIN_5
#define LED32_GPIO_Port GPIOB
#define LED33_Pin GPIO_PIN_6
#define LED33_GPIO_Port GPIOB
#define LED21_Pin GPIO_PIN_7
#define LED21_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
