 
OBJS = main.o CCode.o CDecode.o CRegister.o CMemory.o CExecute.o
TARGET = tpu
CXX = g++
CXXFLAGS = -W -Wall -O2

print-%: ; @echo $*=$($*)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	@echo "Deleting"
	rm -rf $(TARGET) $(OBJS)

run:
	@echo "Executing"
	./$(TARGET) file.bin 600
	#./$(TARGET) file1.bin 625
	#./$(TARGET) file2.bin 605
	#./$(TARGET) file_brute_force.bin 505

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

help:
	@echo "make run"
	@echo "make clean"
