/*
 * displayLed.c
 *
 *  Created on: Oct 20, 2023
 *      Author: OS
 */
#include "main.h"
#include "displayLed.h"

void clearAllLed() {
	HAL_GPIO_WritePin(LED_Red1_GPIO_Port, LED_Red1_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow1_GPIO_Port, LED_Yellow1_Pin, SET);
	HAL_GPIO_WritePin(LED_Green1_GPIO_Port, LED_Green1_Pin, SET);
	HAL_GPIO_WritePin(LED_Red2_GPIO_Port, LED_Red2_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow2_GPIO_Port, LED_Yellow2_Pin, SET);
	HAL_GPIO_WritePin(LED_Green2_GPIO_Port, LED_Green2_Pin, SET);
}

void displayRed1() {
	HAL_GPIO_WritePin(LED_Red1_GPIO_Port, LED_Red1_Pin, RESET);
	HAL_GPIO_WritePin(LED_Yellow1_GPIO_Port, LED_Yellow1_Pin, SET);
	HAL_GPIO_WritePin(LED_Green1_GPIO_Port, LED_Green1_Pin, SET);
}

void displayYellow1() {
	HAL_GPIO_WritePin(LED_Red1_GPIO_Port, LED_Red1_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow1_GPIO_Port, LED_Yellow1_Pin, RESET);
	HAL_GPIO_WritePin(LED_Green1_GPIO_Port, LED_Green1_Pin, SET);
}

void displayGreen1() {
	HAL_GPIO_WritePin(LED_Red1_GPIO_Port, LED_Red1_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow1_GPIO_Port, LED_Yellow1_Pin, SET);
	HAL_GPIO_WritePin(LED_Green1_GPIO_Port, LED_Green1_Pin, RESET);
}

void displayRed2() {
	HAL_GPIO_WritePin(LED_Red2_GPIO_Port, LED_Red2_Pin, RESET);
	HAL_GPIO_WritePin(LED_Yellow2_GPIO_Port, LED_Yellow2_Pin, SET);
	HAL_GPIO_WritePin(LED_Green2_GPIO_Port, LED_Green2_Pin, SET);
}


void displayYellow2() {
	HAL_GPIO_WritePin(LED_Red2_GPIO_Port, LED_Red2_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow2_GPIO_Port, LED_Yellow2_Pin, RESET);
	HAL_GPIO_WritePin(LED_Green2_GPIO_Port, LED_Green2_Pin, SET);
}

void displayGreen2() {
	HAL_GPIO_WritePin(LED_Red2_GPIO_Port, LED_Red2_Pin, SET);
	HAL_GPIO_WritePin(LED_Yellow2_GPIO_Port, LED_Yellow2_Pin, SET);
	HAL_GPIO_WritePin(LED_Green2_GPIO_Port, LED_Green2_Pin, RESET);
}

void toggleRed() {
	HAL_GPIO_TogglePin(LED_Red1_GPIO_Port, LED_Red1_Pin);
	HAL_GPIO_TogglePin(LED_Red2_GPIO_Port, LED_Red2_Pin);
}

void toggleYellow() {
	HAL_GPIO_TogglePin(LED_Yellow1_GPIO_Port, LED_Yellow1_Pin);
	HAL_GPIO_TogglePin(LED_Yellow2_GPIO_Port, LED_Yellow2_Pin);
}

void toggleGreen() {
	HAL_GPIO_TogglePin(LED_Green1_GPIO_Port, LED_Green1_Pin);
	HAL_GPIO_TogglePin(LED_Green2_GPIO_Port, LED_Green2_Pin);
}

