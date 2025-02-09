//Generating random numbers till a given number

#include<stdio.h>
#include<stdlib.h>      //it provides srand() and rand() functions
#include<time.h>        //it provides time() function

int main()
{  
    int r,i,n;
    printf("Enter the maximum number till which random the values have to be generated (from 1):  ");            //if you want 0, then r=rand()%(n+1);  do decrypt this statement properly
    scanf("%d",&n);
    srand(time(NULL));    // srand() seeds rand() with time(NULL), which returns current time in form of total no. of seconds since 1970(its date of inception)
    for(i=0;i<100;i++)    // generating the random values within the range for hundred times
    {
        r=rand()%n+1;     // with the seed value of time(), rand() generates and stores random values in r, till the given range.
        printf("\n%d\n",r);
    }
    return 0;
}