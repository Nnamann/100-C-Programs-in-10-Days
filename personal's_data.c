//Write a program to define a structure personal that would contain the person’s name, date of joining, and salary. Using this structure write a program to read this information for one person from the keyboard and print the same on the screen.

#include<stdio.h>
#include<string.h>
struct personal
{
    char name[50], doj[15];                //If the dof was taken 10 instead of 15, the string becomes too small and leads to abnormalities.
    int salary;
};

int main()
{
    struct personal s[10]=
    {
    {"Naman Bhardwaj","13/12/2000",5000000},
    {"Aryan Bhardwaj","09/05/2005",5500000},
    {"Shivam Bhardwaj","31/11/2005",500000},
    {"Shubham Bhardwaj","09/03/2005",4000000},
    {"Salman Khan","01/11/1970",500000000},
    {"Amitabh Bachhan","21/12/1955",90000000},
    {"Byju Raveendran","23/07/1981",500},
    {"Tom Cruise","27/08/1969",98766000},
    {"John Wick","06/04/1980",19900000},
    {"Richie RIch","01/01/2000",999999999}
    };
    printf("Enter the full name of the employee:\n");
    
    int i,x=0;
    char nm[50];
    
    fgets(nm,50,stdin);                                      //!!!Required, if '\n' is not removed, it causes abnormalities during the use of the function strcasecmp(), and thus hinges the result.
    for(i=0; i<strlen(nm);i++)
    if(nm[i]=='\n')
    nm[i]='\0';

    for(i=0;i<10;i++)
    if(strcasecmp(nm,s[i].name)==0)
    {
        printf("\nNAME: %s\nDATE OF JOINING: %s\nSALARY: %d\n",s[i].name,s[i].doj,s[i].salary);
        x=1;
    }
    if(x==0)
    printf("\nNo Record Found\n");
    return 0;
}

