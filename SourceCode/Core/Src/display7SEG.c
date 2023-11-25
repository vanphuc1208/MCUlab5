/*
 * display7SEG.c
 *
 *  Created on: Oct 23, 2023
 *      Author: OS
 */

#include "display7Seg.h"
#include "global.h"

void display7SEG(int num) {
	switch (num) {
			case 0:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
				break;
			case 1:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
				break;
			case 2:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
				break;
			case 8:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
			default:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
		}
}

void updateBuffer(int num1,int num2) {
	led_buffer[0]= num1 /10;
	led_buffer[1]= num1 %10;
	led_buffer[2]= num2 /10;
	led_buffer[3]= num2 %10;
}
void update7SEG(int index){
    switch (index){
        case 0:
            //Display the first 7SEG with led_buffer[0]
        	 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,RESET);
        	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
        	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
        	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);
        	 display7SEG(led_buffer[index]);
            break;
        case 1:
            //Display the second 7SEG with led_buffer[1]
        	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
        	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,RESET);
        	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
        	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);
        	display7SEG(led_buffer[index]);
            break;
        case 2:
            //Display the third 7SEG with led_buffer[2]
        	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
        	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
        	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,RESET);
        	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);
        	display7SEG(led_buffer[index]);
            break;
        case 3:
            //Display the forth 7SEG with led_buffer[3]
        	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
        	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
        	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
        	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,RESET);
        	display7SEG(led_buffer[index]);
            break;
        default:
            break;
    }
}
