OBJ = calculator.o main.o
TARGET = out

all:$(OBJ) $(TARGET)

%.o:%.cpp
	@g++ -c -fPIC $<
	@echo "Compiling $<"
	
$(TARGET):$(OBJ)
	@g++ -o $(TARGET) $(OBJ)

clean:
	@rm -rf $(TARGET) $(OBJ)

run:
	@./out
