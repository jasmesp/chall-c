CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = trm
SRC = trm.c

.PHONY: all run clean

all: run

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) setlist-export.txt fan-report.txt
