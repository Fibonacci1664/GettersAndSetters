/*
 * Main.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person;

	person.setName("Bob");

	cout << person.toString() << endl;

	cout << "Using a getter, the name is " << person.getName() << endl;


	return 0;
}


