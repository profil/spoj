#include <stdio.h>
#define BUFSIZE 32768

int main() {
	int n, k, num=0, c=0, i, cr;
	char buf[BUFSIZE+1]={0};

	scanf("%d%d\n",&n, &k);


	while((cr = fread(buf, 1, BUFSIZE, stdin)) > 0){
		for(i=0;i<cr;i++){
			if(buf[i] != '\n')
				num = buf[i] - '0' + 10*num;
			else {
				if(num % k == 0) {
					++c;
				}
				n -= 1;
				num = 0;
			}
		}
		if(n == 0){
			break;
		}
	}
	printf("%d\n", c);
	return 0;
}
