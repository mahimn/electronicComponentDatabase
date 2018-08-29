/*
 * batteryComponent.h
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#ifndef BATTERYCOMPONENT_H_
#define BATTERYCOMPONENT_H_

#include "electronicComponent.h"
#include <string>

class batteryComponent: public electronicComponent {
private:
	double batteryValue;
	string type = "Battery";
	string batteryUnits = "Volt(s)";
public:
	virtual double getComponentValue() const override
		{ return batteryValue; }

	virtual string getType() const
		{ return type; }

	virtual string getComponentUnits() const override
		{ return batteryUnits; }

	virtual string getComponentDescription() const override;

	batteryComponent(double value);
	virtual ~batteryComponent();
};

#endif /* BATTERYCOMPONENT_H_ */
