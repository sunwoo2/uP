#include "CCode.h"
#include "CDecode.h"
#include "CRegister.h"
#include "CExecute.h"

bool CT1ExecuteTinyUnit::do_execute() {

	if(m_decode_unit.get_opcode() == MOV3){
		cout << "Executing" << endl;
		m_regs.write_on_reg(m_decode_unit.get_op1(), m_decode_unit.get_op2());
		return true;
	}

	return false;
}
