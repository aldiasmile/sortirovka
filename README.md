# sortirovka
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <locale.h>

void sort2(int *p, int n)
{
	for(int i=0; i<n-1; i++)
	{
		bool zamena=false;
		for(int j=0; j<n-1-i; j++) 
		  if (p[j]>p[j+1]) 
		  {
			  int buf=p[j];
			  p[j]=p[j+1];
			  p[j+1]=buf;
			  zamena=true;
		  }
		if (!zamena)
			break;
		
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int *p, n;
	printf("n="); scanf("%d", &n);
	setlocale(LC_ALL, "rus"); 
	p=(int *)malloc(n*sizeof(int)); 
	for(int i=0; i<n; i++)
	{
		p[i]=rand() % 225; 
		printf("%d  ", p[i]);
	}
	printf("\nМасссив после сортировки:\n");
	sort2(p, n);
	for(int i=0; i<n; i++)
		printf("%d  ", p[i]);
	return 0;
}
