//Write a program to create a structure named Date having day, month, and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.

#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day, month, year;
};

int main()
{   
    int td=0,x;
    struct date d;
    printf("ENTER DATE:\n(FORMAT dd mm yyyy)(without any symbols in between)\n");
    scanf("%d %d %d",&d.day,&d.month,&d.year);
    if(d.day>31||d.month>12||d.day<=0||d.month<=0)
    {
      printf("Invalid Input/Format");
      exit(0);
    } 
    
    printf("\n\nADDING 45 DAYS TO THE GIVEN DATE: %d/%d/%d\n",d.day,d.month,d.year); 
      
      if((d.year%4==0 && d.year%100!=0)||(d.year%400==0))
      x=29;
      else
      x= 28;
      switch(d.month)
      {
        case 1:
        td=d.day;
        break;
        case 2:
        td=d.day+31;
        break;
        case 3:
        td=d.day+x+31;
        break;
        case 4:
        td=d.day+31+x+31;
        break;
        case 5:
        td=d.day+30+31+x+31;
        break;
        case 6:
        td=d.day+31+30+31+x+31;
        break;
        case 7:
        td=d.day+30+31+30+31+x+31;
        break;
        case 8:
        td=d.day+31+30+31+30+31+x+31;
        break;
        case 9:
        td=d.day+31+31+30+31+30+31+x+31;
        break;
        case 10:
        td=d.day+30+31+31+30+31+30+31+x+31;
        break;
        case 11:
        td=d.day+31+30+31+31+30+31+30+31+x+31;
        break;
        case 12:
        td=d.day+30+31+30+31+31+30+31+30+31+x+31;
      }
    td+=45;
    if((x==28&&td>365)||(x==29&&td>366))
    {
      d.year++;
      td=td-337-x;
    }
    if((d.year%4==0 && d.year%100!=0)||(d.year%400==0))
    x=29;
    else
    x=28;
    if(td<=31)
    {
      d.day=td;
      d.month=1;
    }
    if(31<td&&td<=31+x)
    {
      d.day=td-31;
      d.month=2;
    }
    if(31+x<td&&td<=62+x)
    {
      d.day=td-(31+x);
      d.month=3;
    }
     if(62+x<td&&td<=92+x)     //April
    {
      d.day=td-(62+x);
      d.month=4;
    }
    if(92+x<td&&td<=123+x)    
    {
      d.day=td-(92+x);
      d.month=5;
    }
    if(123+x<td&&td<=153+x)    
    {
      d.day=td-(123+x);
      d.month=6;
    }
   if(153+x<td&&td<=184+x)    
    {
      d.day=td-(153+x);
      d.month=7;
    }
     if(184+x<td&&td<=214+x)    
    {
      d.day=td-(184+x);
      d.month=8;
    }
     if(214+x<td&&td<=245+x)    
    {
      d.day=td-(214+x);
      d.month=9;
    }
    if(245+x<td&&td<=276+x)    
    {
      d.day=td-(245+x);
      d.month=10;
    }
    if(276+x<td&&td<=306+x)    
    {
      d.day=td-(276+x);
      d.month=11;
    }
     if(306+x<td&&td<=337+x)    
    {
      d.day=td-(306+x);
      d.month=12;
    }
  printf("New Date:  %d/%d/%d\n\n",d.day,d.month,d.year);
  return 0;
}