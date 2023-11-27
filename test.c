#include <stdio.h>

struct SinhVien {
	int maSo;
	char ten[50];
	float diemToan;
	float diemLy;
};

int main(){
	struct SinhVien sv = {207, "Minh Chau", 10.0, 9.0};
	return 0;
}
