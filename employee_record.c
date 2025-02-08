//Write a program to create an array of employee structures to store emp-no, name, basic salary, and HRA. Input the details of N employees and display emp-no, name, basic, HRA, and net salary. Display the details of all employees whose net salary is more than the average net salary of all employees

#include<stdio.h>
#include<string.h>

struct employee
{
    int empno;
    char name[50];
    float bsal, hra, nsal;
};

int main()
{
    int n,i;
    double avg;
    printf("Enter the number of employees whose details to be maintain the record: ");
    scanf("%d",&n);
    struct employee arr[n];
    printf("\n\nEnter the details of the employees:\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d:\nEmp-no:- ",i+1);
        scanf("%d",&arr[i].empno);
        getchar();                                      //!!! VVIP to remove the next line acquired in scanf, if not removed it leads to fgets() skipped
        printf("NAME: ");
        fgets(arr[i].name,50,stdin);
        printf("Basic Salary:- ");
        scanf("%f",&arr[i].bsal);
        printf("HRA:- ");
        scanf("%f",&arr[i].hra);
        printf("Net Salary:- ");
        scanf("%f",&arr[i].nsal);

        int p=strcspn(arr[i].name,"\n");
        arr[i].name[p]='\0';
    }
    for(i=0;i<n;i++)
      avg+=arr[i].nsal;
    avg/=n;
    printf("\n\nEmployees with net salary greater than average net salary:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i].nsal>avg)
        {
            printf("\nEmp-no:- %d  | NAME: %s  | Basic Salary:- %f  | HRA:- %f  | Net Salary:- %f",arr[i].empno,arr[i].name,arr[i].bsal,arr[i].hra,arr[i].nsal);
        }
    }
    return 0;
}