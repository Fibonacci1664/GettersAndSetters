/*
 * Person.h
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>

using namespace std;

class Person
{
private:
	string name;


public:
	Person();

	string toString();
	void setName(string newName);
	string getName();

	virtual ~Person();
};

#endif /* PERSON_H_ */
