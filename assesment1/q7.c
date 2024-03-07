// program to accept number from user using command line argument and display its table.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int num,result=0;
	int table = 10;
	num = atoi(argv[1]);
	
	for(int i=1;i<=table;i++){
	 result = num * i;
	 printf("%d \n",result);
	 
	}
	return 0;
}
