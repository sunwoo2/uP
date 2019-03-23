#include <iostream>
#include "CCode.h"

#pragma once

using namespace std;

class CDecode {
	public:
		CDecode() {}
		virtual ~CDecode() {}
};

typedef struct{
	unsigned int OPCODE : 4;
	unsigned int OP1	: 4;
			 int OP2	: 8;
} SInstruction;

class CT1DecodeDirectFetch : public CDecode {
	public:
		CT1DecodeDirectFetch(CFlash1KWord& code) : m_code_memory(code) {}
		virtual ~CT1DecodeDirectFetch() {}

		bool do_fetch_from(int PC);
		bool do_decode();

		void show_instruction();

	private:
		CFlash1KWord& m_code_memory;
		string m_inst_buffer;
		SInstruction m_instruction;
};
