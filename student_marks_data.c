//Write a program to create an array of student structures to store the roll no., name, and marks in 3 subjects. Input the details of N students into the array and display roll no., name, and total marks of each student in decreasing order of total marks.

#include<stdio.h>

struct marks
{
    int roll;
    char name[50];
    float m1,m2,m3;
};

int main()
{   
    int n,i,j;
    printf("Enter the number of student entries to be made: ");
    scanf("%d",&n);
    struct marks arr[n];
    printf("\nEnter the student details:\n\n");
    for(i=0;i<n;i++)
    {   getchar();                                              //This clears the previous '\n' entered in the terminal, if not done fgets() faces abnormalities, and even gets skipped during the execution.
        printf("\nROLL NO:- %d\n",i+1);
        arr[i].roll=i+1;
        printf("NAME:- ");
        fgets(arr[i].name,50,stdin);
        printf("ENTER MARKS of SUBJECT 1, 2 & 3:\n");
        scanf("%f %f %f",&arr[i].m1,&arr[i].m2,&arr[i].m3);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
           {   
               float tm1 =arr[j].m1+arr[j].m2+arr[j].m3;
               float tm2 =arr[j+1].m1+arr[j+1].m2+arr[j+1].m3;
               if(tm1<=tm2)
               {
                 struct marks temp= arr[i];
                 arr[j]=arr[j+1];
                 arr[j+1]= temp;
               }
           }
    }
    printf("\n\nSorted list on basis of descending total marks obatined by the students:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d.  Roll Number: %d; | Marks(Subject 1,2,3): %f, %f, %f  | Name: %s\n",i+1,arr[i].roll,arr[i].m1,arr[i].m2,arr[i].m3,arr[i].name);
    }     
    return 0;  
}