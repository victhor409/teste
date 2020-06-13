#include<iostream>
#include<cstdlib>
    
using namespace std;
    
float nota( float n1, float n2, float n3, int escolha){
    float m;
    
    if(escolha == 1){
        m = n1+n2+n3/3;
    }
    if (escolha == 2){
        m = n1*5+n2*3+n3*2/3;
    }
    
    if (escolha == 3){
        m = 1/n1+1/n2+1/n3 /3;
    }
    
    return m;
    
}

    
    
int main(){
    cout<<"\t        ++++++ MEDIA ++++++\n";
    cout<<"\t ======================================== \n";
    cout<<"\t |1=Aritemtica  2=Ponderada  3=Harmonica| \n";
    cout<<"\t ======================================== \n";
    
    float n1,n2,n3;
    int escolha;
    
    
    cout<<"Nota do aluno:";
    cout<<"\n\n";
    
    cout<<"Nota 1: ";
    cin>>n1;
    
    cout<<"Nota 2: ";
    cin>>n2;
    
    cout<<"Nota 3: ";
    cin>>n3;
    
    cout<<"Ecolha uma media: ";
    cin>>escolha;
    
    cout<<"Media: "<<nota(n1, n2, n3, escolha);
    cout<<"\n\n";
    system("pause");
    
}