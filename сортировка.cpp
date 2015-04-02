/*! \file main.cpp
Главный файл проекта
*/

#include <iostream>
#include <ctime>
using namespace std;

/** \fn void quicksort(int *mas, int first, int last)
Функция быстрой сортировки
*/
int first, last;
void quicksort(int *mas, int first, int last)
{
int mid, count;
int f=first, l=last;
mid=mas[(f+l)/ 2]; 
do
{
while (mas[f]<mid) f++;
while (mas[l]>mid) l--;
if (f<=l)
{
count=mas[f];
mas[f]=mas[l];
mas[l]=count;
f++;
l--;
}
} while (f<l);
if (first<l) quicksort(mas, first, l);
if (f<last) quicksort(mas, f, last);
}
/** \fn void main()
Главная функция проекта
*/

void main()
{
setlocale(LC_ALL,"Rus");
int n; 
cout<<"n="; cin>>n;  
int *A=new int[n];
srand(time(NULL));
cout<<"Исходный массив: ";
for (int i=0; i<n; i++)
{
A[i]=rand()%20;
cout<<A[i]<<" ";
}
first=0; last=n-1;
quicksort(A, first, last);
cout<<endl<<"Результирующий массив: ";
for (int i=0; i<n; i++) cout<<A[i]<<" ";
delete []A;
system("pause>>void");
}
