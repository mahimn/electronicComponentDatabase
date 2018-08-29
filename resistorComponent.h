/*
 * resistorComponent.h
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#ifndef RESISTORCOMPONENT_H_
#define RESISTORCOMPONENT_H_

#include "electronicComponent.h"
#include <string>

class resistorComponent: public electronicComponent {
private:
	string type = "Resistor";
	double resistorValue;
	string resistorUnits = "Ohm(s)";
public:
	virtual double getComponentValue() const
		{ return resistorValue; }

	virtual string getType() const
		{ return type; }

	virtual string getComponentUnits() const
		{ return resistorUnits; }

	virtual string getComponentDescription() const;

	resistorComponent(double value);
	virtual ~resistorComponent();
};

#endif /* RESISTORCOMPONENT_H_ */
