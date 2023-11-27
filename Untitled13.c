#include<stdio.h>
#define PI 3.14

int Chuvihinhtron(int a){
	int C = 2*a*PI;
	return C;
}

int Dientichhinhtron(int b){
	int S = PI*b*b;
	return S;
}

int main(){
	int a;
	printf("Nhap ban kinh r: ", a);
	scanf("%d", &r);
	
	int Chuvi, Dientich;
	Chuvi = Chuvihinhtron(r);
	Dientich = Dientichhinhtron(r);
	printf("Chu vi hinh tron la: %d\n", Chuvi);
	printf("Dien tich hinh tron la: %d\n", Dientich);
	return 0;
}
