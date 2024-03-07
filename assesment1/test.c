#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
int size,result;
size=argc-1;
for(int i=1;i<=size;i++)
{
result= result+atoi(argv[i]);
}
printf("The result is %d",result);

}
