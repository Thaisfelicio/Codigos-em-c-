#include<iostream>

using namespace std;

class Funcionario{
	protected:
		string nome;
		string cpf;
		float salario;
		
	public:
		/******************** SETTERS **********************/
		void setNome(string nome){
			this->nome = nome;
		}
		void setSalario(float salario){
			this->salario = salario;
		}
		/******************* GETTERS ***********************/
		string getNome(){
			return this->nome;
		}
		float getSalario(){
			return this->salario;
		}
		/******************* METODOS ***********************/
		float calculaBonificacao(){
			return this->salario*0.5;
		}
};

/*+++++++++++++++++++++SUBCLASSE DE FUNCIONARIO+++++++++++++++++++++*/
//Esta subclasse herda todos os atributos e métodos da classe funcionario
class Engenheiro: public Funcionario{
	
};

/*+++++++++++++++++++++SUBCLASSE DE FUNCIONARIO+++++++++++++++++++++*/
//Esta subclasse herda todos os atributos e métodos da classe funcionario
class Gerente: public Funcionario{
	private:
		string login;
		
	public:
		void setLogin(string login){
			this->login = login;
		}
		bool fazLogin(string login){
			if(this->login == login )
				return true;
			else
				return false;
		}
};

int main(){
	Funcionario func;
	Engenheiro eng;
	Gerente ger;
	
	func.setNome("Thais");
	func.setSalario(5500);
	cout<<func.getNome()<<endl;
	cout<<func.calculaBonificacao()<<endl;
	
	eng.setNome("Fulano");
	eng.setSalario(8500);
	cout<<eng.getNome()<<endl;
	cout<<eng.calculaBonificacao()<<endl;
	
	ger.setNome("Guy");
	ger.setLogin("senha123");
	ger.setSalario(2500);
	cout<<ger.getNome()<<endl;
	cout<<ger.calculaBonificacao()<<endl;
	cout<<ger.fazLogin("senha123");
	
	
	return 0;
}
