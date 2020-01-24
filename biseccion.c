#include <stdio.h>
#include <math.h>

float f(float);
void pide();
void biseccion(float,float,float);
float error(float, float);

int main()
{
	printf("\n\t\t\t\t--PROGRAMA PARA CALCULAR LA RAIZ DE LA FUNCION x^3+4x^2-10--");
	printf("\n\t\t\t\t\tPOR EL METODO DE BISECCION");
	pide();
	return 1;
}

void pide()
{
	float a,b,es;
	printf("\nIndicar el valor del intervalo inicial: ");
	scanf("%f",&a);
	printf("\nIndicar el valor del intervalo final: ");
	scanf("%f",&b);
	printf("\nIndicar el valor de la tolerancia: ");
	scanf("%f",&es);
	biseccion(a,b,es);
}

float f(float Pp)
{
	return pow(Pp,3)+(4*pow(Pp,2))-10;
}

float error(float Pm1, float Pm2)
{
	return fabs((Pm1-Pm2)/Pm1)*100;
}

void biseccion(float Pa, float Pb, float Pes)
{
	float fa,fb,fm,m1,m2,ec;
	int i=1;
	while(1)
	{
		fa=f(Pa);
		fb=f(Pb);
		m1=(Pa+Pb)/2;
		fm=f(m1);
		printf("\nIteracion %d",i);
		printf("\na=%f",Pa);
		printf("\nb=%f",Pb);
		printf("\nfa=%f^3+(4*%f^2)-10=%f",Pa,Pa,fa);
		printf("\nfa=%f^3+(4*%f^2)-10=%f",Pb,Pb,fb);
		printf("\n(%f+%f)/2=%f",Pa,Pb,m1);
		printf("\nfm=%f^3+(4*%f^2)-10=%f",m1,m1,fm);
		if(i!=1)
		{
			ec=error(m1,m2);
			printf("\nec=|(%f-%f)/%f|*100=%f",m1,m2,m1,ec);
			if(ec<=Pes)
			{
				break;
			}
		}
		if((fa>=0 && fm<0) || (fa<0 && fm>=0))
		{
			Pb=m1;
		}
		else
		{
			Pa=m1;
		}
		m2=m1;
		i++;
	}
}
