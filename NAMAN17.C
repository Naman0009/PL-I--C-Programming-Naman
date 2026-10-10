Program (17) → Write a program to accept elements 
                of integer, float, and character arrays from 
                the user and display the value and corresnding 
                memory address of each array element.
Solution (1): Pre define values in the program + 
              without any loop + Explicit way to 
              write the program
            
#include <stdio.h>

int main()
{
  int var1[5]: 
  float var2[5]: 
  char var 3[5];

var 1[0] = 10;
var 1[1] = 20;
var1[2] = 30;
var 1[3] = 40;
var1[4] = 50;

printf("\n The value of var1 of index O is %d " var 1[O]): 
printf("and address is %d" &var 1[01):
printf(" In The value of var1 of index 1 is %d ",var1[1]):
printf(" and address is %d", &var 1[1];
printf (" In The value of var1 of index 2 is %d", var21); 
printf("and address is %d", &var1[2];
printf(" In The value of var1 of index 3 is %d", var 13]): 
printf("and address is %d",&var 1[3];
printf("In The value of var1 of index 4 is %d", var 1[4]);
printf("and address is %d\n\n",&var1[4];
var 2[0] = 1.1;
var 2[1] = 2.2;
var 2[2] = 3.3;
var2[3]= 4.4;
var 2[4] = 5.5;

printf ("In The value of var2 of index O is f", var 2[1): 
printf ("and address is %d",&var 2[01):
printf("In The value of var2 of index 1 is %f ", var 2[1];
printf ("and address is %d", &var 2[1];
printf("\n The value of var of of index is is %f", var 2[2];
printf("and address is %d",&var 2[2];
printf("\n The value of var 2 of index 3 is f", var 2[3];
printf("and address is %d",&var 2[3];
printf("\n The value of var 2 of index 4 is %f ",var 2[4];
printf("and address is %d\n\n",&var2[4];

var 3[0]= 'A';
var3[1]='B';
var 3[2] = 'C';
var 3[3]= 'D';
var 3[4] = 'E';

printf (" In The value of var 3 of index O is %c", var 3[O];
printf("and address is %d",&var 3[0];
printf(" In The value of var3 of index 1 is %c", var 3[1];
printf("and address is %d",&var 3[1];
printf(" in The value of var3 of index 2 is %c", var 3[2];
printf("and address is %d" &var 3[2]);
printf(" InThe value of var3 of index 3 is %c ",var 3[3];
printf("and address is % d",&var 3[3]):
printf(" In The value of var3 of index 4 is %c", var 3[4];
printf("and address is %d\n\n" &var 3[4];
return 0;
}