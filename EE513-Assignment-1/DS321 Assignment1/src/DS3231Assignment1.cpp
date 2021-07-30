//============================================================================
// Name        : DS321.cpp
// Author      : Dhruv Joshi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <stdlib.h>

#include "DS3231.h"

using namespace std;

int main() {

	TemperatureSensor tempSen = TemperatureSensor(1, 0x68);
	//tempSen.displayTime();
	//cout<< "Temperature Reading: " << tempSen.tempReadings() << endl;
	tempSen.setTime();
	tempSen.displayTime();

	tempSen.BBSQWEnabler(1.024);
	tempSen.alarm_temp();
	tempSen.timekeeping_alarm();
	//tempSen.alarm_2(13,10);
	//tempSen.deactivateAlarm();
	return 0;
}

