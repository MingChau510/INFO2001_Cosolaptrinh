// In bang cuu chuong.
#include<stdio.h>
int main(){
	int a,b;
	printf("a = ", a);
	scanf("%d", &a);
	for(b=2 ;b <= 9; b++){
		printf("%d * %d = %d\n", a,b, a*b);
	}
	return 0;
}
