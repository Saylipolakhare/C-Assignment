// Write a program to input n numbers on command line argument and calculate maximum of them.

#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[])
{
int size = 0;
int max = atoi(argv[1]);
int current_val = 0;
size=argc-1;
for(int i=1; i<=size; i++)
{
current_val= atoi(argv[i]);
 if (current_val > max)
 {
 max = current_val;
 }
}
printf("%d \n",max );
return 0;
}




 
 
 
 
 

 
