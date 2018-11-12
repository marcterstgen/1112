#include<stdio.h>
#include<stdlib.h>
void Printnum(int n){
	if (n > 9){
		Printnum(n / 10);
	}
	printf("%d\n", n % 10);
}
int main(){
	int num = 9527;
	Printnum(num);
	system("pause");
	return 0;

}