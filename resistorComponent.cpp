/*
 * resistorComponent.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#include "resistorComponent.h"
#include <string>
#include <sstream>
using namespace std;


resistorComponent::resistorComponent(double value) {
	resistorValue = value;
}

string resistorComponent::getComponentDescription() const {
	double componentValue = getComponentValue();
	string value;
	ostringstream stream;
	stream << componentValue;
	value = stream.str();
	string description = value + " " + getComponentUnits();
	return description;
}

resistorComponent::~resistorComponent() {
	// TODO Auto-generated destructor stub
}

