#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

struct TR{
 string nombre;
 string apellido;
 int nlegajo;

};



void IngreseEmpleados(TR vec[],fstream data2){
    data2.open("data.txt");
 for(int i=0;i<5;i++){

    cout<< i+1 <<". Ingrese nombre \n";
    cin >> vec[i].nombre;
    cout << "Ingrese apellido";
    cin >> vec[i].apellido;
    cout << "Numero de legajo";
    cin >> vec[i].nlegajo;
    system("cls");

    data2<<vec[i].nombre<<" "<<vec[i].apellido<<" "<<vec[i].nlegajo<<" ";

}
data2.close();}
 void MostrarEmpleado(TR vec[]){
  for(int i=0;i<5;i++){
   cout << i+1<< ")" <<vec[i].nombre << vec[i].apellido << vec[i].nlegajo <<"\n" ;


 }}


int main(){
TR vec[5];
int b,w=0;
fstream data1;
fstream data2;
data1.open("data.txt",ios::in);
if(!data1.fail()){
while(!data1.eof()){
    data1>>vec[w].nombre>>vec[w].apellido>>vec[w].nlegajo;
    w=w+1;
}}else{
cout<<"no hay nada \n";
system("pause");
data1.close();
     data2.open("data.txt",ios::out);
 for(int i=0;i<5;i++){

    cout<< i+1 <<". Ingrese nombre \n";
    cin >> vec[i].nombre;
    cout << "Ingrese apellido";
    cin >> vec[i].apellido;
    cout << "Numero de legajo";
    cin >> vec[i].nlegajo;
    system("cls");

    data2<<vec[i].nombre<<" "<<vec[i].apellido<<" "<<vec[i].nlegajo<<" ";
 }
}
data2.close();
 MostrarEmpleado(vec);
}
