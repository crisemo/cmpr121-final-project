/*
**************************************************
*	PROGRAM:	final_projea
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

#include "CandidateType.h"

using std::cout;
using std::endl;

CandidateType::CandidateType() {
	PersonType candidate;
	for ( int i = 0; i < NUM_OF_CAMPUSES; i++ ) { campusVotes[i] = 0; }
	totalVotes = 0;
}

CandidateType::~CandidateType() {}

void CandidateType::updateVotesByCampus( int campus, int votes ) {
	campusVotes[campus] = votes;
	totalVotes += votes;
}

int CandidateType::getTotalVotes() const {
	return totalVotes;
}

int CandidateType::getVotesByCampus( int campus ) const {
	return campusVotes[campus];
}

void CandidateType::printCandidateInfo() const {
	printSSN();
	cout << " - ";
	printName();
	cout << endl;
}

void CandidateType::printCandidateTotalVotes() const {
	printName();
	cout << endl
		<< "\t=> Total Votes (all campuses): " << getTotalVotes()
		<< endl;
}
void CandidateType::printCandidateCampusVotes( int campus ) const {
	printName();
	cout << endl
		<< "\t=> Campus " << campus << " total votes: " << getVotesByCampus( campus );
}