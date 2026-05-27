#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("\t\t\033[1;35mWelcome to the world of Guessing Number!!!\033[0m\n");
    random=rand () % 100+1; //Generating between 0 to 100     
    do 
    {
     printf("\n\033[1;33mPlease enter your Guess between (1 to 100): \033[0m");
     scanf("%d",&guess);
     no_of_guess++;

     if(guess<random)
     {
        printf("\033[1;34mGuess a larger number. \n\033[0m");
     }
     else if(guess>random)
     {
          printf("\033[1;36mGuess a smaller number. \n\033[0m");
     }
     else 
     {
        printf("\033[1;31mCongratulation !!!You have successfully guessed the number in %d attempts\033[0m",no_of_guess);
     }
    }
    while(guess!=random);
    printf("\n\033[1;32mBye Bye, Thanks for Playing.\033[0m");
    printf("\n\033[1;32mDeveloped by Raman B.K.\033[0m");
    return 0;
}
