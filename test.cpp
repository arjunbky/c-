#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int *p;
    p=new int[5];
p[0]=45,p[1]=1,p[2]=34,p[3]=76,p[4]=33;

for(int i=0;i<5;i++){
cout<<p[i]<<endl;
}
delete []p;
for(int i=0;i<5;i++){
cout<<p[i]<<endl;
cout<<p[i]+1<<endl;
cout<<p[i]+3<<endl;

}
 
 return 0;
}
