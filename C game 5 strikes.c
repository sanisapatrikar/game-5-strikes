#include <stdio.h>
#include <string.h>

void no_of_letters(int a, int b)
{
    printf("So you have picked word number %d! Your word to be guessed has %d letters\n", a, b);
}

void gameplay(char guess[], char *word)
{
    for (int i = 5; i > 0; i--)
    {
        printf("Guess the word: ");
        scanf("%s", guess);

        if (strcmp(guess, word) != 0)
        {
            printf("That's incorrect. You now have %d chances left.\n", i-1);
        }
        else
        {
            printf("Congrats! You got that right.\n");
            break;
        }

        if (i == 1)
        {
            printf("Sorry, but 5 strikes and you're out!\n");
            break;
        }
    }

    printf("Thank you for playing!\n");
}

void main()
{
    int w;
    char guess[20];
    char *word;

    //intro n rules
    printf("Welcome to 5 strikes! The rules of this game are simple. You must pick one of the 5 words to guess and you are provided with the clues to guess it correctly. You have 5 chances to get the word right.\n");
    printf("All the best!\n");
    printf("Enter any number from 1 to 5 to get your word: ");
    scanf("%d", &w);

    if (w > 5 || w < 1)
    {
        printf("Game terminated due to invalid number. Please enter a valid number from 1 to 5.\n");

    }
    else
    {
        switch (w)
        {
            case 1:
                word = "dictionary";
                no_of_letters(1, strlen(word));
                printf("Clue: This is where today comes before yesterday. What is it?\n");
                gameplay(guess, word);
                break;

            case 2:
                word = "coin";
                no_of_letters(2, strlen(word));
                printf("Clue: I have a head and a tail but no body. What am I?\n");
                gameplay(guess, word);
                break;

            case 3:
                word = "secret";
                no_of_letters(3, strlen(word));
                printf("Clue: If you have me, you will want to share me. But if you share me, you will no longer have me. What am I?\n");
                gameplay(guess, word);
                break;

            case 4:
                word = "hole";
                no_of_letters(4, strlen(word));
                printf("Clue: What gets bigger the more you take away?\n");
                gameplay(guess, word);
                break;

            case 5:
                word = "silence";
                no_of_letters(5, strlen(word));
                printf("Clue: What is so delicate that saying its name breaks it?\n");
                gameplay(guess, word);
                break;
        }
    }

}

