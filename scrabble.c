#include <stdio.h>
#include <cs50.h>

int scrabble_score(string word);
int compare_scores(int score1, int score2);

int main(void)
{
    string word1 = get_string("Enter first word: ");
    string word2 = get_string("Enter second word: ");
    int score1 = scrabble_score(word1);
    int score2 = scrabble_score(word2);
    int winner = compare_scores(score1, score2);
    if (winner == 1)
    {
        printf("Player 1 wins!\n");
    }
    else if (winner == 2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    return 0;
}

int scrabble_score(string word)
{
    int score = 0;  
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' || word[i] == 'l' || word[i] == 'L' || word[i] == 'n' || word[i] == 'N' || word[i] == 'r' || word[i] == 'R' || word[i] == 's' || word[i] == 'S' || word[i] == 't' || word[i] == 'T')
        {
            score += 1; // 1 point for each letter
        }
        else if (word[i] == 'd' || word[i] == 'D' || word[i] == 'g' || word[i] == 'G')
        {
            score += 2; // 2 points for each letter in dg       
        }
        else if (word[i] == 'b' || word[i] == 'B' || word[i] == 'c' || word[i] == 'C' || word[i] == 'm' || word[i] == 'M' || word[i] == 'p' || word[i] == 'P')
        {
            score += 3; // 3 points for each letter in bcmp       
        }
        else if (word[i] == 'f' || word[i] == 'F' || word[i] == 'h' || word[i] == 'H' || word[i] == 'v' || word[i] == 'V' || word[i] == 'w' || word[i] == 'W' || word[i] == 'y' || word[i] == 'Y')
        {
            score += 4; // 4 points for each letter in fhvy
        }
        else if (word[i] == 'k' || word[i] == 'K')
        {
            score += 5; // 5 points for each letter in k
        }
        else if (word[i] == 'j' || word[i] == 'J' || word[i] == 'x' || word[i] == 'X')
        {
            score += 8; // 8 points for each letter in jx
        }
        else if (word[i] == 'q' || word[i] == 'Q' || word[i] == 'z' || word[i] == 'Z')
        {
            score += 10; // 10 points for each letter in qz
        }
    }
    return score;
}

int compare_scores(int score1, int score2)
{
    if (score1 > score2)
    {
        return 1;
    }
    else if (score2 > score1)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}