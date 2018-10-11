# include <iostream>
using namespace std;

void somar()
{ // ABERTURA DA FUNÇÃO SOMAR... () 

	float num01, num02, resultado;
	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 + num02;
	cout << "O RESULTADO DA SOMA É = " <<resultado <<endl;
	
} // FECHAMENTO DA FUNÇÃO SOMAR... ()

void subtrair()
{//ABERTURA DA FUNÇÃO SUBTRAIR() .....

 float num01, num02, resultado;
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 - num02;
	cout << "O RESULTADO DA SUBTRAÇÃO É = "<<resultado <<endl;
	
} // FECHAMENTO DA FUNÇÃO SUBRTRAIR ()...

void multiplicar()
{// ABERTURA DA FUNÇÃO MULTIPLICAR ().....
 float num01, num02, resultado;
 
 	cout << "Informe o primeiro numero : ";
	cin >> num01;
	
	cout << "Informe o segundo numero: ";
	cin >> num02;
	
	resultado = num01 * num02;
	cout << "O RESULTADO DA MULTIPLICAÇÃO É = "<<resultado <<endl;

}// FECHAMENTO DA FUNÇÃO MULTIPLICAR ().....

void dividir ()
 {// ABERTURA DA DIVIDIR ().....
 int num01, num02, resultado;
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
 
  resultado =  num01 / num02;
  resto     =  num01 - (resultado * num02);

  cout << "O RESULTADO DA DIVIÃO = "<<resultado <<endl;
  cout << "O RESTO DA DIVISÃO = "<<resto <<endl;
  
 }// FECHAMENTO DO ELSE 
 
 }//FECHAMENTO DA FUNÇÃO DIVIDIR ()....
 
 int main () //DECLARACÃO DA FUNÇÃO PRINCIPAL... 
 
  { //ABERTURA DA FUNÇÃO PRINCIPAL....
  
    setlocale(LC_ALL, "PORTUGUES");
    
   int op;
   
   do { //ABERTURA DA ESTRUTURA DO DO-WHILE...   
   
   cout << "\n[1]Somar  \n[2]Subtrair  \n[3]Multiplicar  \n[4]Dividir  \n[5]SAIR";
   
   cout << endl;
   cout << endl;
   
   cin >> op;
   
   switch (op)
   {// ABERTURA DO SWITCH
   
   case 1 : somar();        break; 
   case 2 : subtrair();     break;
   case 3 : multiplicar();  break;
   case 4 : dividir();      break;
   
   } //FECHAMENTO DO WITCH

  } while (op != 5); //FECHAMENTO DA ESTRUTURA DO-WILHE...
   
    system ("pause");
 } //FECHAMENTO DA FUNÇÃO PRINCIPAL...
 

