/*
 * batteryComponent.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#include "batteryComponent.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

batteryComponent::batteryComponent(double value) {
	batteryValue = value;
}

string batteryComponent::getComponentDescription() const {

	double componentValue = getComponentValue();
	string value;
	ostringstream stream;
	stream << componentValue;
	value = stream.str();
	string description = value + " " + getComponentUnits();
	return description;
}

batteryComponent::~batteryComponent() {
	// TODO Auto-generated destructor stub
}

