/*
 * capacitorComponent.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#include "capacitorComponent.h"
#include <string>
#include <sstream>
using namespace std;

capacitorComponent::capacitorComponent(double value) {
	capacitorValue = value;
}

string capacitorComponent::getComponentDescription() const {
	double componentValue = getComponentValue();
	string value;
	ostringstream stream;
	stream << componentValue;
	value = stream.str();
	string description = value + " " + getComponentUnits();
	return description;
}

capacitorComponent::~capacitorComponent() {
	// TODO Auto-generated destructor stub
}

