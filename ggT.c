#include <stdio.h>

int main() {
	long z1, z2;
	scanf("%ld %ld", &z1, &z2);
	if(z1 < z2) {
		//Swap z1 & z2 so that z1 > z2
		z1 ^= z2;
		z2 ^= z1;
		z1 ^= z2;
	}
	int c = 0;
	long rest = z2;
	while(rest != 0) {
		while(getchar() != '\n'); //Wait for user to press ENTER for next step

		rest = z1 % z2;
		printf("\n%ld : %ld = %ld Rest %ld", z1, z2, z1 / z2, rest);
		fflush(stdout);
		z1 = z2;
		z2 = rest;
		c++;
	}
	printf("\n\nGgT: %ld (%d Schritte).\n", z1, c);
	return 0;
}
