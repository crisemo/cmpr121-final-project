/*
**************************************************
*	PROGRAM:	final_project
*	BRIEF:		-
**************************************************
*	COURSE(s):	cmpr-121-14847
*	SEMESTER:
**************************************************
*	CREDIT:		TH[3]
				nathan stevens,
				cristopher morales,
				julian pedroza
**************************************************
*	FILE(s):	main.cpp,
				PersonType.h,
				PersonType.cpp,
				CandidateType.h,
				CandidateType.cpp
**************************************************
*/

#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"
#include <string>

const int NUM_OF_CAMPUSES = 3; // max capacity of the array

class CandidateType : public PersonType {
private:
	int totalVotes;
	int campusVotes[NUM_OF_CAMPUSES];

public:
	// Default constructor
	CandidateType();

	// update Votes By Campus
	void updateVotesByCampus( int campus, int votes );

	// get Total Votes
	int getTotalVotes() const;
	// get Votes By Campus
	int getVotesByCampus( int campus ) const;

	// print Candidate Info
	void printCandidateInfo() const;
	// print Candidate Total Votes
	void printCandidateTotalVotes() const;
	// print Candidate Campus Votes
	void printCandidateCampusVotes( int campus ) const;

	// Destructor
	~CandidateType();
};

#endif