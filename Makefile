CC = gcc
CFLAGS = -O2 -Wall
TARGET = abundant_onechild

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)
