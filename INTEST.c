#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, k, t, c=0, i;
	scanf("%d %d",&n, &k);
	for(i=0;i<n;++i){
		scanf("%d",&t);
		if(t % k == 0){
			++c;
		}
	}
	printf("%d\n", c);
	return 0;
}
