/*AED-TP2-Par - un programa que verifique si el usuario ha ingresaro un num par o impar.
Andres Bettinelli - K1091
Ultima modificacion 17/04/2015
*/

#include <iostream>
using namespace std;

int main () {
int num;
cout<<"Ingrese un numero para ver si es par o impar:"<<endl;
cin>>num;

if (num%2 == 0){
	cout<<"El numero es par.";
}
else{
	cout<<"El numero es impar.";
}

}
