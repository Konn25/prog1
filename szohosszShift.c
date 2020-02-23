#include <stdio.h>

int main(){
	
	int s=8;
	int db=0;

	while(s<<=1){
		
		db++;
	}

	printf("%d\n",db);
	

	return 0;
}
