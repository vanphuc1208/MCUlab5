#include "main.h"
//we aim to work with more than one buttons
#define N0_OF_BUTTONS 				       3
//timer interrupt duration is 10ms, so to pass 1 second,
//we need to jump to the interrupt service routine 100 time
#define DURATION_FOR_AUTO_INCREASING	   200
#define BUTTON_IS_PRESSED                  GPIO_PIN_RESET
#define BUTTON_IS_RELEASED                 GPIO_PIN_SET
//the buffer that the final result is stored after
//debouncing
static GPIO_PinState buttonBuffer[N0_OF_BUTTONS]={BUTTON_IS_RELEASED,BUTTON_IS_RELEASED,BUTTON_IS_RELEASED};
static int buttonPin[N0_OF_BUTTONS]={BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};
int buttonTimeOut[N0_OF_BUTTONS] = {0};
//we define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer3[N0_OF_BUTTONS];
//we define a flag for a button pressed more than 1 second.
//we define counter for automatically increasing the value
//after the button is pressed more than 1 second.
int buttonFlag[N0_OF_BUTTONS] = {0};
void button_reading(void){
	for(int i = 0; i < N0_OF_BUTTONS; i ++){
		debounceButtonBuffer3[i] =debounceButtonBuffer2[i];
		debounceButtonBuffer2[i] =debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(GPIOB, buttonPin[i]);
		if(debounceButtonBuffer1[i] == debounceButtonBuffer2[i] && debounceButtonBuffer2[i] == debounceButtonBuffer3[i]) {
			if(debounceButtonBuffer1[i] != buttonBuffer[i]){
				buttonBuffer[i] = debounceButtonBuffer1[i];
						if(buttonBuffer[i] == BUTTON_IS_PRESSED){
							buttonFlag[i] = 1;
							buttonTimeOut[i] = DURATION_FOR_AUTO_INCREASING;
							}
		}
		else {
			buttonTimeOut[i]--;
				if(buttonTimeOut[i] <= 0){
					buttonBuffer[i] = BUTTON_IS_RELEASED;
			}
		}
	}
}
}

int is_button_pressed(int index){
	if(index >= N0_OF_BUTTONS || index < 0) return 0;
		if(buttonFlag[index] == 1){
			buttonFlag[index] = 0;
			return 1;
		}
		return 0;
}

