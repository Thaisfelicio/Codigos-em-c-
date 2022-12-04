/*
Fa�a um programa que armazene na mem�ria dados de champions de um jogo estilo LOL.
Fa�a orientado a objetos.
Defina atributos e m�todos para a classe.
Crie objetos e d� valores a esses objetos.
Apresente esses dados na tela.
Cada objeto tem
*nome 
* classe
Cada objeto tem as seguintes a��es
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
	int getHp(){//com este m�todo agora � poss�vel manipular o hp no m�todo ataca
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
	//m�todo do tipo champion
	Champion ataca(Champion campeao){
		
		/*campeao -> hp -= this -> dano;*/ //nao d� pra fazer isso poque hp esta privado
		
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
