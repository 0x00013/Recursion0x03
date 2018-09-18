#include <iostream>
#include <string>
using namespace std;

int Menor(int arre[],int tam, int menor);

int main(){
    int arre[6]={4,3,23,5,9,7};
    int tam=6;
    int menor=0;
    int r=0;

    r=Menor(arre, tam-1, menor);
    cout<<"El numero menor es:"<<" "<<r<<endl;

    return 0; 
}

int Menor(int arre[],int tam, int menor){

    if(tam==-1){
        return menor;
    }
    
    if(arre[tam]<arre[tam-1]){
        menor=arre[tam];
    }
        
    return Menor( arre,  tam-1, menor);
}
