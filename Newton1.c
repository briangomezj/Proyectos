#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(-x)-x
#define df(x) -exp(-x)-1

int main()
{
	float xO,x1,fO,f1,dfO,error;
	int i=0;
	printf("\n\t\t\tPROGRAMA PARA EVALUAR LA FUNCION (e^-x)-x");
	printf("\n\t\t\tPOR MEDIO DEL METODO DE NEWTON RAPHSON");
	printf("\n\nINGRESE EL VALOR DE Xo PARA EVALUAR: ");
	scanf("%f",&xO);
	printf("\nINGRESE EL ERROR PERMITIDO: ");
	scanf("%f",&error);
	do
	{
		fO=f(xO);
		dfO=df(xO);
		x1=xO-(fO/dfO);
		f1=f(x1);
		xO=x1;
		i++;
		printf("\nNo de Iteracion= %d",i);
		printf("\nRaiz= %f",x1);
		printf("\nError= %f\n",f1);
	}
	while(fabs(f1)>error);
	
	printf("\n\nLa raiz de la funcion es: %f",x1);
	getch();
	return 0;
}
