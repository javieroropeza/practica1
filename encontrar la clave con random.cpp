#include<stdlib.h>
#include<stdio.h>
int buscar(int num[],int clave,int n);
void Burbuja(int num[],int n)
{
	int i,j,temp;
	
	for (j=1;j<7;j++){
		for(i=0;i<7;i++){
			if (num[i]>num[i+1]){
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
		}
	}
}
int main (){
	int num[500],n,i,clave,x;
	printf("Introduce el numero de elementos\n");
	scanf("%d",& n);
	for (i=0;i<n;i++)
	   num[i]=rand()%10;
	Burbuja(num,7);
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
