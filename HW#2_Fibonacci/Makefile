 
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
	./$(TARGET) fib_naive.bin 17

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

help:
	@echo "make assem"
	@echo "make run"
	@echo "make clean"
