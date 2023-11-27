#include <stdio.h>
int isEven(int =){
	if(n%2==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	//Input
	int n;
	printf("Nhap so can kiem tra:");
	scanf("%d", &n);
	//Process
	int result = isEven(n);
	if(result==1){
		printf("La so chan");
	}else{
		printf("Khong la so chan");
	}
	return 0;
}
