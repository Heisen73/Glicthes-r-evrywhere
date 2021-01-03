#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int i,j,a=1;
    int num,guess,middle=50;
    printf("Bello! Welcome ot o_ur g..!Glitch#@$..ame\n");
    //srand(time(NULL));
    //num=((rand()%100)+1);
    num=42;
    printf("%d\n", num);
    if(num==50)
        num = num-7;
    printf("\nEnter your guess in between 1 and 100!\n");

    while(a!=0)
    {
        scanf("%d", &guess);
    if(guess>100 || guess<1)
       {
           printf("Error! Input beyond limits...\n");
           printf("Enter a number only between 1 and 100\n");
           continue;
       }
        if(guess==num)
            {
                printf("YEs! You guessed it right. Congrats!\n");
                return;
            }
        if(guess<middle)
            {
                if(guess>num)
                    {
                        printf("\n\nOops! sorry pal! You lost\n\n");
                        printf("Your Final guess is : %d\n",guess);
                        printf("The Random number is : %d\n",num);
                        return;
                    }
                if((num-guess)>20 && (num-guess<=30))
                    printf("cold\n");
                if((num-guess>10 && num-guess<=20))
                    printf("warmer\n");
                if((num-guess>5 && num-guess<=10))
                    printf("Hot! Hot!\n");
                if(num-guess<=5)
                {
                    printf("Hot!Jeez that's too hot! You were too close. So you win!\n");
                    printf("\nYOU WIN!!!!\n\n");
                    return;
                }


            }
        if(guess>middle)
            {
                if(guess<num)
                    {
                        printf("\n\nOops! sorry pal! You lost :(\n\n");
                        printf("Your Final guess is : %d\n",guess);
                        printf("The Random number is : %d\n",num);
                        return;
                    }
                if((guess-num>20 && guess-num<=30))
                    printf("cold\n");
                if((guess-num>10 && guess-num<=20))
                    printf("warmer\n");
                if((guess-num>5 && guess-num<=10))
                    printf("Hot! Hot!\n");
                if(guess-num<=5)
                {
                     printf("Hot!Jeez that's too hot! You were too close.\n");
                     printf("\nYOU WIN!!!!\n\n");
                     return;
                }

            }printf("Guess again *_*\n");
    }
}
