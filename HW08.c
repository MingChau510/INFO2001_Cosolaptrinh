#include<stdio.h>
int main(){
	int C;
	printf("C:", C);
	scanf("%u", &C);
	float F=(C*9/5)+32;
	if (0<C<106){
		printf("F= %.2f", F);
	}else{
		printf("khong hop le %.2f", F);
	}
	return 0;
}
