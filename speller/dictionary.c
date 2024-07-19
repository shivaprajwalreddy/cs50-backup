// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
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
        strcpy(word, *new_node);

        //call hash function for hash function index
        int hash_index = hash(*word);

        //insert into hash table
        node *table[hash_function] = *new_word;
        node->word = new_word;
        node->next = NULL;

        node->next = *new_node;
        node *table[hash_function] = node;
    }


    fclose(source);
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
