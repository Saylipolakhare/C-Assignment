// program to calculate grade of students based on marks.

#include<stdio.h>

int main(){
	int s1=0,s2=0,s3=0,s4=0,s5=0;
	float totalmarks;
	printf("Enter the marks in s1: ");
	scanf("%d",&s1);
	printf("Enter the marks in s2: ");
	scanf("%d",&s2);
	printf("Enter the marks in s3: ");
	scanf("%d",&s3);
	printf("Enter the marks in s4: ");
	scanf("%d",&s4);
	printf("Enter the marks in s5: ");
	scanf("%d",&s5);
	
	totalmarks=(s1+s2+s3+s4+s5)/5;
	if(totalmarks >= 90 && totalmarks >= 80){
		printf("Grade A");
	}
	else if(totalmarks < 80 && totalmarks >= 70){
		printf("Grade B");
	}
	else if(totalmarks < 70 && totalmarks >= 60){
		printf("Grade C");
	}
	else if(totalmarks < 60){
		printf("Grade F");
	}
	else{
		
	}
	

    return 0;
}
