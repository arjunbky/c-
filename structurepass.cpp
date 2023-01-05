#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
 struct Rectangle
    {
        int len;
        int bre;
    }r1,r2;

int area(struct Rectangle r){
return r.len*r.bre;
}
void changeLength(struct Rectangle *p,int l){
    p->len=l;
}
int main(){
   
    r1={1,2};
   
     changeLength(&r1,20);
      int a=area(r1);
    cout<<a<<endl;
}
