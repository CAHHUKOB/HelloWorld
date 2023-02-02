#include <stdio.h>

int main() {
	int x = 5, y = 10, res;
	//однако, можно и построчно все расписать;
	//int x=5;
	x += 5;
	x--;
	res = x + y;
	printf("Variable: %d + %d = %d\n", x, y, res);

	return 0;
}