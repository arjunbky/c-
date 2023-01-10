#include <iostream>
using namespace std;
int F[10];
int mfib(int x){
    if (x<=1)
    {
        F[x]=x;
        return F[x];
    }
    else 
    {
        if (F[x-2]==-1){
            F[x-2]=mfib(x-2);
        }
        if (F[x-1]==-1){
            F[x-1]=mfib(x-1);
        }
        return F[x-2]+F[x-1];
    
    }
    
}


int main(){   
    for (int i=0;i<10;i++){
        F[i]=-1;
    }
    int r=mfib(4);
   cout << r<< endl;
    return 0;
}
