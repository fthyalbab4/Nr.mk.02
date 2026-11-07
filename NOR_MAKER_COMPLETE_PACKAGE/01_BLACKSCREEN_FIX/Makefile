CC ?= gcc
CFLAGS ?= -Wall -Wextra -Iinclude -O2
LDFLAGS ?= -lz -lm
# Overlay FS may deny +x; always run via dynamic loader with ./ prefix.
RUNNER = /lib64/ld-linux-x86-64.so.2

SRC = $(filter-out src/gm82_events_stubs.c,$(wildcard src/*.c)) gml_vm.c
OBJ = $(SRC:.c=.o)
TEST_SRCS = $(filter-out tests/reference_fixture_runner.c,$(wildcard tests/*.c))
TEST_BINS = $(TEST_SRCS:.c=)

.PHONY: all clean test test_full_suite gates

all: libgm82_host.so $(TEST_BINS)

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

libgm82_host.so: $(OBJ)
	$(CC) -shared -o $@ $(OBJ) $(LDFLAGS)

tests/test_%: tests/test_%.c $(OBJ)
	$(CC) $(CFLAGS) $< $(OBJ) -o $@ $(LDFLAGS)

test_full_suite: test_full_suite.c $(OBJ)
	$(CC) $(CFLAGS) test_full_suite.c $(OBJ) -o test_full_suite $(LDFLAGS)

test: all
	@for t in $(TEST_BINS); do \
		echo "Running $$t..."; \
		if [ -f $$t ]; then $(RUNNER) ./$$t || exit 1; \
		else echo "missing $$t"; exit 1; fi; \
	done

# Phase 10/11 host gates: behavioral suite + full suite
gates: all test_full_suite
	@for t in \
		tests/test_with_semantics \
		tests/test_array_semantics \
		tests/test_event_order \
		tests/test_collision_movement \
		tests/test_resource_import \
		tests/test_draw_input_sound \
		tests/test_game_corpus \
		tests/test_match_api \
		test_full_suite; do \
		echo "GATE $$t"; \
		if [ -f $$t ]; then $(RUNNER) ./$$t || exit 1; else echo "missing $$t"; exit 1; fi; \
	done
	@echo "HOST GATES OK (also run: python3 tools/verify_core_mirrors.py from repo root)"

clean:
	rm -f src/*.o *.o *.so $(TEST_BINS) test_full_suite
