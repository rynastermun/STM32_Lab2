/*
 * display7SEG.h
 *
 *  Created on: Nov 7, 2024
 *      Author: ADMIN PC
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_DISPLAY7SEG_H_ */
