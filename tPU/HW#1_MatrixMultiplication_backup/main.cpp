#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/time.h>
  
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

//	for(int i=0; i<atoi(argv[2]); i++)
//		cout << code_memory.code_at(i) << endl;

	CT1DecodeDirectFetch decode(code_memory);
	C16RegisterFile 	 regs;
	CSRAM_256W           mems;
	CT1ExecuteTinyUnit 	 execute(decode, regs, mems);

    // Time check
    struct timeval start_point, end_point;
    double operating_time;
    
    gettimeofday(&start_point, NULL);

	for(int i=0; i<atoi(argv[2]); i++){
		decode.do_fetch_from(i);
		decode.do_decode();
		decode.show_instruction();
		execute.do_execute();
	}

    gettimeofday(&end_point, NULL);

    operating_time = (double)(end_point.tv_sec)+(double)(end_point.tv_usec)/1000000.0-(double)(start_point.tv_sec)-(double)(start_point.tv_usec)/1000000.0;

    printf("Operating time: %f\n", operating_time);
    //

	regs.show_regs();
    //mems.show_mems(0,26);
    mems.show_mems_matrix(0,26);

	return 0;
}
