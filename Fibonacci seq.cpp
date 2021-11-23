#include <unistd.h>
#include <iostream>
#include <pthread.h>
using std::cout;
using std::cin;

void*doit(void*);
int i,size,seq[0];
int main(){
    cout<<"inter seq size:";
    cin>>size;
    seq[size];
    pthread_t A;
    pthread_create(&A,NULL,doit,(void*)(intptr_t)size);
    pthread_join(A,NULL);
    
    COUT<<"\n";
    for(i=0;i<size;i++)
    cout<<se[i]<<"";
}
void *doit(void* vptr){
    for(i=0;i<(intptr_t)vptr ;i++){
        if(i==0)
        seq[i]=0;
        else if (i==1)
        seq[i]=1;
        else
        seq[i]=(seq[i-1]+seq[i-2]);
    }
    return (NULL);
}


