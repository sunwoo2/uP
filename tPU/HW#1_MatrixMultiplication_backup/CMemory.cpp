#include <iostream>
#include "CMemory.h"

using namespace std;

void CSRAM_256W::show_mems(unsigned int start_addr, unsigned int end_addr){
	cout << "==== Memory (" << start_addr << "~" << end_addr << ") ====" << endl;
	for(unsigned int i=start_addr; i<=end_addr; i++)
		if(i<10)
			cout << "M[" << i << "]  = " << read_from_memory(i) << endl;
		else
			cout << "M[" << i << "] = " << read_from_memory(i) << endl;
	cout << "======================" << endl;
}

void CSRAM_256W::show_mems_matrix(unsigned int start_addr, unsigned int end_addr){
	cout << "==== Memory (" << start_addr << "~" << end_addr << ") Maxtrix form ====" << endl;

    for(int i=0; i<7; i+=3){
        for(int j=i; j<i+3; j++)
            printf(" M[%d]", j);
        printf("  ");
        for(int j=i+9; j<i+12; j++){
            if(j==9)
                printf(" M[%d] ", j);
            else
             printf(" M[%d]", j);
        }
        printf("   ");
        for(int j=i+18; j<i+21; j++)
            printf(" M[%d]", j);
        printf("\n");
    }
    printf("\n");

    for(int i=0; i<7; i+=3){
        for(int j=i; j<i+3; j++)
            printf("%3d", read_from_memory(j));
        printf("  ");
        for(int j=i+9; j<i+12; j++){
            printf("%3d", read_from_memory(j));
        }
        printf("   ");
        for(int j=i+18; j<i+21; j++)
            printf("%4d", read_from_memory(j));
        printf("\n");
    }

	cout << "====================================" << endl;
}
