/*
 * counter_timer.h
 *
 *  Created on: Nov 8, 2024
 *      Author: Administrator
 */

#ifndef INC_COUNTER_TIMER_H_
#define INC_COUNTER_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void timer1Run();

void setTimer2(int duration);
void timer2Run();

#endif /* INC_COUNTER_TIMER_H_ */
