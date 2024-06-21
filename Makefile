CC = gcc
TARGET = mario

$(TARGET): main.c
	$(CC) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)