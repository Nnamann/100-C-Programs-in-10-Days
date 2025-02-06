#include<stdio.h>
int main()
{
    int i,j,mrk[3][5],tm[3]; 
    double sa[5];
    printf("Enter the marks of all subjects of each student:\n");
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
           scanf("%d",&mrk[i][j]);
    for(i=0;i<3;i++)
    {
        int s=0;
        for(j=0;j<5;j++)
        s+=mrk[i][j];
        tm[i]=s;
    }
    for(i=0;i<5;i++)
    {
        int s=0;
        for(j=0;j<3;j++)
        s+=mrk[j][i];
        sa[i]=s/3.0;
    }
    printf("\nTOTAL MARKS OF EACH STUDENT:\n %d\n %d\n %d\n",tm[0],tm[1],tm[2]);
    printf("\nAVERAGE OF EACH SUBJECT:\n");
    for(i=0;i<5;i++)
    printf("%lf\n",sa[i]);
    return 0;
}