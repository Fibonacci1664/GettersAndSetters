/*
 * Person.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include "Person.h"

Person::Person()
{
	name = "Dave";

}

Person::~Person()
{
	cout << "A person object has been destroyed!" << endl;
}

string Person::toString()
{
	return "Persons name is: " + name;

}

void Person::setName(string newName)
{
	name = newName;
}

string Person::getName()
{
	return name;
}

