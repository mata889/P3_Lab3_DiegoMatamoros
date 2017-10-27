#include <iostream>
#include <new>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

int* polinomios(int,int);

int*** crearMatriz(int size);
void eliminarMatriz(int***,int);
void imprimirMatriz(int***,int);


int main(){
int menu;
int*** Matrix;

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
		//gradoalto++;
		cout<<"ingrese a:";
		cin>> a;
		cout<<endl;
		polinomios(gradoalto,a);
		Matrix=crearMatriz(gradoalto);
		imprimirMatriz(Matrix,gradoalto);	
						
	 }break;

	case 3:{
		vector<string> fecha;
		cout<<"introduzca la fecha deseada(20170201 )"<<endl;
		cin>>fecha;		
		
	}break;
	}

}while(menu!=4);

return 0;

}

int* polinomios(int gradoalto,int a){	
	int* polinomio;
	
	for(int i=gradoalto;i>=0;i--){
		int algo;
		cout<<"Ingrese el polinomio x^"<<i<<":"<<endl;
		cin>>algo;
		polinomio[i]=algo;
             }
	//probando los polinomios ingresado
	for(int j=gradoalto;j>0;j--)
	//	cout<<polinomio[j]<<"-";

	
return polinomio;
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

void imprimirMatriz(int*** matriz,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<matriz[i][j]<<"}";
		}
		cout<<endl;
	}
}


