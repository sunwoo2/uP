#include "CCode.h"
#include "CDecode.h"
#include "CRegister.h"
#include "CExecute.h"
  
bool CT1ExecuteTinyUnit::do_execute() {

	if(m_decode_unit.get_opcode() == MOV3){
		cout << "Executing" << endl;

		unsigned int reg_index = m_decode_unit.get_op1();
				 int 	  data = m_decode_unit.get_op2();

		m_regs.write_on_reg(reg_index, data);

		return true;
	}else{
		cout << "Not executable instruction, not yet implemented sorry...!!" << endl;
		return false;
	}

	return true;
}
