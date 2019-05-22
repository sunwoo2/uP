#include <iostream>
#include "CRegister.h"

using namespace std;

void C16RegisterFile::show_regs(){
	cout << "====== Register ======" << endl;
	for(int i=0; i<16; i++)
		if(i<10)
			cout << "R" << i << "  = " << read_from_reg(i) << endl;
		else
			cout << "R" << i << " = " << read_from_reg(i) << endl;
	cout << "======================" << endl;
}
