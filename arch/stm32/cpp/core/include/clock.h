/*
	clock.h - Header to provide access to GPIO functionality.
	
*/


#ifndef TIMER_H
#define TIMER_H


#include "common.h"

class Clock {
	//
	
public:
	Clock();
	~Clock();
	
	bool enableMaxClock();
	uint32_t currentSysClock();
};

#endif
