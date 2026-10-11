CC ?= gcc
CFLAGS ?= -Wall -Wextra -Iinclude -O2
LDFLAGS ?= -lz -lm

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TEST_SRCS = $(wildcard tests/*.c)
TEST_BINS = $(TEST_SRCS:.c=)

.PHONY: all clean test

all: libgm82_host.so $(TEST_BINS)

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

libgm82_host.so: $(OBJ)
	$(CC) -shared -o $@ $(OBJ) $(LDFLAGS)

tests/test_%: tests/test_%.c $(OBJ)
	$(CC) $(CFLAGS) $< $(OBJ) -o $@ $(LDFLAGS)

test: all
	@for t in $(TEST_BINS); do \
		echo "Running $$t..."; \
		./$$t || exit 1; \
	done

clean:
	rm -f src/*.o *.o *.so $(TEST_BINS)
