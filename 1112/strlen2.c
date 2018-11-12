#include<stdio.h>
#include<stdlib.h>
int my_strlen(const char *arr){
	int count = 0;
	while (*arr)
	{
		arr++;
		count++;
	}
	return count;
}
int main(){
	char arr[] = "abcdef";
	printf("%d\n",strlen(arr));
	system("pause");
	return 0;
}
