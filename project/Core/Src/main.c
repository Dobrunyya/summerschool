/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

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
ADC_HandleTypeDef hadc1;

TIM_HandleTypeDef htim9;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM9_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void zero(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void one(){
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void two(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void tree(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void four(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void five(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void six(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void seven(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
		HAL_Delay(2000);
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void eight(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED41_GPIO_Port, LED41_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
void nine(){
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED13_GPIO_Port, LED13_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED21_GPIO_Port, LED21_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED22_GPIO_Port, LED22_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED31_GPIO_Port, LED31_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED32_GPIO_Port, LED32_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED33_GPIO_Port, LED33_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED42_GPIO_Port, LED42_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED51_GPIO_Port, LED51_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED52_GPIO_Port, LED52_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED53_GPIO_Port, LED53_Pin, GPIO_PIN_SET);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_ADC1_Init();
  MX_TIM9_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  //  RIGHT_RED  RIGHT_YELLOW    RIGHT_GREEN   LEFT_RED  LEFT_YELLOW    LEFT_GREEN  LED11
  while (1)
  {
	  if(HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin) == GPIO_PIN_SET){
	        HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_RESET);
	        HAL_Delay(2000);

	        HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_RESET);
	        HAL_Delay(2000);

	        HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_SET);

	        HAL_GPIO_WritePin(LEFT_GREEN_GPIO_Port, LEFT_GREEN_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(RIGHT_RED_GPIO_Port, RIGHT_RED_Pin, GPIO_PIN_RESET);
	        HAL_Delay(10000);

	        HAL_GPIO_WritePin(LEFT_GREEN_GPIO_Port, LEFT_GREEN_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_RESET);
	        HAL_Delay(4000);

	        HAL_GPIO_WritePin(RIGHT_RED_GPIO_Port, RIGHT_RED_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_SET);
	      }
	      else{
	        HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_RESET);
	      }
//	  if(HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin) == GPIO_PIN_SET){
//			HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_RESET);
//			nine();
//			eight();
//			seven();
//			six();
//			five();
//			four();
//			tree();
//
//			HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_RESET);
//			two();
//			one();
//			zero();
//
//			HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_SET);
//
//			HAL_GPIO_WritePin(LEFT_GREEN_GPIO_Port, LEFT_GREEN_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(RIGHT_RED_GPIO_Port, RIGHT_RED_Pin, GPIO_PIN_RESET);
//			eight();
//			seven();
//			six();
//			five();
//			four();
//			tree();
//
//			HAL_GPIO_WritePin(LEFT_GREEN_GPIO_Port, LEFT_GREEN_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_RESET);
//			two();
//			one();
//			zero();
//
//			HAL_GPIO_WritePin(RIGHT_RED_GPIO_Port, RIGHT_RED_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LEFT_YELLOW_GPIO_Port, LEFT_YELLOW_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(RIGHT_YELLOW_GPIO_Port, RIGHT_YELLOW_Pin, GPIO_PIN_SET);
//	  }
//	  else{
//		  //(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
//		  HAL_GPIO_WritePin(LEFT_RED_GPIO_Port, LEFT_RED_Pin, GPIO_PIN_RESET);
//		  HAL_GPIO_WritePin(RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin, GPIO_PIN_RESET);
//	  }


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 168;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = ENABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief TIM9 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM9_Init(void)
{

  /* USER CODE BEGIN TIM9_Init 0 */

  /* USER CODE END TIM9_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};

  /* USER CODE BEGIN TIM9_Init 1 */

  /* USER CODE END TIM9_Init 1 */
  htim9.Instance = TIM9;
  htim9.Init.Prescaler = 83;
  htim9.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim9.Init.Period = 500;
  htim9.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim9.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim9) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim9, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM9_Init 2 */

  /* USER CODE END TIM9_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED52_Pin|RIGHT_YELLOW_Pin|RIGHT_RED_Pin|LED22_Pin
                          |LED13_Pin|LED42_Pin|LED12_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED41_Pin|LED51_Pin|LED11_Pin|LEFT_GREEN_Pin
                          |LEFT_YELLOW_Pin|LEFT_RED_Pin|RIGHT_GREEN_Pin|LED31_Pin
                          |LED53_Pin|LED32_Pin|LED33_Pin|LED21_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : LED_Pin */
  GPIO_InitStruct.Pin = LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LED52_Pin RIGHT_YELLOW_Pin RIGHT_RED_Pin LED22_Pin
                           LED13_Pin LED42_Pin LED12_Pin */
  GPIO_InitStruct.Pin = LED52_Pin|RIGHT_YELLOW_Pin|RIGHT_RED_Pin|LED22_Pin
                          |LED13_Pin|LED42_Pin|LED12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED41_Pin LED51_Pin LED11_Pin LEFT_GREEN_Pin
                           LEFT_YELLOW_Pin LEFT_RED_Pin RIGHT_GREEN_Pin LED31_Pin
                           LED53_Pin LED32_Pin LED33_Pin LED21_Pin */
  GPIO_InitStruct.Pin = LED41_Pin|LED51_Pin|LED11_Pin|LEFT_GREEN_Pin
                          |LEFT_YELLOW_Pin|LEFT_RED_Pin|RIGHT_GREEN_Pin|LED31_Pin
                          |LED53_Pin|LED32_Pin|LED33_Pin|LED21_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : BUTTON_Pin */
  GPIO_InitStruct.Pin = BUTTON_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(BUTTON_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

}

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
//	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
