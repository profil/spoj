#include <stdio.h>

int main() {

	int p, l, m;
	scanf("%d %d %d", &p, &l, &m);

	printf("%s", (p*l)<=m?"yes":"no");

/*	if((p*l)<=m) {
		printf("yes");
	}
	else {
		printf("no");
	}
*/
	return 0;
}
