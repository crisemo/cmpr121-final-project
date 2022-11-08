#include "PersonType.h"
#include <iostream>

// Constructors

PersonType::PersonType()
{
	this->ssn = 0;
}

PersonType::PersonType(const std::string& firstName, const std::string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Accessors

const std::string& PersonType::getFirstName() const
{
	return PersonType::firstName;
}

const std::string& PersonType::getLastName() const
{
	return PersonType::lastName;
}

int PersonType::getSSN() const
{
	return PersonType::ssn;
}


// Mutators

void PersonType::setPersonInfo(const std::string& firstName, const std::string& lastName, int ssn)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->ssn = ssn;
}


// Methods

void PersonType::printName() const
{
	std::cout << PersonType::firstName << " " << PersonType::lastName;
}

void PersonType::printPersonInfo() const
{
	PersonType::printSSN();
	std::cout << " ";
	PersonType::printName();
}

void PersonType::printSSN() const
{
	std::string s = std::to_string(ssn);

	if (static_cast<int>(s.length()) == 9) // valid ssn
	{
		s.insert(3, "-");
		s.insert(6, "-");

		std::cout << s;
	}

	//TODO Are we assuming the SSN provided is a 9 digit number? IE: not 001-93-1200
	//TODO make sure midterm extra credit is applied
}
