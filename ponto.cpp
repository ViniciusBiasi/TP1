#include <iostream>
#include <math.h>
using namespace std; 
class ponto {         //distancia entre dois pontos ponto no plano, criar uma classe 
	private: 
	float xa, xb, ya, yb,za,zb,d;
	public: 
	ponto() 
	{
		cout << "DIGITE OS VALORES DO PONTO A: "<<endl;
		cin  >> xa;
		cin  >> xb;
		cin  >> za;
		
		cout << "DIGITE OS VALORES NO PONTO B: "<<endl;
		cin >> ya;
		cin >> yb;
		cin >> zb;
		
		}
		
		void pontoanalise () { 
			
			d=sqrt(pow((ya-xa),2)+pow((yb-xb),2));
			cout << "PONTO A ("<<xa<< "," <<xb<< ") PONTO B: (" <<ya<< "," <<yb<< ")"<<endl;
			cout << "O VALOR DA DISTÂNCIA BIDIMENSIONAL ENTRE OS DOIS PONTOS É?" <<d<<endl;
	
			}
			void espacotridimensional (){
				d=sqrt(pow((ya-xa),2)+pow((yb-xb),2)+pow((zb-za),2));
				cout << "PONTO A ("<<xa<< "," <<xb<< "," <<za<< ") PONTO B: (" <<ya<< "," <<yb<< "," <<zb<< ")"<<endl;
				cout << "O VALOR DA DISTÂNCIA NO ESPAÇO TRIDIMENSIONAL É?" <<d<<endl;
			}
			 
			};
		int main () 
		{
			
			ponto verifica;
			
			verifica . pontoanalise();
			verifica . espacotridimensional();
			
		}
		
