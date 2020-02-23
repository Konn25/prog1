#include <stdio.h>

int main(){

	int c=54;
	int d=23;

	printf("A c valtozo eredeti erteke: ");
	printf("%d\n",c);
	printf("A d valtozo eredeti erteke: ");
	printf("%d\n",d);

	c=d*c;
	d=c/d;
	c=c/d;

	printf("A c valtozo mostani erteke: ");
	printf("%d\n",c);
	printf("A d valtozo mostani erteke: ");
	printf("%d\n",d);

	return 0;



}
