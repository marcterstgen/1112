#include<stdio.h>
#include<stdlib.h>
int nj(int n){
	if (n <= 1){
		return 1;
	}
	else{
		return n*nj(n - 1);
	}


}
int nj1(int n)
{
	int i = 0;
	int count = 1;
	for (i = 0; i < n; i++)
	{
		count = count*(n - i);
	}
	return count;
}
int main(){
	int n = 5;
	printf("%d\n", nj(n));
	printf("%d\n", nj1(n));
	system("pause");
	return 0;
}

