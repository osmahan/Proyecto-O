#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float suma();
float resta();
float multiplicacion();
float division();
float raiz_cuadrada();

int main(int argc, char *argv[]) 
{
   
    
	int opc;
	printf("Calculadora\n ");
	printf("Elige una opcion\n ");
	printf("suma(1)\n ");
	printf("resta(2)\n ");
	printf("multiplicacion(3)\n ");
	printf("division(4)\n ");
	printf("Raiz_cuadrada(5)\n ");
	printf("\nque opcion desea ingresar: ");
	scanf("%opc",&opc);
    
  
    
	switch (opc)
	{
    	case 1:
    		suma();
    		break;
    	case 2:
			resta();
			break;		
		case 3:
    		multiplicacion();
    		break;
		case 4:
   			division();
   			break;
	   	case 5:
	   		raiz_cuadrada();
    	    break;
    		
    	default:printf("ERROR");
    	
    	
    }
  
  										
		getch();
	return 0;
}		

float suma()
{
  float a,b,c;
    printf("Ingresa el primer dato:\n ");
     scanf("%f",&a);

    printf("Ingresa el segundo dato:\n ");
     scanf("%f",&b);
	
	c=a+b;
	printf("\nEl resultado es: %g ",c);
	}

 float resta()
{
 float a,b,c;
    printf("Ingresa el primer dato:\n ");
     scanf("%f",&a);
    
	printf("Ingresa el segundo dato:\n ");
     scanf("%f",&b);
	 
	  c=a-b;
	printf("\nEl resultado es: %g ",c);
}

float multiplicacion()
{
 float a,b,c;
    printf("Ingresa el primer dato:\n ");
     scanf("%f",&a);
    
	printf("Ingresa el segundo dato: \n ");
     scanf("%f",&b);
	  
	 c=a*b;
	printf("\nEl resultado es: %g ",c);
}

 float division()
{
 float a,b,c;
    printf("Ingresa el primer dato: \n ");
     scanf("%g",&a);
  
    printf("Ingresa el segundo dato: \n ");
     scanf("%g",&b);
 
 if ( b!=0 && a!=0)
    {
     c=a/b;	
     printf("\nEl resultado es: %g ",c);
    }

else{
	 printf("Error, division por cero\n");
    }

}			

float raiz_cuadrada()
{
   float a,c;
    
	printf("Ingresa el primer dato: \n ");
	 scanf("%f",&a);

 if(a>=0)
	{
	 c = sqrt(a);
	 printf("\nEl resultado es: %g ",c);	
	}
	
   else{
		printf("Error, numero negativo");
	    }
}				
