#include <stdio.h>

int main() {
   int a1;
	float b1;
	double c1;
	char d1;
	printf("\nSize of int = %lu bytes",sizeof(a1));
	printf("\nSize of float = %lu bytes",sizeof(b1));
	printf("\nSize of double = %lu bytes",sizeof(c1));
	printf("\nSize of char = %lu byte",sizeof(d1));
	int *ptr, q;
	q = 50;
	ptr = &q;
	printf("%d", *ptr);
	return 0;
}
   

/*
output:
Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of char = 1 byte
50
*/
