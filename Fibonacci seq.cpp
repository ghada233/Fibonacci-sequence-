#include <unistd.h>
#include <iostream>
#include <pthread.h>
using namespace std;
void*doit(void*);
int i,size,fib[0];
int main(){
    cout<<"enter the fibbonacci sequence number:"<<endl;
    cin>>size;
    fib[size];
    pthread_t A;
    pthread_create(&A,NULL,doit,(void*)(intptr_t)size);
    pthread_join(A,NULL);
    for(i=0;i<size;i++)
    cout<<fib[i]<<"";
}
void *doit(void* vptr){
    for(i=0;i<(intptr_t)vptr ;i++){
        if(i==0)
        fib[i]=0;
        else if (i==1)
        fib[i]=1;
        else
        fib[i]=(fib[i-1]+fib[i-2]);
    }
    return (NULL);
}


