#include <stdio.h>
void main() {
	int no,i,y,x=35;
	printf("Enter number of rows: ");
	scanf("%d", &no);
	for (y=0;y<=no;y++) {
		//goto(x,y+1);
		for (i=0-y; i<=y; i++) {
			printf(" %d ", abs(i));
			x=x-3;
		}
		printf("\n");
	}

}
