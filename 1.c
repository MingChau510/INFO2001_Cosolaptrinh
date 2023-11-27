#include <stdio.h>

struct Student {
	int stdId;
	char stdName[50];
	float Science, Physic;
};

int main(){
	struct Student std = {510, "Minh Chau", 10.0, 9.0};
	printf("ID: %d\n", std.stdId);
	printf("Ho va ten: %s\n", std.stdName);
	printf("Result of Science: %.2f\n", std.Science);
	printf("Result of Physic: %.2f", std.Physic);
	return 0;
}
