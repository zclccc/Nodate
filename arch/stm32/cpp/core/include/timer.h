/*
	timer.h - Header to provide access to Timer functionality.
	
*/


#ifndef TIMER_H
#define TIMER_H


#include "common.h"


class Timer {
	//
	
public:
	Timer();
	~Timer();

	void delay(uint32_t ms);
};

#endif
