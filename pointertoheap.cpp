#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct rec{
int x;
int y;
}*p;

int main(){
    p=new rec;

    p->x=20;
    p->y=50;

  cout << p->x<< endl;
   
}