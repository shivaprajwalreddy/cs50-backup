#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int level(string text);

int main()
{
    string text = get_string("Text: ");

    int letters = calc_letters(text);
    int words = calc_words(text);
    int sentences = calc_sentences(text);

    int grade = 0.0588 * L - 0.296 * S - 15.8
}
