// Implements a dictionary's functionality

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 676;

// Hash table
node *table[N];

unsigned int word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hash_value = hash(word);

    node *cursor = table[hash_value];
    while (cursor != NULL)
    {
        if (strcasecmp (cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    if (strlen(word) == 1)
    {
        char first_letter = toupper(word[0]);
        int hash = first_letter - 'A';
        return hash;

    }
    else
    {
        char first_letter = toupper(word[0]);
        char second_letter = toupper(word[1]);
        int hash = (first_letter - 'A') * 26 + second_letter -'A';
        return hash;
    }
   }

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    //open dictionary
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        printf("could not open dictionary");
        return 1;
    }

    //initialize hash table
    for (int i = 0; i < N; i++)
    {
            table[i] = NULL;
    }

    //read strings from the file
    char word[LENGTH + 1];
    while(fscanf(source, "%s", word) != EOF)
        {
        //create a new node
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            printf("insufficient memory");
            return false;
        }

        //copy the word into new node
        strcpy(new_node->word, word);

        //call hash function for hash function index
        int hash_index = hash(word);

        new_node->next = table[hash_index];
        table[hash_index] = new_node;

        //increment word count
        word_count++;
        }

    fclose(source);
    return(true);
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    
    return false;
}
