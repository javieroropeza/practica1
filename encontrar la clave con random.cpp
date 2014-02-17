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

}
