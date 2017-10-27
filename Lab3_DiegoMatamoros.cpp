#include <iostream>
#include <new>
#include <cstdlib>
#include <vector>

using namespace std;

int [] polinomios(int,int);

int*** crearMatriz(int size);
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

int[] polinomios(int gradoalto,int a){	
	int  polinomios[gradoalto];
	
	for(int i=gradoalto;i>0;i--){
		int algo;
		cout<<"Ingrese el polinomio x^"<<i<<":"<<endl;
		cin>>algo;
		polinomios[i]=algo;
             }
	//probando los polinomios ingresado
	for(int j=gradoalto;j>0;j--){
	//	cout<<polinomios[j]<<"--"<<endl;

	}
return polinomios;
}

int*** crearMatriz(int size){
	int***matriz = new int**[size];
	for(int i=0;i<size;i++){
		matriz[i]= new int*[3];
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=new int[size];
		}
	}
return matriz;
}

void eliminarMatriz(int*** matriz,int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<3;j++){
			delete[] matriz[i][j];
		}
	}
	for(int i=0;i<size;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	return;
}

