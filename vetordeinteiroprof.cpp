/* Defina uma classe chamada "VetorDeInteiros" que tenha como ATRIBUTOS um vetor de inteiros
e a dimensao do vetor. Elaborar um construtor que receba como parametro a dimensao do vetor,
crie o vetor e inicialize com zeros. Definir para essa classe:

A) um metodo para armazenar um valor numa determinada posicao do vetor; (SET)
B) um metodo para determinar o maior elemento do vetor;
C) um metodo para retornar o valor armazenado em uma determinada posicao do vetor;(GET)
D) criar um metodo para definir o tamanho do vetor;
e) dois metodos com o mesmo nome; matriz multiplica - multiplicar um escalar por uma matriz...
*/
#include<iostream>
using namespace std;

 /*int main ()
//class VetorDeInteiro()
{
	int x=5;
	int *xx; // atributo que recebe um valor inteiro -> ponteiro;
	
	cout<<x<<endl;
	xx=&x;
	cout<<xx<<":....ponteiro -> ....:"<<*xx<<endl;

	
	}
                                
*/
class MatrizdeInteiros{
	private: 
	int lin;
	int col;
	int **mat;
	
	public: 
	            
	     MatrizdeInteiros(int Plin, int Pcol)
	     { 
		int i,k;
		
		for(i=0;i<Plin;i++)
		mat[i]=new int [Pcol];
		for(k=0;k<Pcol;k++)	 
		mat[i][k]=0;
	    }	
	};

class VetorDeInteiros
{
    private:
        int tamVet;
        int *vetor;
        
    public:
        
        VetorDeInteiros(int PtamVet)
        {
            int i;
            vetor = new int [PtamVet];
            
            for(i = 0; i < PtamVet; i ++)
            
            vetor[i] = 0;
        }
        void setTamVet(int PtamVet)
        {
            tamVet=PtamVet;
        }
        /*Outra forma: usando ponteiro THIS;
         void setTamVet(int tamVet)
         {
         this->tamVet=tamVet;
         }
        */
        void setVetor(int Pvalor, int Pposicao)
        {
            vetor[Pposicao]=Pvalor;
        }
};


int main()
{
    setlocale(LC_ALL,"");
    int qtdElemVetor, elemVetor,i;
    
    cout<<"Informe a quantidade de elementos do vetor: "<<endl;
    cin>>qtdElemVetor;
    
    VetorDeInteiros vetor1(qtdElemVetor);
    vetor1.setTamVet(qtdElemVetor);
    cout<<"Informe os elementos do vetor: " <<endl;
    
    for(i=0; i<qtdElemVetor; i++)
    {
        cout<<"Informe o "<<i+1<< " º elemento:" <<endl;
        cin>>elemVetor;
        vetor1.setVetor(elemVetor, i);
     
    }
    
    
}

 
 
 
