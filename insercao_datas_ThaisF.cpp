/******************************************************************************

7. Uma data pode ser descrita por três números inteiros, para armazenar o dia, o mês e o ano:
a. Crie uma estrutura chamada Data para armazenar datas com esses campos.
b. Faça um programa que leia um vetor de 5 datas do teclado e imprima o resultado.

*******************************************************************************/
#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
    
    int lerDia(){
        int day;
        this -> dia;
        cout<<"Digite o dia: ";
        cin>> this -> dia;
        if( this -> dia > 31)
        {
            cout<<"data incorreta, insira uma data valida!"<<endl;
            lerDia();
        }
        return this -> dia;
    }
    
    int lerMes(){
        cout<<"Digite o mes: ";
        cin>> this ->mes;
        if(this -> mes > 12)
        {
            cout<<"data incorreta, insira uma data valida!"<<endl;
            lerMes();
        }
        return this -> mes;
    }
    
    int lerAno(){
        cout<<"Digite o ano: ";
        cin>> this -> ano;
        return this -> ano;
    }
    
    void imprimirData(){
        cout<< this -> dia <<"/"<< this -> mes <<"/"<< this -> ano <<endl;
    }
};

int main()
{
    Data dates[5];
    int i;

    for(i = 1; i <= 5; i++)
    {
        cout<<"DATA "<< i <<endl;
        dates[i].lerDia();
        dates[i].lerMes();
        dates[i].lerAno();
        dates[i].imprimirData();
        
    }
}

