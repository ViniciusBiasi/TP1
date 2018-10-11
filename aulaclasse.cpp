#include <iostream>
#include <math.h>
using namespace std; 
class ponto {
	float x;
	float y;
	public: 
	ponto ()
	{
		cout << "VALOR DE X "<<endl;
		cin >> x;
		
		cout << "VALOR DE Y" <<endl;
		cin  >> y;
		}
		float distancia (ponto B)
		{
			float aux;
			 aux=sqrt(pow((x-x),2)+pow((y-y),2));
			return aux;
			}
		};
		
		int main () {
			
			ponto p1;
			ponto p2;
			float resposta;
			
			
			ponto distacia();
			resposta=p1.distancia(p2);
			cout << resposta;
			
			
			}
	
	
	
	
	
