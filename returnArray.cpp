#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int * arr(int n){
    int *p;
    p=new int[n];
 for (int i = 0; i < n; i++)
 {
    p[i]=i*1;
 }
 return p;
}


int main(){
    int size;
    cout<<"ENTER THE SIZE = "<<endl;
    cin>> size;
int *A;
A=arr(size);
for (int i = 0; i < size; i++)
{
    cout << A[i]<< endl;
}



}
