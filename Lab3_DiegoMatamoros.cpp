#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

void polinomios(int,int);

int** crearMatriz(int size);
void eliminarMatriz(int***,int);

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
		int a;
		cout<<"ingrese el grado mas alto del polinomio:";
		cin>> gradoalto;
		gradoalto++;
		cout<<"ingrese a:";
		cin>> a;
		cout<<endl;
		polinomios(gradoalto,a);
				
	 }break;

	case 3:{}break;
	}

}while(menu!=4);

return 0;

}

void polinomios(int gradoalto,int a){	
	int  polinomios[gradoalto];
	
	for(int i=gradoalto;i>0;i--){
		int algo;
		cout<<"Ingrese el polinomio x^"<<i<<":"<<endl;
		cin>>algo;
		polinomios[i]=algo;
             }
	for(int j=gradoalto;j>0;j--){
		cout<<polinomios[j]<<"--"<<endl;
	}
}

