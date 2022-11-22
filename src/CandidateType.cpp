#include "CandidateType.h"
#include <string>
#include <iostream>

// Constructor

CandidateType::CandidateType()
{
	totalVotes = 0;
}


// Accessors

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByCampus(int campusNumber) const
{
	return votesPerCampus[campusNumber - 1];
}


// Mutators

void CandidateType::updateVotesByCampus(int campusNumber, int newNumOfVotes)
{
	int prevNum = votesPerCampus[campusNumber - 1];

	votesPerCampus[campusNumber - 1] = newNumOfVotes;

	totalVotes -= prevNum;
	totalVotes += newNumOfVotes;
}


// Members

void CandidateType::printCandidateCampusVotes(int campusNumber) const
{
	printName();
	std::cout << std::endl;
	std::cout << "\t=>  Campus " << campusNumber << " total votes: " << getVotesByCampus(campusNumber) << std::endl;

void CandidateType::printCandidateInfo() const
{
	printSSN();
	//std::cout << " - " << getLastName() << ", " << getFirstName(); // REDUNDANCY, no?
	std::cout << " - "; printName(); // we already have a function for displaying the name, why not use it?
	std::cout << std::endl; 
}

void CandidateType::printCandidateTotalVotes() const
{
	printName();
	std::cout << std::endl;
	std::cout << "\t=>  Total Votes (all campuses): " << getTotalVotes() << std::endl;
}
