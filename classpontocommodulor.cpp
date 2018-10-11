#include<iostream>
#include<math.h>
using namespace std;

class ponto
{
	private:
	float x,y,z;
	float x1, x2,y1, y2, z1, z2;
	
	public:
	void setX1(int N)
	{
		x1 = N;
	}
	void setX2(int N)
	{
		x2 = N;
	}
	void setY1(int N)
	
		{y1 = N;}
	
	void setY2(int N)
	{
		y2 = N;
	}
	void setZ1(int N)
	{
		z1 = N;
	}
	void setZ2(int N)
	{
		z2 = N;
	}
	int getX1()
	{
		return x1;
	}
	int getX2()
	{
		return x2;
	}
	int getY1()
	{
		return y1;
	}
	int getY2()
	{
		return y2;
	}
		int getZ1()
	{
		return z1;
	}
		int getZ2()
	{
		return z2;
	}
	
	float Ponto(float x1, float x2, float y1, float y2)
	{
		cout << "DIGITE OS VALORES DO PONTO A: "<<endl;
		cin >>  x1;
		cin >> y1;
		cout << "DIGITE OS VALORES DO PONTO B: "<<endl;
		cin >> x2;
		cin >> y2;
			
		float d;
		
		d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		return d;
	}
	
	float Ponto(float x1, float x2, float y1, float y2 , float z1, float z2)
	{
		cout << "DIGITE OS VALORES DO PONTO A: "<<endl;
		cin >> x1;
		cin >> y1;
		cin >> z1;
		cout << "DIGITE OS VALORES DO PONTO B: "<<endl;
		cin >> x2;
		cin >> y2;
		cin >> z2;
		
		float d;
		
		d = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
		return d;
	}
};

int main()
{
	ponto X, Y;
	
	X.setX1(1);
	X.setX2(1);
	
	X.setY1(2);
	X.setY2(2);
	
	cout<<"A DISTANCIA BIDIMENSIONAL ENTRE OS DOIS PONTOS É : "<<X.Ponto(X.getX1(),X.getX2(),X.getY1(),X.getY2())<<endl;
	
	Y.setX1(1);
	Y.setX2(1);
	
	Y.setY1(2);
	Y.setY2(2);
	
	Y.setZ1(3);
	Y.setZ2(3);
	
	cout<<"A DISTANCIA NO ESPACO TRIDIMENSIONAL É :"<<Y.Ponto(Y.getX1(),Y.getX2(),Y.getY1(),Y.getY2(),Y.getZ1(),Y.getZ2())<<endl;
	
	return 0;
}
	


