# include <iostream>
using namespace std;

void somar() //Fun��o chamada somar... 
 // "VOID" usado como uma Fun��o sem retorno
{ // ABERTURA DA FUN��O SOMAR... () 

	float num01, num02, resultado;
	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 + num02;
	cout << "O RESULTADO DA SOMA � = " <<resultado <<endl;
	
} // FECHAMENTO DA FUN��O SOMAR... ()

void subtrair()  //Fun��o chamada subtrair...
// "VOID" usado como uma Fun��o sem retorno
{//ABERTURA DA FUN��O SUBTRAIR() .....

 float num01, num02, resultado;
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 - num02;
	cout << "O RESULTADO DA SUBTRA��O � = "<<resultado <<endl;
	
} // FECHAMENTO DA FUN��O SUBRTRAIR ()...

void multiplicar() //Fun��o chamada multiplicar...
// "VOID" usado como uma Fun��o sem retorno
{// ABERTURA DA FUN��O MULTIPLICAR ().....
 float num01, num02, resultado;
 
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 * num02;
	cout << "O RESULTADO DA MULTIPLICA��O � = "<<resultado <<endl;

}// FECHAMENTO DA FUN��O MULTIPLICAR ().....

void dividir () //Fun��o chamada dividir...
// "VOID" usado como uma Fun��o sem retorno
 {// ABERTURA DA DIVIDIR ().....
 double num01, num02, resultado;
 int resto;
 
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
 if (num02 == 0) // IF PARA VERIFICAR SE O NUMERO � IGUAL � " 0 "....
 { // ABERTURA DO IF 
 
 	cout << "\a N�O EXISTE DIVIS�O POR ZERO "<<endl;
 	
 } //FECHAMENTO DO IF
 
 else {// ABERTURA DO ELSE 
 
  resultado =  num01 /  num02;
  resto     =  num01 - (resultado * num02);

  cout << "O RESULTADO DA DIVI�O = "<<(float) resultado <<endl;
  cout << "O RESTO DA DIVIS�O = "<<resto <<endl;
  
 }// FECHAMENTO DO ELSE 
 
 }//FECHAMENTO DA FUN��O DIVIDIR ()....
 
 int main () //DECLARAC�O DA FUN��O PRINCIPAL... 
 
  { //ABERTURA DA FUN��O PRINCIPAL....
  
  //"Chamamento de todas as fun��es..."
      
   int op;
   
   do { //ABERTURA DA ESTRUTURA DO DO-WHILE... {bloco de instru��es}   //fa�a   --  condi��o seja sempre verdadeira
   
   cout << "\n[1]Somar +  \n[2]Subtrair - \n[3]Multiplicar * \n[4]Dividir /  \n[5]SAIR";
   
   cout << endl;
   cout << endl;
   
   cin >> op;
   
   switch (op) //condicional 
   {// ABERTURA DO SWITCH
   
   case 1 : somar();        break; //  informamos que se o valor declarado (numero) 
   case 2 : subtrair();     break; // neste caso for igual ao contido no switch, ser� executado.... 
   case 3 : multiplicar();  break; // BREAK � utilizado para especificar a �ltima linha de c�digo a ser executada dentro da condi��o. 
   case 4 : dividir();      break;
   
   } //FECHAMENTO DO WITCH

  } while (op != 5); //FECHAMENTO DA ESTRUTURA DO-WILHE...  (compara��o) //enquanto
   
    return 0;
    
 } //FECHAMENTO DA FUN��O PRINCIPAL...
 

