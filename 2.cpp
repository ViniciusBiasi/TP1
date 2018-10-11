#include <iostream>
using namespace std;
int main ()
{
	int i,j;
	int matriz[30][30];
	int maior=0;
	
	for (i=0;i<30;i++){
		
		for (j=0;j<30;j++){
			
			cin >> matriz[i][j];
		}
	}
	        	for (i=0;i<30;i++){
		
		                  for (j=0;j<30;j++){
	                            
	                            if (j==30-1-i  && matriz[i][j] > maior ) 
	                            
	                            
	                             {
	                             	maior = matriz[i][j];
								 }
}}



cout << "O VALOR DO MAIOR TERMO É: "<<maior<<endl;
}
