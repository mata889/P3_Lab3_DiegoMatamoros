#include <iostream>
#include <new>
using namespace std;

void polinomios(int);

int main(){
int menu;

do{
	cout<<"----menu----"<<endl
	<<"1.Ejercicio#1"<<endl
	<<"2.Ejercicio#2"<<endl
	<<"3.Ejercicio#3"<<endl
	<<"4.SALIR"<<endl
	<<"introduzca su opcion";
	cin>>menu;
	switch(menu){
	
	case 1:{}break; 

	case 2:{
		int gradoalto;
		
		cout<<"ingrese el grado mas alto del polinomio";
		cin>> gradoalto;
		polinomios(gradoalto);
				
	 }break;

	case 3:{}break;
	}

}while(menu!=4);

return 0;

}

void polinomios(int gradoalto){	
	int polinomios[gradoalto];
	for(int i=0;i<gradoalto;i++){
		cout<<"Ingrese el polinomio x^"<<i<<":"<<endl;
		cin>>polinomios[i];
             }
return polinomios;
	
}
