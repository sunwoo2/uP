#include <iostream>
#include "CMemory.h"

using namespace std;
/*
void CSRAM_256W::show_mems(unsigned int start_addr, unsigned int end_addr){
	cout << "==== Memory (" << start_addr << "~" << end_addr << ") ====" << endl;
	for(unsigned int i=start_addr; i<=end_addr; i++)
		if(i<10)
			cout << "M[" << i << "]  = " << read_from_memory(i) << endl;
		else
			cout << "M[" << i << "] = " << read_from_memory(i) << endl;
	cout << "======================" << endl;
}
*/

// For 5X5
void CSRAM_256W::show_mems(unsigned int start_addr, unsigned int end_addr){
	cout << "==== Memory (" << start_addr << "~" << end_addr << ") ====" << endl;

	for(unsigned int i=start_addr; i<=end_addr; i++){
		if( (i%5) == 4 && i>0)
            printf("%5d\n", read_from_memory(i));
		else
            printf("%5d", read_from_memory(i));
        if( (i==24) || (i==49) )
            printf("\n");
    }

	cout << "=======================" << endl;
}
