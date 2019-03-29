#include "CCode.h"
#include <iostream>
#include <fstream>
  
using namespace std;

CFlash1KWord::CFlash1KWord(char* filename, int line){

	m_filename = filename;
	m_line = line;

	ifstream infile;
	infile.open(m_filename, ios::in);

	int addr = 0;
	char bit;
	while(addr < m_line){
		for(int i=0; i<ISA_length(); i++){
			infile >> bit;	
			m_code[addr] += bit;
		}
		addr++;
	}
	infile.close();
}

CFlash1KWord::~CFlash1KWord() {}

string& CFlash1KWord::code_at(int addr){
	return m_code[addr];
}
