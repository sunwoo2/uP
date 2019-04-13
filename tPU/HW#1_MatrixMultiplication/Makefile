.SUFFIXES: .c .o
 
OBJS = main.o CCode.o CDecode.o CRegister.o CMemory.o CExecute.o
TARGET = tpu
CXX = g++
CXXFLAGS = -W -Wall -O2

print-%: ; @echo $*=$($*)

all: $(TARGET) assembler calculate_word initialize

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

assembler: assembler.c
	gcc -o assembler assembler.c

calculate: calculate_word.c
	gcc -o calculate_word calculate_word.c

initialize: initialize.c
	gcc -o initialize initialize.c

clean:
	@echo "Deleting"
	rm -rf $(TARGET) $(OBJS) $(OBJS:.o=.s) assembler initialize calculate_word

run:
	@echo "Executing"
	./$(TARGET) file.bin 114

run1:
	@echo "Executing"
	./$(TARGET) file_5X5_R4.bin 700

help:
	@echo "make all"
	@echo "make assembler"
	@echo "make initialize"
	@echo "make calculate_word"
	@echo "make clean"
	@echo "make run - file.bin 114"
	@echo "make run1 - file_5X5_R4.bin 700"
