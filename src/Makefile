CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
DIR=../build/
TEST=../tests/

all: check
check:
	$(CC) $(CFLAGS) $(TEST)test_quadratic.c quadratic_equation.c quadratic_equation.h -o $(DIR)test_quadratic
clean:
	rm -f *.o $(DIR)test_quadratic 
rebuild:
	clean all


