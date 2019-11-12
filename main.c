#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int i;
	int grade[5];
	int average = 0;
	int *gptr;
	gptr = grade;
	
	for(i=0; i<5; i++)
	{	
		
		printf("input value(%i) = ", i);
		scanf("%d, &grade[i]");
		
	}
	
		for(i=0; i<5; i++)
	{	
		
		printf("grade[%d] = %d\n", i, *(gptr+i));
		average += *(gptr+i);		
	}
	
	printf("average : %d", average/5);
	
	return 0;
	
	
}
