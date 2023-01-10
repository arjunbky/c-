#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
}arr;

void display(struct Array arr){
    int i;
    printf("elements are: \n");
    for(i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}

int main(){
   int n;
   struct Array arr={{2,3,4,5,6},20,5};

display(arr);
}