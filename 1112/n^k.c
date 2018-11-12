#include<stdio.h>
#include<stdlib.h>
int fnc(int n, int k){
	if (k == 0){
		return 1;
	}
	else if (k == 1){
		return n;
	}
	else{
		return n*fnc(n, k - 1);
	}
}
int main(){
	int res=fnc(6,3);
	printf("%d\n",res);
	system("pause");
	return 0;
}