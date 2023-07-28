#include <stdint.h>
#include <stdio.h>

uint64_t vectorized_loop(uint64_t* A, const uint64_t& size)
{
    uint64_t r = 0;
    for (uint64_t i = 0; i < size; i++)
        A[i] = A[i] + 17;
    for (uint64_t i = 0; i < size; i++)
        r += A[i];
    return r;
}

int main(int argc, char* argv[])
{
    const uint64_t SIZE = 123;

    uint64_t A[SIZE];

    for (uint64_t i = 0; i < SIZE; i++)
        A[i] = i;

    uint64_t r = vectorized_loop(A, SIZE);

    const uint64_t expectation = SIZE * (SIZE - 1) / 2 + 17 * SIZE;

    printf("Calculated sum: %lu\n", r);
    printf("Expected sum  : %lu\n", expectation);

    return 0;
}
