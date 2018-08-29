/*
 * capacitorComponent.h
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#ifndef CAPACITORCOMPONENT_H_
#define CAPACITORCOMPONENT_H_

#include "electronicComponent.h"
#include <iostream>
#include <string>

class capacitorComponent: public electronicComponent {
private:
	string type = "Capacitor";
	double capacitorValue;
	string capacitorUnits = "Farad(s)";
public:
	virtual double getComponentValue() const
		{ return capacitorValue; }

	virtual string getType() const
		{ return type; }

	virtual string getComponentUnits() const
		{ return capacitorUnits; }

	virtual string getComponentDescription() const override;

	capacitorComponent(double value);

	virtual ~capacitorComponent();
};

#endif /* CAPACITORCOMPONENT_H_ */
