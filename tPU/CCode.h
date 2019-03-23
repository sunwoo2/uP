#include <iostream>

#pragma once

using namespace std;

class CCode {
public:
	CCode() {}
	virtual ~CCode() {}

private:
};

// inheritance
class CFlash1KWord : public CCode {	// Flash Memory (Program Memory)
public: 
	CFlash1KWord(char* filename, int line);
	virtual ~CFlash1KWord();

	string& code_at(int addr);	// & : reference (like Pointer of C)

	int code_memory_size() { return 1024; }		// 정보은닉, 캡슐화, 추상화 (모듈이 바껴도 쉽게 바꿀수 있음)

private:
	string m_filename;
	int m_line;
	string m_code[1024];
};

