#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, n;
	long unsigned int x,y;
	scanf("%d",&i);
	for(n=0;n<i;n++){
		scanf("%lu %lu", &x, &y);
		printf("%lu\n",x*y);
	}
	return 0;
}
