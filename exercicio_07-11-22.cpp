/*
Faça um programa que armazene na memória dados de champions de um jogo estilo LOL.
Faça orientado a objetos.
Defina atributos e métodos para a classe.
Crie objetos e dê valores a esses objetos.
Apresente esses dados na tela.
Cada objeto tem
*nome 
* classe
Cada objeto tem as seguintes ações
correr
Atacar
*/
#include<iostream>

using namespace std;

class Champion{
	private:
		
	string nome;
	string classe;
	int hp;
	int dano;
	
	public:
		
//	void correr(string esquerda, string direita, string cima, string baixo)
//	{
//		string direcao;
//		cout<<"Clique cima, baixo, esquerda ou direita para andar com seu personagem"<<endl;
//		cin>> direcao;
//		
//		switch(direcao){
//			case esquerda:
//				cout<<"moveu-se para a esquerda"<<endl;
//				break;
//				
//			case direita:
//				cout<<"moveu-se para a direita"<<endl;
//				break;
//				
//			case cima:
//				cout<<"moveu-se para a cima"<<endl;
//				break;
//				
//			case baixo:
//				cout<<"moveu-se para a baixo"<<endl;
//				break;
//				
//			default;
//		}
//	}
//	
	// --------------------------------- GETTERS ----------------------------------------
	int getHp(){//com este método agora é possível manipular o hp no método ataca
		return this->hp;
	}
	string getNome(){
		return this->nome;
	}
	int getDano(){
		return this->dano;
	}

	//--------------------------------- SETTERS -----------------------------------------
	void setNome(string nome)
	{
		this -> nome = nome;
	}
	
	void setHp(int hp){
		this->hp = hp;
	}
	void setDano(int dano){
		this->dano = dano;
	}
/*********************************************************************************************/
	//método do tipo champion
	Champion ataca(Champion campeao){
		
		/*campeao -> hp -= this -> dano;*/ //nao dá pra fazer isso poque hp esta privado
		
		float hpInimigo = campeao.getHp();
		campeao.setHp(hpInimigo - this->dano);
		return campeao;
	}
};
int main(){
	Champion campeaox, campeaoy;
	
	campeaox.setNome("Garen");
	campeaox.setHp(800);
	campeaox.setDano(20);
	
	campeaoy.setNome("Katarina");
	campeaoy.setHp(600);
	campeaoy.setDano(30);
	
	campeaox = campeaoy.ataca(campeaox);
	cout<<campeaox.getNome()<<"\n"<<campeaox.getHp()<<endl;
}
