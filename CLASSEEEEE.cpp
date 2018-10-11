#include <iostream>
#include <math.h>
using namespace std; 
class parabola {
	private: 
	float A,B,C,D;
	double delta, i; 
	float Xv,  Yv;
	double X,Y;
	float x1, x2;
	public:
		parabola()
		{
			cout << "Informe os valores de A, B, C: "<<endl;
			cin >> A;
			cin >> B;
			cin >> C;
		}
		
		void equacaodaparabola ()
		{
			cout << "1.1) OBTER A EQUAÇÃO DE UMA PARÁBOLA? "<<endl;
			if (C!=0){
		 	cout << "A função do 2º grau y = "<<A<<"x² + "<<B<<"x + "<<C<<endl;}
		 	else 
		 	cout << "NÃO EXISTE SOLUÇÃO PARA A FUNÇÃO DO 2* GRAU... "<<endl;
		}
	     void concavidade ()
	     {
	     	cout << "1.2) DETERMINAR O TIPO DE CONCAVIDADE DA PARÁBOLA? "<<endl;
	     	if(A<0)
	     	cout << "CONCAVIDADE PARA BAIXO...." <<endl;
	     	else 
	     	cout << "CONCAVIDADE PARA CIMA....." <<endl;
		 }
		 void coordenadas ()
		 {
		 	cout << "1.3) DETERMINAR AS COORDENADAS DO VÉRTICE DA PARÁBOLA? "<<endl;
		 	delta=(int)((B*B)-4*A*C);
             i=((delta*delta)/delta);
             Xv = -B/(2*A); 
             D = (B * B - 4 * A * C); 
             Yv = -(D)/(4*A);
             cout << "V("<<Xv<<","<<Yv<<")"<<endl;
               x1=((-B)+sqrt(delta))/(2*A);
	           x2=((-B)-sqrt(delta))/(2*A);
                if (i<0) {
				
             cout << "VALOR DE DELTA SEM SOLUÇÃO...." <<endl;}
              else {
               cout << "VALOR DO DELTA =" <<delta <<endl; }
                if (delta == 0)
             cout << "Tem uma raiz: x1 = "<<x1<<" e x2 = "<<x2<<" "<<endl; 
               if (delta > 0) 
             cout <<" Tem duas raizes: x1 = "<<x1<<" e x2 = "<<x2<<" "<<endl; 
         }

		 void coordenadasnaParabola ()
		 {
		 	cout << "1.4) DETERMINAR AS COORDENADAS NO QUAL A PARABOLA CRUZA O EIXO X? " <<endl;
		 	if(delta>0)
		 	cout<<"A equação possui duas raízes reais e distintas. Dessa forma, a parábola cruza o eixo das abscissas em dois pontos. " <<endl;
		 	if(delta<0) 
		 	cout << "A equação não possui raízes reais. Dessa forma, a parábola não possui ponto de intersecção no eixo das abscissas. " <<endl;
		 	if (delta==0){
		 	cout << "A equação possui duas raízes reais e iguais. Assim, a parábola intersecta o eixo das abscissas em apenas um único ponto." <<endl;
		 	X=0;
		 	Y=A*(X*X)+B*(X)+C;
		 	cout << "Tem como intersecção no eixo x , o ponto de valor igual a =" <<Y<<endl;
			 }		    
		 }		 		 
	};
	
	int main ()
	{
		parabola parabola1;
		
		parabola1 . equacaodaparabola();
		parabola1 . concavidade();
		parabola1 . coordenadas();
		parabola1 . coordenadasnaParabola();
		
	}
