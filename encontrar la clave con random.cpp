#include<stdlib.h>
#include<stdio.h>
int buscar(int num[],int clave,int n);

int main (){
	int num[500],n,i,clave,x;
	printf("Introduce el numero de elementos\n");
	scanf("%d",& n);
	for (i=0;i<n;i++)
	   num[i]=rand()%10;
	
for (i=0;i<n;i++)
	printf("El valor de num es: %d\n",num[i]);

	printf("Introduzca la clave\n");
	scanf("%d",& clave);
	x= buscar(num,clave,n);
	if(x>-1)
		printf("La posicion de la clave es: %d\n",x);
	else
		printf("Este numero No existe");
	}
int buscar(int n[],int c,int t)
{
	int i;
	for(i=0;i<t;i++){
    if (c==n[i]){
        return i;
		}

		else if (i== t-1)
		  return -1;

	}
	#include<stdio.h>

int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(int x, int y);
int potencia(int x, int y);


	int op,num1,num2,sum,rest,mult,pot;
	float div;
	
	printf("\n***** M  E  N  U *****\n");
	printf("1. SUMA\n");
	printf("2. RESTA\n");
	printf("3. MULTIPLICACION\n");
	printf("4. DIVISION\n");
	printf("5. POTENCIA\n");
	printf("6. SALIR\n");
	scanf("%d",&op);
	
	printf("\nIngrese el primer valor\n");
	scanf("%d",&num1);
	printf("\nIngrese el segundo valor\n");
	scanf("%d",&num2);
	
	switch(op)
	{
		case 1: {sum=suma(num1,num2);
			printf("\nLa suma es: %d",sum);
			};
			break;
		
		case 2: {rest=resta(num1,num2);
		printf("\nLa resta es: %d",rest);
			};
			break;
			
		case 3: {mult=multiplicacion(num1,num2);
		printf("\nLa multiplicacion es: %d",mult);
			};
			break;
		
		case 4: {div=division(num1,num2);
		printf("\nLa division es: %.2f",div);
			};
			break;
		
		case 5: {pot=potencia(num1,num2);
		printf("\nLa potencia es: %d",pot);
			};
			break;
		case 6: break;
	}
	
	}

int suma(int x, int y)
{
	return x+y;
}


int resta(int x, int y)
{
	return x-y;
}


int multiplicacion(int x, int y)
{
	return x*y;
}


float division(int x, int y)
{
	return x/y;
}


int potencia(int x, int y)
{
	int a;
	int power;
	power=1;
	
	for(a=1; a<=y; a++)
	{
		power = x*power;
	};
	
	return power;
}

