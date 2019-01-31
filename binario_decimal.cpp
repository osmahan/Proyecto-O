#include<conio.h>
#include<stdio.h>
#include<math.h>
 
int main()
{
	char binario[8]={'0','0','0','0','0','0','0','0'};
	int numbinario[8];
	int decimal=0;
	int a;
	int b=-1;
	printf("Teclea el numero binario de 8 bits :  ");
	scanf("%8s",binario);
	for(a=7;a>=0;a=a-1)
	{
		b++;
		switch(binario[b])
		{
			case '0':
				numbinario[a]=0;
			break;
			case '1':
				numbinario[a]=1;
			break;
			default:
			printf("Los caracteres introducidos no son correctos");
		}
		decimal=numbinario[a]*pow(2,a)+decimal;
	}
	printf("\nEl numero en decimal es %i",decimal);
	getch();
}
