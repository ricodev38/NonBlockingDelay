#include "NonBlockingDelay.h"

NonBlockingDelay::NonBlockingDelay(int aDelay) {
	previousTime = millis();
	delay = aDelay;
}

bool NonBlockingDelay::TimeReached() {
	unsigned long now = millis();
	
	if(now - previousTime > delay)
	{
		previousTime = now;
		return true;
	}
	else
		return false;
}

void NonBlockingDelay::SetDelay(unsigned long aDelay) {
    delay = aDelay;
}

void NonBlockingDelay::Reset() {
    previousTime = millis();
}