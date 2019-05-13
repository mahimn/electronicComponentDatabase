//============================================================================
// Name        : Project3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "electronicComponent.h"
#include "capacitorComponent.h"
#include "resistorComponent.h"
#include "batteryComponent.h"
using namespace std;

electronicComponent** addRecord(electronicComponent** componentRecords, int oldSize);
void printComponentInformation(electronicComponent** componentRecords, int counter);

int main() {

	electronicComponent** componentRecords = NULL;
	componentRecords = new electronicComponent*[1];
	int counter;
	char userInput;
	bool repeat = true;
	cout << "Welcome to the Electronic Component Database." << endl;

	while(repeat) {
		cout << "************************************************\n";

		bool valid = false;

		while(!valid) {
			valid = true;
			cout << "Please enter 1, 2, 3 or 4:\n"
					"  1 - Enter some information about a resistor\n"
					"  2 - Enter some information about a capacitor\n"
					"  3 - Enter some information about a battery\n"
					"  4 - Print component information and terminate the program\n"; // REMEMBER TO PROPERLY INDENT OPTIONS
			cin >> userInput; //Prompts and stores new value into userInput variable and checks if conditions are met
			if(userInput != '1' && userInput != '2' && userInput != '3' && userInput != '4') {
				// Error validation: only excepts 1, 2, 3, 4
				cin.clear(); // Clears the input data.
				cin.ignore(INT_MAX, '\n'); // Ignores trailing data
				cout << "Entry not accepted. Please enter ONLY 1, 2, 3, or 4.\n";
				valid = false; // Repeats the loop and prompts for new input
			}
		}

		if(userInput == '1') {

			double temporaryResistorValue;
			bool invalid = true;

			while(invalid) {
				invalid = false;
				cout << "Please enter a value for the component (resistor):" << endl;
				cin >> temporaryResistorValue;

				if(cin.fail() || temporaryResistorValue < 0) {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Entry not accepted. Please enter ONLY a positive, floating point value." << endl;
					invalid = true;
				}
				resistorComponent *resistor = new resistorComponent(temporaryResistorValue);
				componentRecords[counter] = resistor;
			}
		}
		else if(userInput == '2') {

			double temporaryCapacitorValue;
			bool invalid = true;

			while(invalid) {
				invalid = false;
				cout << "Please enter a value for the component (capacitor):" << endl;
				cin >> temporaryCapacitorValue;

				if(cin.fail() || temporaryCapacitorValue < 0) {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Entry not accepted. Please enter ONLY a positive, floating point value." << endl;
					invalid = true;
				}
				capacitorComponent *capacitor = new capacitorComponent(temporaryCapacitorValue);
				componentRecords[counter] = capacitor;
			}
		}
		else if(userInput == '3') {

			double temporaryBatteryValue;
			bool invalid = true;

			while(invalid) {
				invalid = false;
				cout << "Please enter a value for the component (resistor):" << endl;
				cin >> temporaryBatteryValue;

				if(cin.fail() || temporaryBatteryValue < 0) {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Entry not accepted. Please enter ONLY a positive, floating point value." << endl;
					invalid = true;
				}
				batteryComponent *battery = new batteryComponent(temporaryBatteryValue);
				componentRecords[counter] = battery;
			}
		}
		else if(userInput == '4') {
			printComponentInformation(componentRecords, counter);
			repeat = false;
		}

		if(userInput != '4') {
			++counter;
			componentRecords = addRecord(componentRecords, counter);
		}

	}

	// At the end of the program, once the summary of the data is printed, pointer array is deleted and memory freed.

	for(int i = 0; i < counter; ++i) {

		delete componentRecords[i];
		componentRecords[i] = NULL;
	}

	delete [] componentRecords;

	componentRecords = NULL;
	cout << "\n***PROGRAM TERMINATED***"; // Indicates the end of the program

}

electronicComponent** addRecord(electronicComponent** componentRecords, int oldSize) {

	electronicComponent** newComponentRecords = NULL;
	newComponentRecords = new electronicComponent*[oldSize + 1];

	for(int i = 0; i < oldSize; ++i) {
		newComponentRecords[i] = componentRecords[i];
	}

	delete [] componentRecords;
	componentRecords = NULL;
	return newComponentRecords;
}

void printComponentInformation(electronicComponent** componentRecords, int counter) {

	for(int i = 0; i < counter; ++i) {
		cout << "Component value is " + componentRecords[i]->getComponentDescription() << endl;
	}

	cout << "\n";

	for(int i = 0; i < counter; ++i) {
		cout << "Component " << (i + 1) << " " << componentRecords[i] << endl;

	}

	/*  Component 4 Resistor value (6.5 Ohm(s))
		Component 5 Battery value (11.1 Volt(s))
		Component 6 Capacitor value (1e-006 Farad(s))
	 */

}




