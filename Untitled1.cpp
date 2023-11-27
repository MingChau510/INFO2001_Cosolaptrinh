#include<stdio.h>

int increase10(int *x){
	return *x+10;
}

int main(){
	int a = 20;
	printf("Ket qua thay doi la: %d\n", increase10(&a));
	primtf("a van la: %d", a);
	return 0;
}
