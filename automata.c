#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	printf("Dame un numero: \n");

	scanf("%d", &x);

	if(x>0){
		printf("El numero %d es positivo\n",x);
	}
	return 0;
}
