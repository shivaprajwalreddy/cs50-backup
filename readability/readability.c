#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calc_letters(string text);

int main()
{
    string text = get_string("Text: ");

    int letters = calc_letters(text);

    printf(" %i",letters);



}

int calc_letters(string text)
{
    int letters = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
    }
}

// int calc_words(string text)
// {

// }

// int calc_sentences(string text)
// {

// }
