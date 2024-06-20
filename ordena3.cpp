//Nombre: Mamani Catacora, Johan Anibal
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"Ingrese el tercer numero: ";
    cin>>c;
    int menor;
	if (a<b&&a<c){
		menor=a;
	} else{
		if(b<c){
			menor=b;
		} else{
			menor=c;
		}
	}
	int mayor;
	if(a>b&&a>c){
		mayor=a;
	} else{
		if(b>c){
			mayor=b;
		} else{
			mayor=c;
		}
	}
	int medio;
	medio=(a+b+c)-(mayor-menor);
	cout<<"El orden ascendetne es: "<<menor<<", "<<medio<<", "<<mayor<<endl;
    return 0;
}