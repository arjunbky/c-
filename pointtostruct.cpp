#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct rec{
    int x;
    int y;
}r;

int main(){
    
    r={1,2};
  struct rec *p=&r;

  p->x=20;
  p->y=30;
  cout<<r.x<<endl;
}