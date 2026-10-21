#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guess;

    do
    {
        printf("guess the number: ");
        scanf("%d", &guess);
        if (guess < random_number)
        {
            printf("Too low! Try again!\n");
        }
        else if (guess > random_number)
        {
            printf("Too high! Try again!\n");
        }
        else if (number_of_guesses < 5)
        {
            printf("\n you won! with a higher score!! \n");
        }
        else if (number_of_guesses > 10)
        {
            printf("\n too many guesses! \n");
        }
        else
        {
            printf("congrats!!\n");
        }
        number_of_guesses++;
    } while (guess != random_number);
    printf("Congratulations! You guessed the number in %d attempts.\n", number_of_guesses);

    return 0;
}   