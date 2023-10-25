#include<stdio.h>
#include<stdlib.h>
void printarray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionsort(int *A,int n){
    printf("running selection sort..\n");
    int indexofmin;
    int temp;
    for (int i = 0; i < n-1; i++)
    {
       indexofmin=i;
       for (int j = i+1; j < n; j++)
       {
         if(A[j]<A[indexofmin]){
          indexofmin =j;
    }       
       } 
        temp= A[i];
    A[i]=A[indexofmin];
    A[indexofmin]=temp;  
    } 
}
int main(){
    int A[]={56,34,11,76,45,90};
    int n=6;
    printarray(A,n);
    selectionsort(A,n);
    printarray(A,n);
}
