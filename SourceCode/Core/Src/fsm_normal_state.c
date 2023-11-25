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

void normalState(void) {
	switch(status) {
	case INIT:
		clearAllLed();
		status=RedGreen;
		setTimer1(timeGreen*100);
		setTimer2(100);
		time1=timeRed;
		time2=timeGreen;
		break;
	case RedGreen:
		displayRed1();
		displayGreen2();
		if(timer1_flag==1) {// transit state
			status=RedAm;
			setTimer1(timeYellow*100);
			setTimer2(100);
			time1=timeYellow;
			time2=timeYellow;
		}

		if(timer2_flag==1) {// update time
			setTimer2(100);
			time1--;
			time2--;
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
			setTimer5(25);
		}

		break;
	case RedAm:
		displayRed1();
		displayYellow2();
		if(timer1_flag==1) { //transit state
			status=GreenRed;
			setTimer1(timeGreen*100);
			setTimer2(100);
			time1=timeGreen;
			time2=timeRed;
		}

		if(timer2_flag==1) { //update time
			time1--;
			time2--;
			setTimer2(100);
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
			setTimer5(25);
		}

		break;
	case GreenRed:
		displayGreen1();
		displayRed2();
		if(timer1_flag==1) { //transit state
			status=AmRed;
			setTimer1(timeYellow*100);
			setTimer2(100);
			time1=timeYellow;
			time2=timeYellow;
		}

		if(timer2_flag==1) {//update time
			setTimer2(100);
			time1--;
			time2--;
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
			setTimer5(25);
		}
		break;
	case AmRed:
		displayYellow1();
		displayRed2();
		if(timer1_flag==1) { //transit state
			status=RedGreen;
			setTimer1(timeGreen*100);
			setTimer2(100);
			time1=timeRed;
			time2=timeGreen;
		}

		if(timer2_flag==1) {//update time
			time1--;
			time2--;
			setTimer2(100);
		}

		if(is_button_pressed(0)) {
			status=ManRed;
			time1=timeRed;
			time2=2;
			clearAllLed();
			setTimer5(25);
		}
		break;
	case ManRed:
		if(timer5_flag==1) {
			setTimer5(25);
			toggleRed();
		}
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
			setTimer5(25);
		}
		break;
	case ManAm:
		if(timer5_flag==1) {
			setTimer5(25);
			toggleYellow();
		}
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
			setTimer5(25);
		}
		break;
	case ManGreen:
		if(timer5_flag==1) {
			setTimer5(25);
			toggleGreen();
		}
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
			setTimer1(timeGreen*100);
			setTimer2(100);
			time1=timeRed;
			time2=timeGreen;
		}
		break;
	default:
		break;
	}
}

