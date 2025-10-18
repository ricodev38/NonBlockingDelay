#pragma once
#include <Arduino.h>

class NonBlockingDelay {
protected:
	unsigned long previousTime;
	unsigned long delay;

public:
	NonBlockingDelay(int aDelay = 0);
    bool TimeReached();
	void SetDelay(unsigned long aDelay);
    void Reset();
};

