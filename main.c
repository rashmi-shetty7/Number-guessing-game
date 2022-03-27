/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int randomnum=0,num=0;
    char ch='Y';
    printf("Welcome to number guessing game\n");
    
    do
    {
    srand(time(NULL));
    randomnum=(rand()%14)+1;
    printf("\nEnter the number between 1 to 15:");
    scanf("%d",&num);
    if(num>15)
    {
        printf("enter lessr number");
    }
     if(randomnum==num)
     {
         printf("you won!!");
        
     }
     else 
     {
         printf("\n you lost!!\n the Random number is %d",randomnum);
     }

        printf("\n do you want to continue(Y/N):");
        scanf(" %c",&ch);
    } while(ch=='Y');
    
    printf("You played well see you soon!!");
    return 0;
}




