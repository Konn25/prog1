#include <stdio.h>

int main(){
	int a=15;
	int b=25;

	printf("Az a valtozo eredeti erteke: ");
	printf("%d\n",a);
	printf("A b valtozo eredeti erteke: ");
	printf("%d\n",b);

	a+=b;
	b=a-b;
	a-=b;
	
	printf("Az a valtozo mostani erteke: ");
	printf("%d\n",a);
	printf("A b valtozo mostani erteke: ");
	printf("%d\n",b);

	return 0;
}
