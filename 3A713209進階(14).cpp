#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int l;
	int a;
	char input[]="I am a good student.";
	char *check;
	
	l=strlen(input);
	check=input;
	for(a=0;a<l;a++){
		if(*(check+a)<122&&*(check+a)>=96){
			printf("%c", *(check+a));
		}
		else if(*(check+a)<91&&*(check+a)>64){
			printf("%c", *(check+a));
		}
		else if(*(check+a)==32){
			printf("%c", *(check+a));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
