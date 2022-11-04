#include "PersonType.h"
#include <iostream>

// Constructors

PersonType::PersonType()
{
	this->ssn = 0;
}

PersonType::PersonType(const string& firstName, const string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Accessors

const string& PersonType::getFirstName() const //QUESTION return string or string&?
{
	return PersonType::firstName;
}

const string& PersonType::getLastName() const
{
	return PersonType::lastName;
}

int PersonType::getSSN() const
{
	return PersonType::ssn;
}


// Mutators

void PersonType::setPersonInfo(const string& firstName, const string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Methods

void PersonType::printName() const
{
	cout << PersonType::firstName << " " << PersonType::lastName;
}

void PersonType::printPersonInfo() const
{
	PersonType::printSSN();
	cout << " ";
	PersonType::printName();
}

void PersonType::printSSN() const
{
	string s = to_string(PersonType::ssn);

	if (static_cast<int>(s.length()) == 9) // valid ssn
	{
		s.insert(3, "-");
		s.insert(6, "-");

		cout << s;
	}

	//TODO determine what to do if ssn not valid, throw error?
}
