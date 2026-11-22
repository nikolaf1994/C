#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(char* text);
int count_words(char* text);
int count_sentences(char* text);
int count_index(char* text);
void grade_level(int index);
char* text;
unsigned int number_of_letters;
int textSize;


int main(void) {

    char* text = get_string("Please enter your text:"); 
    grade_level(count_index(text));
    return 0;
}

int count_letters(char* text)
{
    int number_of_letters = 0;
    int textSize = strlen(text);

    for (int i = 0; i < textSize; i++)
    {
        if ((int)(toupper(text[i])) >= 65 && (int)(toupper(text[i])) <= 90)
        {
           number_of_letters++;
        }

    }
    return number_of_letters;
}

int count_words(char* text)
{
    int number_of_words = 0;
    int textSize = strlen(text);

    for (int i = 0; i < textSize; i++)
    {
        if ((int)text[i] == 32 )
        {
            number_of_words++;
        }
    }
    int total_number_of_words = number_of_words + 1;
    return total_number_of_words;

}

int count_sentences(char* text)
{
    int number_of_sentences = 0;
    int textSize = strlen(text);
    for (int i = 0; i < textSize; i++)
    {
        if ((int)text[i] == 46 || (int)text[i] == 33 || (int)text[i] == 63)

        {
            number_of_sentences++;   

        }
    }
    return number_of_sentences;
}

int count_index(char* text)
{
    int index;
    index =round (0.0588 * ((float)(count_letters(text))/(float)(count_words(text))*100) - 0.296 * ((float)(count_sentences(text))/(float)(count_words(text))*100) - 15.8);
    return index;
} 

void grade_level (int index) 
{
    if (index < 1)

    printf("Before Grade 1\n");

    else

    if (index >= 16)

    printf("Grade 16+\n");

    else

    printf("Grade %d\n", index);
}
//