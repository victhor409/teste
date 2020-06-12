#include<iostream>
#include<cstdlib>


using namespace std;


//declarando as funcoes

/*
prototipo da funcao 
que vai ser declarada depois da main()
*/
float soma(float n);
float dobra(float n);



int main(){
    float num=20;
    cout<<"\nApos chamar a funcao soma: "<<soma(num);
    cout<<"\nApos chamar a funcao dobra: "<<dobra(num);
    cout<<"\n\n";
    system("pause");
}

//funcoes prototipadas antes da main e declaradas depois da main()
float dobra(float n ){
    return n*2;
}


float soma(float n){
    return dobra(n)+5;
}
