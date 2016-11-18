#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
void main() 
{  
	double *pMas; 
int n; 
				 
printf_s("n="); 
scanf_s("%d", &n); 

pMas = (double *)malloc(n*sizeof(double)); 
 
for (int i = 0; i < n; i++)
{
	pMas[i] = rand() % 100;   printf("%f  ", pMas[i]);
}
for (int i = 0; i < 10; i++)
{
	if (pMas[i] >= 10)
	{
		pMas[i] -= 10;
	}
}
	printf("\n");  
	for (int i = 0; i<n; i++)  
		printf("%f  ", pMas[i]);   
	free(pMas);  
								 
	system("pause");

} 
