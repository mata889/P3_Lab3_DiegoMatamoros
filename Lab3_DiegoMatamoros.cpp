#include <iostream>
#include <new>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <numeric>
using namespace std;

int* polinomios(int,int);

int*** crearMatriz(int size);
void eliminarMatriz(int***,int);
void imprimirMatriz(int***,int);
std::vector<string> Vector(string);

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
		char resp='s';
		std::vector<string> fechas;
		std::vector<string> temporal;
		do{
		string fecha;
		cout<<"introduzca la fecha deseada(20170201)"<<endl;
		cin>>fecha;
		temporal=Vector(fecha);
		fechas.insert(fechas.end(),temporal.begin(),temporal.end());
		cout<<"quiere seguir?(s/n)"<<endl;
		cin>>resp;
		}while(resp=='s');
		cout<<"LISTADO DE FECHAS"<<endl;
		for(int i=0;i<fechas.size();i++){
			cout<<fechas.at(i)<<" "<<endl;
		}
		cout<<"LISTADO ORDENADO"<<endl;
		for(int j=fechas.size();j>0;j--){
			cout<<fechas.at(j)<<" "<<endl;
		}	
	}break;
	}

}while(menu!=4);

return 0;

}


std::vector<string> Vector(string fecha){
	string ano;
	string mes;
	string dia;
	int anio;
	int Mes;
	int Dia;
	for(int i=0;i<=7;i++){
		if(i<4){
		ano+=fecha.at(i);
		}
		if(i<6 && i>=4){
		mes+=fecha.at(i);
		}
		if(i>5){
		dia+=fecha.at(i);
		}
	}
	//anio=atoi(ano.c_str());
	//Mes=std::stoi(mes);
	//Dia=std::stoi(dia);
	if(mes=="01"){
		mes="enero";
	}
	if(mes=="02"){
		mes="febrero";
	}
	if(mes=="03"){
		mes="marzo";
	}
	if(mes=="04"){
		mes="abril";
	}
	if(mes=="05"){
		mes="mayo";
	}
	if(mes=="06"){
		mes="junio";
	}
	if(mes=="07"){
		mes="julio";
	}
	if(mes=="08"){
		mes="agosto";
	}
	if(mes=="09"){
		mes="septiembre";
	}
	if(mes=="10"){
		mes="octubre";
	}
	if(mes=="11"){
		mes="noviembre";
	}
	if(mes=="12"){
		mes="diciembre";
	}
	
	//calcular dia exacto
	int codigomes;
	if(mes=="enero"){
		codigomes==0;
	}
	if(mes=="febrero"){
		codigomes==3;
	}
	if(mes=="marzo"){
		codigomes==3;
	}
	if(mes=="abril"){
		codigomes==6;
	}
	if(mes=="mayo"){
		codigomes==1;
	}
	if(mes=="junio"){
		codigomes==4;
	}
	if(mes=="julio"){
		codigomes==6;
	}
	if(mes=="agosto"){
		codigomes==2;
	}
	if(mes=="septiembre"){
		codigomes==5;
	}
	if(mes=="octubre"){
		codigomes=0;
	}
	if(mes=="noviembre"){
		codigomes==3;
	}
	if(mes=="diciembre"){
		codigomes==5;
	}
	
	int anioA;
	int e;
	string tempo;		
	for(int i=0;i<4;i++){
		if(i>=1){
			
			tempo+=ano.at(i);
				
		}
	}
	anioA=atoi(tempo.c_str());
	
	e=(anioA/4);
	
	int s;
	int ani=atoi(ano.c_str());
	if(ani<=1999){
		s=0;
	}else{
		s=6;
	}
	
	int diaExacto=0;
	diaExacto=diaExacto+codigomes+anioA+e+s;
	
	string diaSemana;
	
	if((diaExacto/7)<=1 && (diaExacto/7)>0){
		diaSemana="lunes";
	}
	if((diaExacto/7)<=2 && (diaExacto/7)>1){
		diaSemana="martes";
	}
	if((diaExacto/7)<=3 && (diaExacto/7)>2){
		diaSemana="miercoles";
	}
	if((diaExacto/7)<=4 && (diaExacto/7)>3){
		diaSemana="jueves";
	}
	if(((diaExacto/7)<=5 && (diaExacto/7)>4)){
		diaSemana="viernes";
	}
	if((diaExacto/7)<=6 && (diaExacto/7)>5){
		diaSemana="sabado";
	}
	if(((diaExacto/7)<=0 && (diaExacto/7)>0)){
		diaSemana="Domingo";
	}
	
	std::stringstream sstm;
	sstm<<diaSemana<<", "<<dia<<" de"<<mes<<" del"<<ano;
	string fechaF =sstm.str();
	

	std::vector<string> fechas;
	fechas.push_back(fechaF);
	return fechas;			
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


