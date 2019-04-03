#include "CCode.h"
#include "CDecode.h"
#include "CRegister.h"
#include "CExecute.h"
  
bool CT1ExecuteTinyUnit::do_execute() {

    // MOV3 R0, #3
	if(m_decode_unit.get_opcode() == MOV3){
//		cout << "Executing" << endl;

		unsigned int reg_index = m_decode_unit.get_op1();
				 int 	  data = m_decode_unit.get_op2();

		m_regs.write_on_reg(reg_index, data);

		return true;

    // ADD R0, R1  -->  R0 = R0 + R1 
	}else if( m_decode_unit.get_opcode() == ADD){

		unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = m_decode_unit.get_op2() >> 4;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        Rn = Rn + Rm; 

		m_regs.write_on_reg(reg_n, Rn);

		return true;

    // SUB R0, R1  -->  R0 = R0 - R1 
	}else if( m_decode_unit.get_opcode() == SUB){

		unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = m_decode_unit.get_op2() >> 4;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        Rn = Rn - Rm; 

		m_regs.write_on_reg(reg_n, Rn);

		return true;

    }else{
		cout << "Not executable instruction, not yet implemented sorry...!!" << endl;
		return false;
	}

	return true;
}
