#include <stdio.h>

int main ()

{

int size = 0, i = 0, positive = 0, negative = 0, zero = 0;

printf("Enter the size of array: ");

scanf("%d", &size);

int arr[size];

while(i < size){

printf("Enter number: ");

scanf("%d", &arr[i]);

if( arr[i] > 0){

positive++ ;

}

if(arr[i] == 0){

zero++ ;

}

if(arr[i] < 0){

negative++ ;

}

i += 1;

}

printf("Positive numbers: %d", positive);

printf("\nNegative numbers: %d", negative);

printf("\nZero valued numbers: %d", zero);

}
