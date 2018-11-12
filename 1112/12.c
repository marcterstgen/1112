#include<stdio.h>
#include<stdlib.h>
int DigitSum(int x){
	if (x < 10)
		return x;
	else
		return (x % 10 + DigitSum(x / 10));
}

int main(){
	int n = 1729;
	int res = DigitSum(n);
	printf("%d\n", res);
	system("pause");
	return 0;
}