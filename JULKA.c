#include <stdio.h>
int main() {
	long long int apples, more, c;
	int i;
	for(i=0;i<10;++i) {
		scanf("%llu\n%llu", &apples, &more);
		c = (apples/2)+(more/2);
		printf("%llu\n%llu\n", c, apples-c);
	}
	return 0;
}
