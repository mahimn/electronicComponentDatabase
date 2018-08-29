/*
 * electronicComponent.h
 *
 *  Created on: Mar 16, 2018
 *      Author: mahim
 */

#ifndef ELECTRONICCOMPONENT_H_
#define ELECTRONICCOMPONENT_H_
#include <string>
using namespace std;

class electronicComponent {
public:
	virtual double getComponentValue() const = 0;
	virtual string getType() const = 0;
	virtual string getComponentUnits() const = 0;
	virtual string getComponentDescription() const = 0;

	friend ostream &operator<<(ostream &out, const electronicComponent* const &component);

	virtual ~electronicComponent();
};

#endif /* ELECTRONICCOMPONENT_H_ */
