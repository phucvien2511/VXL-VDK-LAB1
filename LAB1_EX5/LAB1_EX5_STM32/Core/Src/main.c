/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void display7SEG(int num)
  {
	  if (num == 0)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
	  }
	  if (num == 1)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
	  }
	  if (num == 2)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 3)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 4)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 5)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 6)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 7)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
	  }
	  if (num == 8)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 9)
	  {
	  HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
	  }
  }
  void display7SEG_2(int num)
  {
	  if (num == 0)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
	  }
	  if (num == 1)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
	  }
	  if (num == 2)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 3)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 4)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 5)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 6)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 7)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
	  }
	  if (num == 8)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
	  if (num == 9)
	  {
	  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
	  }
  }
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
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  const int RED_TIME = 5, YELLOW_TIME = 2, GREEN_TIME = 3;	//INIT TIME FOR 3 LIGHTS
  int redTimer1 = RED_TIME, yellowTimer1 = YELLOW_TIME, greenTimer1 = GREEN_TIME;
  int redTimer2 = RED_TIME, yellowTimer2 = YELLOW_TIME, greenTimer2 = GREEN_TIME;
    //INIT STATE FOR 7SEG LEDs
  	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
    while (1)
    {
      /* USER CODE END WHILE */
      //WHEN ALL 2 WAYS FINISHED 1 CYCLE, START AGAIN
  	  if (redTimer1 <= 0 && redTimer2 <= 0 )
  	  	  {
  		  	  redTimer1 = RED_TIME; yellowTimer1 = YELLOW_TIME; greenTimer1 = GREEN_TIME;
  		  	  redTimer2 = RED_TIME; yellowTimer2 = YELLOW_TIME; greenTimer2 = GREEN_TIME;
  	  	  }
  	  	  if (redTimer1 > 0)
  	  	  {
  	  		  //GREEN2 TIMER > 0
  	  		  if (greenTimer2 > 0)
  	  		  {
  	  			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);	//TURN OFF PREVIOUS RED2
  	  			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
  	  			  display7SEG_2(greenTimer2-1);
  	  			  greenTimer2--;
  	  		  }
  	  		  //GREEN2 TIMER = 0, TURN ON YELLOW2
  	  		  else
  	  		  {
  	  			  if (yellowTimer2 > 0)
  	  			  {
  	  			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);	//TURN OFF PREVIOUS GREEN2
  	  			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
  	  			  display7SEG_2(yellowTimer2-1);
  	  			  yellowTimer2--;
  	  			  }
  	  		  }
  	  		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
  	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
  	  		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
  	  		  display7SEG(redTimer1 - 1);
  	  		  redTimer1--;
  	  	  }
  	  	  else
  	  	  {
  	  		  //GREEN1 TIMER > 0
  	  		  if (greenTimer1 > 0)
  	  		  {
  	  			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
  	  			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
  	  			  display7SEG(greenTimer1-1);
  	  			  greenTimer1--;
  	  		  }
  	  		  //GREEN1 TIMER = 0, TURN ON YELLOW1
  	  		  else
  	  		  {
  	  			  if (yellowTimer1 > 0)
  	  			  {
  	  			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
  	  			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
  	  			  display7SEG(yellowTimer1-1);
  	  			  yellowTimer1--;
  	  			  }
  	  		  }
				  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
				  display7SEG_2(redTimer2-1);
				  redTimer2--;
  	  	  	  }

  	        HAL_Delay(1000);
      /* USER CODE BEGIN 3 */
    }
}
/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
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
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, S0_Pin|S1_Pin|S2_Pin|S10_Pin
                          |S11_Pin|S12_Pin|S13_Pin|S3_Pin
                          |S4_Pin|S5_Pin|S6_Pin|S7_Pin
                          |S8_Pin|S9_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : S0_Pin S1_Pin S2_Pin S10_Pin
                           S11_Pin S12_Pin S13_Pin S3_Pin
                           S4_Pin S5_Pin S6_Pin S7_Pin
                           S8_Pin S9_Pin */
  GPIO_InitStruct.Pin = S0_Pin|S1_Pin|S2_Pin|S10_Pin
                          |S11_Pin|S12_Pin|S13_Pin|S3_Pin
                          |S4_Pin|S5_Pin|S6_Pin|S7_Pin
                          |S8_Pin|S9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
