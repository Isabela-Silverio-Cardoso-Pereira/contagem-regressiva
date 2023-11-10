/******************************************************************************

Escreva um programa que solicite ao usuário inserir um número e, em seguida, 
use um loop do-while para contar regressivamente desse número até 1, exibindo cada número no console.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"escreca um numero";
    int num;
    cin >> num; 
    
    int i = num;
    
    do{
        i --;
        cout << i << endl;
        
    }while(i>=1);

    return 0;
}

