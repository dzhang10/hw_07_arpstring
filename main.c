#include <stdio.h>
#include <string.h>


float average(int *array, int size){
	float average = 0;
	int i;
	for(i=0;i<size;i++)
		average+= (array[i]/(float)size);
	return average;
}

void duplicate(int *a1, int *a2, int size){
	int i;
	for(i=0;i<size;i++){
		*a2=*a1;
		a1++;
		a2++;
	}

}

int stringLength(char *c){
	int length=0;
	while(*(c+length))
		length++;
	return length;

}

int main(){
	int array[5]={6,45,2,41,3};
	printf("average: %f\n",average(array,5));

	int a1[5]= {1,2,3,4,5};
	int a2[5];

	duplicate(a1,a2,5);

	int i;
	for(i=0;i<5;i++){
		printf("a1[%d] = %d\n",i,a1[i]);
		printf("a2[%d] = %d\n",i,a2[i]);
	}

	char hello[] = "hello";
	printf("stringLength: %d\n",stringLength(hello));

	char helloCopy[20];

	strcpy(helloCopy,hello);
	for(i=0;i<stringLength(helloCopy);i++)
		printf("%c",helloCopy[i]);
	printf("\n");

	strcat(helloCopy,hello);
	for(i=0;i<stringLength(helloCopy);i++)
		printf("%c",helloCopy[i]);
	printf("\n");

	if(strcmp("hello","helloCopy") == 0)
		printf("true\n");
	else
		printf("false\n");

	char *p = strchr(hello,'l');
	printf("First instance of l: %p\n",p);
	return 0;
}
