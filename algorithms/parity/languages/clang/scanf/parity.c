#include <stdio.h>

int main(void) 
{
    int start;
    int final;

    do 
    {
        printf("What's your starting number?: ");
        while (scanf("%d", &start) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            int c;

            while((c = getchar()) != '\n' && c != EOF) 
            {
                printf("Removing %c from input buffer\n", c);
            }
        }

        printf("What's your final number?: ");
        
        while (scanf("%d", &final) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            int c;

            while((c = getchar()) != '\n' && c != EOF)
            {
                printf("Removing %c from input buffer\n", c);
            }
        }

        if (final < start)
        {
            printf("\n");
            printf("Sorry, but final number is smaller than starting one.\n");
            printf("Let's try again.\n");
            printf("\n");
        }

        else if (start == final) 
        {
            printf("\n");
            printf("Sorry, but start number must be different from final one.\n");
            printf("Let's try again.\n");
            printf("\n");
        }
    } while (final <= start);

    for (int i = start; i <= final; i++)
    {
        if (i % 2 == 0)
        {
            printf("Number %d: Even\n", i);
        }

        else printf("Number %d: Odd\n", i);
    }
}