#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // accept single line command line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // open the memory card
    FILE *card = fopen(argv[1], "r");

    // while data left to read

        // create JPEGs from data

}
