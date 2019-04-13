.SUFFIXES: .c .o
 
OBJS = main.o CCode.o CDecode.o CRegister.o CMemory.o CExecute.o
TARGET = tpu
CXX = g++
CXXFLAGS = -W -Wall -O2

print-%: ; @echo $*=$($*)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

assembler: assembler.c
	gcc -o assembler assembler.c

assem: $(OBJS:.o=.cpp)
	@echo "Compiling Assembly"
	$(CXX) $(CXXFLAGS) -S main.cpp
	$(CXX) $(CXXFLAGS) -S CCode.cpp
	$(CXX) $(CXXFLAGS) -S CDecode.cpp
	$(CXX) $(CXXFLAGS) -S CRegister.cpp
	$(CXX) $(CXXFLAGS) -S CMemory.cpp
	$(CXX) $(CXXFLAGS) -S CExecute.cpp

clean:
	@echo "Deleting"
	rm -rf $(TARGET) $(OBJS) $(OBJS:.o=.s) 

run:
	@echo "Executing"
	./$(TARGET) file.bin 114

help:
	@echo "make all"
	@echo "make assem"
	@echo "make clean"
	@echo "make run"
