#include "CCode.h"
#include "CDecode.h"
#include "CRegister.h"
#include "CExecute.h"
#include "CMemory.h"

// bit masking 하는것 자체가 unsigned 되는 거임. 그래도 형식을 표현하기위해 unsigned int로 (?)

int clks[9] = {8,8,12,6,4,4,12,30,2};
  
int CT1ExecuteTinyUnit::do_execute() {

    // MOV3 R0, #3 : R0 = 3
	if(m_decode_unit.get_opcode() == MOV3){
//		cout << "Executing" << endl;

		unsigned int reg_index = m_decode_unit.get_op1();
	             int 	  data = m_decode_unit.get_op2();

		m_regs.write_on_reg(reg_index, data);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MOV3];

    // ADD R0, R1 : R0 = R0 + R1 
	}else if( m_decode_unit.get_opcode() == ADD){

        unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = (m_decode_unit.get_op2() >> 4) & 0xF;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        Rn = Rn + Rm; 

		m_regs.write_on_reg(reg_n, Rn);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[ADD];

    // SUB R0, R1 : R0 = R0 - R1 
	}else if( m_decode_unit.get_opcode() == SUB){

		unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = (m_decode_unit.get_op2() >> 4) & 0xF;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        Rn = Rn - Rm; 

		m_regs.write_on_reg(reg_n, Rn);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[SUB];

    // MOV0 R1, [3] : R1 <- M[3]
	}else if( m_decode_unit.get_opcode() == MOV0){

		unsigned int reg_index = m_decode_unit.get_op1();
		unsigned int mem_addr  = m_decode_unit.get_op2() & 0xFF;

        int memory_data = m_mems.read_from_memory(mem_addr);

        m_regs.write_on_reg(reg_index, memory_data);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MOV0];

    // MOV1 [3], R1 : M[3] <- R1
	}else if( m_decode_unit.get_opcode() == MOV1){

		unsigned int reg_index = m_decode_unit.get_op1();
		unsigned int mem_addr  = m_decode_unit.get_op2() & 0xFF;

        int Rn = m_regs.read_from_reg(reg_index);

        m_mems.write_on_memory(mem_addr, Rn);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MOV1];

    // MUL R0, R1 : R0 = R0 * R1 
	}else if( m_decode_unit.get_opcode() == MUL){

        unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = (m_decode_unit.get_op2() >> 4) & 0xF;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        Rn = Rn * Rm; 

		m_regs.write_on_reg(reg_n, Rn);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MUL];

    // JZ R0, 5 (if R0 == 0, then PC+1+3)
	}else if( m_decode_unit.get_opcode() == JZ){

        unsigned int reg_n  = m_decode_unit.get_op1();
		         int offset = m_decode_unit.get_op2();

        int Rn = m_regs.read_from_reg(reg_n);
        m_regs.set_PC(m_regs.get_PC()+1);

        if( Rn == 0 ){
            int pc = m_regs.get_PC();
            m_regs.set_PC(pc+offset);
        }

		return clks[JZ];

    // MOV2 [R0], R1 : M[R0] <- R1
	}else if( m_decode_unit.get_opcode() == MOV2){

        unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = m_decode_unit.get_op2() & 0xF;

        int Rn = m_regs.read_from_reg(reg_n);
        int Rm = m_regs.read_from_reg(reg_m);

        m_mems.write_on_memory(Rn, Rm);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MOV2];

    // MOV4 Rn, Rm : Rn <- Rm
	}else if( m_decode_unit.get_opcode() == MOV4){

        unsigned int reg_n = m_decode_unit.get_op1();
		unsigned int reg_m = (m_decode_unit.get_op2() >> 4) & 0xF;

        int Rm = m_regs.read_from_reg(reg_m);

		m_regs.write_on_reg(reg_n, Rm);

        m_regs.set_PC(m_regs.get_PC()+1);

		return clks[MOV4];

    }else{
		cout << "Not executable instruction, not yet implemented sorry...!!" << endl;
		return false;
	}

	return true;
}
