#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N = 512;
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");

    // Create a buffer for a block of data
    uint8_t buffer[N];

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, N, card) == N)
    {
        // Create JPEGs from the data
        
    }
}
