#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int SCORES[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
char ABC[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 const int SIZE = 26;

unsigned int get_score_for_char(char c) 
{
    c = toupper(c);
    int i = 0;
    for (; i<SIZE; i++) 
    {
        
        if (ABC[i] == c)
        {
            break;
        }
       
        
    }
    if ( i>= SIZE) 
    {
        printf("Invalid Char value %c\n", c);
        return 0;
    }
    return SCORES[i];

}

int compute_score(string word)
    {
        unsigned int score = 0;
        int wordSize = strlen(word);

        for (int i = 0; i < wordSize; i++)
        {
            score += get_score_for_char(word[i]);
        }
        return score;
    }

int main (void)
{
    

    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");


    int score1 = compute_score(player1);
    int score2 = compute_score(player2);

    
    if (score1>score2)
        {
            printf("Player 1 wins!\n");
        
        }

    else if (score2>score1)

        {
            printf("Player 2 wins!\n");
        }
    else

        {
            printf("Tie!\n");
        }

    // printf("Player 1: %s, Player 2: %s, score1: %i,score2: %i\n", player1, player2, score1, score2);

    return 0;
}
