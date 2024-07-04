#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N = 512;
    // accept single line command line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // open the memory card
    FILE *card = fopen(argv[1], "r");

    // create a buffer
    uint8_t buffer[N];

    // while data left to read
    while (fread(buffer, 1, N, card) == N)

        // create JPEGs from data

}
