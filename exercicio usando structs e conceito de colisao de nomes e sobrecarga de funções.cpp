//meu exemplo que fiz em sala de aula 05/09/2022 feito em 11/09/2022
/*NOTA PARA A PROVA (só para não esquecer)
    Colisão de nomes
        Para usar funções ou variaveis iguais sem dar erro, deve separa-las em escopos 
        diferentes usando namespace em c++, e package em java, como no exemplo:
        
        namespace X1 //escopo definido
        {
            typedef int n;
            int x;
            void f() { }
        }
        
        namespace X2
        {
            typedef float n;
            float x;
            void f(){ }//função de nome e parametro igual, mas não se conflitam
                        //porque estão em escopos diferentes
        }
        
        int main()
        {
            X1::f();//quando usar algo que esta em um escopo usar ::
            // é possivel usar esta função sem erro, porque eu especifiquei qual escopo usar
            std::string s = "texto";
        }
        
    Sobrecarga de funções (funções com nomes iguais, mas parametros diferentes)
        Se uma função tiver parametro float e outra int, o compilador irá
        diferenciar pelo parametro, se for tudo igual não irá compilar, pois o 
        compilador não irá saber qual usar.
        Não se diferencia as funções pelo return.
        Se uma função estiver com parametro e a outra não tambem diferencia.
        
    

*/
#include <iostream>
#include <string>

using namespace std;

struct gato
{
  string nome;
  int idade;
  string raca;
  string cor;
  float peso;
  
  void mostrarDados(string oNome, int aIdade, string aRaca, string aCor, float oPeso)
  {
      this -> nome = oNome;//só usa o this no escopo da classe(dentro do bloco da struct)
      this -> idade = aIdade;// para interpretar mais facilmente que é uma caracteristica(atributo) da 
      this -> raca = aRaca;// classe, mostra que é um atributo da classe e tambem serve para o compilador
      this -> cor = aCor;//interpretar que é um atributo da classe, fazendo ele compilar mais rapido.
      this -> peso = oPeso;
      cout<<"OS DADOS DO GATO\n\n Nome: "<< oNome <<"\nIdade: "<< aIdade <<"anos\nCor: "<<aRaca<<"\nRaca: "<<aCor<<"\nPeso: "<<oPeso<<"Kg"<<endl;
  }
};
int main()
{
    string Nome, Raca, Cor;
    int Idade;
    float Peso;
    
    gato g1;//g1 é uma variavel do tipo gato, ou seja uma variavel do tipo struct e herda tudo q tem nela
    cout<<"qual eh o nome do seu gato(a): "<<endl;
    cin>>Nome;
    cout<<"qual a idade dele(a): "<<endl;
    cin>>Idade;
    cout<<"qual a raca dele(a): "<<endl;
    cin>>Raca;
    cout<<"qual a cor dele(a): "<<endl;
    cin>>Cor;
    cout<<"qual o peso dele(a): "<<endl;
    cin>>Peso;
    
    g1.mostrarDados(Nome, Idade, Raca, Cor, Peso);//chamei uma funcao da classe gato e atribui à variavel g1
}
