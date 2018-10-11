#include<iostream>
using namespace std;
class MatrizdeInteiros{
	private: 
	int lin;
	int col;
	int **mat;
	MatrizdeInteiros (int Plin, Pcol)
	{
	matriz multiplica (int Pescalar)
	{
		MatrizdeInteiros matrizAux(lin,col) ;
		int i, k;
		for (i=0;i<lin;i++)
		  for (k=0;k<col;k++)
			  matrizAux.mat[i][k]= Pescalar*mat[i][k];
			}	};
			
			int main ()
			{
				MatrizdeInteiros matriz1 (3,3) , matriz2 (3,3) , matriz3 (3,3);
			}
