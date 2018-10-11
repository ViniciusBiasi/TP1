#include <iostream>
#include <math.h>
using namespace std;

class ponto
{
    float x,y,z;
    public:
    ponto (float Px, float Py)
    {
        x=Px;
        y=Py;
        z=0;
    }    
    ponto (float Px, float Py, float Pz)
    {
        x=Px;
        y=Py;
        z=Pz;
    }
    float distancia (ponto Pponto){
		float aux;
		aux=sqrt(pow((x-x),2)+pow((y-y),2));
		return aux;
     }
     };
int main()
{
    float x,y;
    cout << "Informe os valores do Ponto A : "<<endl;
    cin >> x >> y;
    
    ponto pontoA(x,y);
    
    cout << "Informe os valores do Ponto B: "<<endl;
    cin >> x >> y;
    
    ponto pontoB(x,y);
    cout << pontoA.distancia(pontoB);
    
}
