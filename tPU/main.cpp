#include <iostream>
#include <fstream>
#include <cstdlib>
  
#include "CCode.h"
#include "CDecode.h"
#include "CExecute.h"
#include "CRegister.h"
#include "CMemory.h"

using namespace std;

int main(int argc, char* argv[]){

	if(argc != 3){
		cout << "tpu <input file> <line>\n";
		return -1;
	}

	CFlash1KWord code_memory(argv[1], atoi(argv[2]));

	for(int i=0; i<atoi(argv[2]); i++)
		cout << code_memory.code_at(i) << endl;

	CT1DecodeDirectFetch decode(code_memory);
	C16RegisterFile 	 regs;
	CSRAM_256W           mems;
	CT1ExecuteTinyUnit 	 execute(decode, regs, mems);

	for(int i=0; i<atoi(argv[2]); i++){
		decode.do_fetch_from(i);
		decode.do_decode();
		decode.show_instruction();
		execute.do_execute();
	}
	regs.show_regs();
    mems.show_mems(0,9);
    mems.show_mems(250,255);

    int decoded = 0;
		decoded |= 128;	// b 1000 0000
		decoded |= 64;	// b 0100 0000 
		decoded |= 32;	// b 0010 0000 
		decoded |= 16;	// b 0001 0000 
		decoded |= 8;	// b 0000 1000
		decoded |= 4;	// b 0000 0100
		decoded |= 2;	// b 0000 0010
		decoded |= 1;	// b 0000 0001
    cout << decoded << endl;

	return 0;
}
