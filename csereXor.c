#include <stdio.h>

int main(){
	int a=8;
	int b=95;

	printf("Az a valtozo eredeti erteke: ");
	printf("%d\n",a);
	printf("A b valtozo eredeti erteke: ");
	printf("%d\n",b);

	a=a^b;
	b=b^a;
	a=a^b;

	printf(" ");
	printf("Az a valtozo mostani erteke: ");
	printf("%d\n",a);
	printf("A b valtozo mostani erteke: ");
	printf("%d\n",b);

	return 0;

}
