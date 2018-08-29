/*
 * electronicComponent.cpp
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#include "electronicComponent.h"
using namespace std;

ostream &operator<<(ostream &out, const electronicComponent* const &component) {
	out << component->getType() + " value (" + component->getComponentDescription() + ")";
	return out;
}

electronicComponent::~electronicComponent() {
	// TODO Auto-generated destructor stub
}



