#include<stdio.h>

void manual_strcpy(char* str1, char* str2, int len){
		
	int i;
	for(i=0;i<len;i++){
		*(str1+i)= *(str2+i);		
	}
			
}
int main(){
	
	char str1[100];
	printf("ENTER THE FIRST STRING :\n");
	scanf("%s",str1);
    char str2[100];
	printf("ENTER THE SECOND STRING :\n");
	scanf("%s",str2);
	
	int i=0;
	int len=0;
	while(str2[i]!='\0'){
		len++;
		i++;		
	}		
	manual_strcpy(str1,str2,len);
	printf("%s",str1);
	return 0;
}