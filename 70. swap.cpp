#include <stdio.h>

int main() {
	int a = 1, b = 2;
	int temp;
	temp = a;
	a = b;
	b = temp;

	int a = 1, b = 2;
	a = a + b;
	b = a - b;
	a = b-a;

	return 0;
}