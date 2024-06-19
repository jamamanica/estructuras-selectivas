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
    if (a<b){
    	if (a<c){
    		if (b<c){
    			cout<<"El orden ascendente es: "<<a<<", "<<b<<", "<<c<<endl;
			}
			else{
				cout<<"El orden ascendente es: "<<a<<", "<<c<<", "<<b<<endl;
			}
		}
		else{
			cout<<"El orden ascendente es: "<<c<<", "<<a<<", "<<b<<endl;
		}
	}
	else{
		if (b<c){
			if (a<c){
				cout<<"El orden ascendente es: "<<b<<", "<<a<<", "<<c<<endl;
			}
			else{
				cout<<"El orden ascendente es: "<<b<<", "<<c<<", "<<a<<endl;
			}
		}
		else{
			cout<<"El orden ascendente es: "<<c<<", "<<b<<", "<<a<<endl;
		}
	}
    return 0;
}