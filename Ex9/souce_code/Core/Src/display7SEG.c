/*
 * display7SEG.c
 *
 *  Created on: Nov 8, 2024
 *      Author: Administrator
 */


#include "display7SEG.h"
#include "main.h"

void display7SEG(int num){
	if(num == 0){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if(num == 1){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if(num == 2){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 1);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 3){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 4){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 5){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 6){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 7){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if(num == 8){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if(num == 9){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
}

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void update7SEG(int index) {
    if (index < 0 || index >= MAX_LED) return;
    HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
    HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
    HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
    HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);

    switch (index){
    case 0:
    	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
    	break;
    case 1:
    	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
    	break;
    case 2:
    	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
    	break;
    case 3:
    	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
    	break;
    default:
    	break;
    }

    display7SEG(led_buffer[index]);
}

int hour;
int minute;
int second;

void updateClockBuffer(){
	 led_buffer[0] = hour / 10;
	 led_buffer[1] = hour % 10;
	 led_buffer[2] = minute / 10;
	 led_buffer[3] = minute % 10;
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint16_t matrix_buffer[8] = {0x3C00, 0x6600, 0xC300, 0xC300, 0xFF00, 0xC300, 0xC300, 0x0000};

void updateLEDMatrix(int index){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

	GPIOB -> ODR = matrix_buffer[index];
	switch(index){
	case 0:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	default:
		break;
	}
}
