#include<stdio.h>

void main(){
	int n = 10;
	int i;
	for (i=1;i<=n;i++){
		if (i == 5)
			break;
		else
			printf("%d\n", i);

	}
}

/*
output:
1
2
3
4
*/
