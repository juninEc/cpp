#include <iostream>
#include <iomanip>
using namespace std; 

float calcular(float, float); 
void classificacao(float); 

int main(){

    float peso, altura, imc; 
    
    cout<<"Informe seu peso (Ex.: 76.9)? ";
    cin>>peso; 

    cout<<"Informe sua altura (Ex.: 1.70)? ";
    cin>>altura; 

    imc = calcular(peso, altura); 

    classificacao(imc); 

    return 0; 
}

float calcular(float peso, float altura){
    float imc = 0; 

    imc = peso / (altura*altura); 

    return imc;  
}

void classificacao(float imc){
  cout << fixed << setprecision(1);  
  if(imc < 16){
       cout<<"> Seu IMC eh "<<imc<<"\n> Magreza Grau III\n> Risco: "<<endl; 
    }
    else if(imc > 16 && imc < 16.9){
       cout<<"> Seu IMC eh "<<imc<<"\n> MAagreza Grau II\n> Risco: "<<endl; 
    }
    else if(imc > 17 && imc < 18.4){
       cout<<"> Seu IMC eh "<<imc<<"\n> Magreza Grau I\n> Risco: "<<endl; 
    }
    else if(imc > 18.5 && imc < 24.9){
       cout<<"> Seu IMC eh "<<imc<<"\n> Eutrofia\n> Risco: "<<endl; 
    }
    else if(imc > 25 && imc < 29.9){
       cout<<"> Seu IMC eh "<<imc<<"\n> Sobrepeso\n> Risco: Aumentado"<<endl; 
    }
    else if(imc > 30 && imc < 34.9){
       cout<<"> Seu IMC eh "<<imc<<"\n> Obesidade Grau I\n> Risco: Moderado"<<endl; 
    }
    else if(imc > 35 && imc < 40){
       cout<<"> Seu IMC eh "<<imc<<"\n> Obesidade Grau II\n> Risco: Grave"<<endl; 
    }
    else{
        cout<<"> Seu IMC eh "<<imc<<"\n> Obesidade Grau III\n> Risco: Muito Grave"<<endl; 
    }
}