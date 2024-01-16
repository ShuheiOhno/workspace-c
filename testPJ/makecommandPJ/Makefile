CC = gcc
CFLAGS = -Iinclude

SRCDIR = src
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

TARGET = myprogram

$(TARGET): $(OBJ)
    $(CC) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
    $(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean

clean:
    rm -f $(OBJDIR)/*.o $(TARGET)