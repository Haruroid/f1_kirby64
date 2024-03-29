/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define SELECT_Pin GPIO_PIN_5
#define SELECT_GPIO_Port GPIOA
#define START_Pin GPIO_PIN_6
#define START_GPIO_Port GPIOA
#define D_DOWN_Pin GPIO_PIN_7
#define D_DOWN_GPIO_Port GPIOA
#define D_LEFT_Pin GPIO_PIN_0
#define D_LEFT_GPIO_Port GPIOB
#define D_RIGHT_Pin GPIO_PIN_1
#define D_RIGHT_GPIO_Port GPIOB
#define L_Pin GPIO_PIN_10
#define L_GPIO_Port GPIOB
#define D_UP_Pin GPIO_PIN_11
#define D_UP_GPIO_Port GPIOB
#define R_Pin GPIO_PIN_8
#define R_GPIO_Port GPIOA
#define C_LEFT_Pin GPIO_PIN_9
#define C_LEFT_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_3
#define A_GPIO_Port GPIOB
#define C_UP_Pin GPIO_PIN_4
#define C_UP_GPIO_Port GPIOB
#define C_DOWN_Pin GPIO_PIN_5
#define C_DOWN_GPIO_Port GPIOB
#define B_Pin GPIO_PIN_7
#define B_GPIO_Port GPIOB
#define C_RIGHT_Pin GPIO_PIN_8
#define C_RIGHT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
