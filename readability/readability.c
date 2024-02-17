#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calc_letters(string text);
int calc_words(string text);
int calc_sentences(string text);

int main()
{
    string text = get_string("Text: ");

    int letters = calc_letters(text);
    int words = calc_words(text);
    int sentences = calc_sentences(text);

    int l = (letters/words)*100;
    int s = (sentences/words)*100;

    
}

int calc_letters(string text)
{
    int letters = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int calc_words(string text)
{
    int words = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isblank(text[i]))
        {
            words++;
        }
    }
    return words;
}

int calc_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}
