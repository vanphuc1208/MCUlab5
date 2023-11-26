/*
 * fsm_normal_state.c
 *
 *  Created on: Oct 22, 2023
 *      Author: OS
 */

#include "global.h"

void increase() {
	time1++;
	if(time1>99) time1=1;
}

void normalState(void) {//called every second
	switch(status) {
	case INIT:
		clearAllLed();
		status=RedGreen;
		time1=timeRed;
		time2=timeGreen;
		break;
	case RedGreen:
		displayRed1();
		displayGreen2();
		//update time
		time1--;
		time2--;
		if(time2==0) {// transit state
			status=RedAm;
			time1=timeYellow;
			time2=timeYellow;
		}
		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
		}

		break;
	case RedAm:
		displayRed1();
		displayYellow2();
		//update time
		time1--;
		time2--;
		if(time1==0) { //transit state
			status=GreenRed;
			time1=timeGreen;
			time2=timeRed;
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
		}

		break;
	case GreenRed:
		displayGreen1();
		displayRed2();
		//update time
		time1--;
		time2--;
		if(time1==0) { //transit state
			status=AmRed;
			time1=timeYellow;
			time2=timeYellow;
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
		}
		break;
	case AmRed:
		displayYellow1();
		displayRed2();
		//update time
		time1--;
		time2--;
		if(time1==0) { //transit state
			status=RedGreen;
			time1=timeRed;
			time2=timeGreen;
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
		}
		break;
	default:
		break;
	}
}

void manState(void) { //called every 0.25s
	switch(status) {
	case ManRed:
				toggleRed();

			if(is_button_pressed(1)) {
				increase();
			}
			if(is_button_pressed(2)) {
				timeRed=time1;
				timeGreen=timeRed-timeYellow;

			}
			if(is_button_pressed(0)) {
				status=ManAm;
				time1=timeYellow;
				time2=3;
				clearAllLed();
			}
			break;
		case ManAm:


				toggleYellow();
			if(is_button_pressed(1)) {
				increase();
			}
			if(is_button_pressed(2)) {
				timeYellow=time1;
				if(timeYellow >=timeRed) {
					timeRed=60;
				}
				timeGreen=timeRed-timeYellow;
			}
			if(is_button_pressed(0)) {
				status=ManGreen;
				time1=timeGreen;
				time2=4;
				clearAllLed();
			}
			break;
		case ManGreen:

				toggleGreen();
			if(is_button_pressed(1)) {
				increase();
			}
			if(is_button_pressed(2)) {
				timeGreen=time1;
				if(timeGreen >=timeRed) {
					timeRed=60;
				}
				timeYellow=timeRed-timeGreen;
			}
			if(is_button_pressed(0)) {
				status=RedGreen;
				time1=timeRed;
				time2=timeGreen;
			}
			break;
		default:
			break;
	}

}

