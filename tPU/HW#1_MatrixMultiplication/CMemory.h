#include <iostream>

#pragma once

using namespace std;

class CMemory {
    public:
        CMemory() {}
        virtual ~CMemory() {}
};

class CSRAM_256W : public CMemory {
    public:
        CSRAM_256W() {}
        virtual ~CSRAM_256W() {}

        void write_on_memory(unsigned int index, int data) { m_mems[index] = data; }
        int  read_from_memory(unsigned int index)          { return m_mems[index]; }

        void show_mems(unsigned int start_addr, unsigned int end_addr);
        void show_mems_matrix(unsigned int start_addr, unsigned int end_addr);

    private:
        int m_mems[512];    // 10X10으로 해보자 만약 성공하면 512W로 이름 바꾸기
};
