#include <iostream>
#include "CStudent.h"

using namespace std;

CStudent::CStudent(unsigned int id, unsigned int score){		// constructor

	m_id = id;
	m_score = score;

	cout << "Creating student" << m_id << " ..." << endl;

}

CStudent::~CStudent(){		// destructor

	cout << "Deleting student" << m_id << " ..." << endl;

}
