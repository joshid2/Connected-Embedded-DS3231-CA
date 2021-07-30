//============================================================================
// Name        : DS321.cpp
// Author      : Dhruv Joshi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef DS3231_H_

#define DS3231_H_

#define bufferAddress 0x19


class TemperatureSensor {

private:

	int I2CBus;

	int I2CAddress;

	char dataBuffer[bufferAddress];



public:

	TemperatureSensor(int, int);

	virtual ~TemperatureSensor();

	int sensorData();

	void displayTime();

	int tempReadings();

	int writeI2cDevice(char, char);

	int setTime();

	int BBSQWEnabler(double);

	void alarm_temp();

	int timekeeping_alarm();

	int deactivateAlarm();

	int alarm_2(int, int);



};



#endif /* DS3231_H_ */


