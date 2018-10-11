# include <iostream>
using namespace std;

void somar() //Função chamada somar... 
 // "VOID" usado como uma Função sem retorno
{ // ABERTURA DA FUNÇÃO SOMAR... () 

	float num01, num02, resultado;
	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 + num02;
	cout << "O RESULTADO DA SOMA É = " <<resultado <<endl;
	
} // FECHAMENTO DA FUNÇÃO SOMAR... ()

void subtrair()  //Função chamada subtrair...
// "VOID" usado como uma Função sem retorno
{//ABERTURA DA FUNÇÃO SUBTRAIR() .....

 float num01, num02, resultado;
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 - num02;
	cout << "O RESULTADO DA SUBTRAÇÃO É = "<<resultado <<endl;
	
} // FECHAMENTO DA FUNÇÃO SUBRTRAIR ()...

void multiplicar() //Função chamada multiplicar...
// "VOID" usado como uma Função sem retorno
{// ABERTURA DA FUNÇÃO MULTIPLICAR ().....
 float num01, num02, resultado;
 
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 * num02;
	cout << "O RESULTADO DA MULTIPLICAÇÃO É = "<<resultado <<endl;

}// FECHAMENTO DA FUNÇÃO MULTIPLICAR ().....

void dividir () //Função chamada dividir...
// "VOID" usado como uma Função sem retorno
 {// ABERTURA DA DIVIDIR ().....
 double num01, num02, resultado;
 int resto;
 
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
 if (num02 == 0) // IF PARA VERIFICAR SE O NUMERO É IGUAL Á " 0 "....
 { // ABERTURA DO IF 
 
 	cout << "\a NÃO EXISTE DIVISÃO POR ZERO "<<endl;
 	
 } //FECHAMENTO DO IF
 
 else {// ABERTURA DO ELSE 
 
  resultado =  num01 /  num02;
  resto     =  num01 - (resultado * num02);

  cout << "O RESULTADO DA DIVIÃO = "<<(float) resultado <<endl;
  cout << "O RESTO DA DIVISÃO = "<<resto <<endl;
  
 }// FECHAMENTO DO ELSE 
 
 }//FECHAMENTO DA FUNÇÃO DIVIDIR ()....
 
 int main () //DECLARACÃO DA FUNÇÃO PRINCIPAL... 
 
  { //ABERTURA DA FUNÇÃO PRINCIPAL....
  
  //"Chamamento de todas as funções..."
      
   int op;
   
   do { //ABERTURA DA ESTRUTURA DO DO-WHILE... {bloco de instruções}   //faça   --  condição seja sempre verdadeira
   
   cout << "\n[1]Somar +  \n[2]Subtrair - \n[3]Multiplicar * \n[4]Dividir /  \n[5]SAIR";
   
   cout << endl;
   cout << endl;
   
   cin >> op;
   
   switch (op) //condicional 
   {// ABERTURA DO SWITCH
   
   case 1 : somar();        break; //  informamos que se o valor declarado (numero) 
   case 2 : subtrair();     break; // neste caso for igual ao contido no switch, será executado.... 
   case 3 : multiplicar();  break; // BREAK é utilizado para especificar a última linha de código a ser executada dentro da condição. 
   case 4 : dividir();      break;
   
   } //FECHAMENTO DO WITCH

  } while (op != 5); //FECHAMENTO DA ESTRUTURA DO-WILHE...  (comparação) //enquanto
   
    return 0;
    
 } //FECHAMENTO DA FUNÇÃO PRINCIPAL...
 

