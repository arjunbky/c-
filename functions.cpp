#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int add(int a,int b){
int c =a+b;
return c;
}
int main(  ){
    int a=5,b=6;
    int x=add(a,b);
    cout<<x<<endl;
    cout<<"sum is "<<x<<endl;

}


