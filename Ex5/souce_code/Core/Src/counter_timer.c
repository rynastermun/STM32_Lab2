/*
 * software_timer.c
 *
 *  Created on: Nov 8, 2024
 *      Author: Administrator
 */


int timer1_counter = 0;
int timer1_flag = 0;
int timer2_counter = 0;
int timer2_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}

void timer1Run()
{
	if (timer1_counter > 0)
	{
		timer1_counter--;
		if (timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
}

void setTimer2(int duration)
{
	timer2_counter = duration;
	timer2_flag = 0;
}

void timer2Run()
{
	if (timer2_counter > 0)
	{
		timer2_counter--;
		if (timer2_counter <= 0)
		{
			timer2_flag = 1;
		}
	}
}
