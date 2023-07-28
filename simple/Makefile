CC=/riscv/_install/bin/riscv64-unknown-linux-gnu-gcc

all: vadd

vadd: vadd.c
	${CC} -march=rv64gcv -O1 -ftree-vectorize vadd.c -static -o vadd

clean:
	rm -f vadd
