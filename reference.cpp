#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main(){
    int a=10;
    int &r=a;
int b=30;
    r=b;
    cout<<r<<endl;

}
