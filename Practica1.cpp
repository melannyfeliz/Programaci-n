//Melanny Féliz - 1067164
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	float peso, precio, costo; //Se definen las variables a utilizar
	char nombre[30], cedula[12]; //Se asigna suficiente espacio para que se contenga los caracteres a insertar por el usuario
	cout << "Inserte su nombre: ";
	cin.getline(nombre, 30); //Se recibe el nombre del usuario 
	
	cout << "Inserte su numero de cedula (sin guion): ";
	cin.getline(cedula,12); //Se recibe el numero de cédula como un arreglo de caracteres
	
	cout << "Inserte el peso (libras) y precio (dolares) de su articulo separado por espacio: ";
	cin >> peso >> precio;
	
	if(peso<50){                               //Costo de transporte para artículos con un peso mayor a 50 libras
		if(precio>75){                              
		costo = 0;}
		else if(precio > 50 && precio <= 75){       
		costo = 5;}
		else if(precio > 25 && precio <= 50){
		costo = 10;}
		else if(precio >= 0 && precio <= 25){
		costo = 15;}
	}
	else{
		costo = 25*(1-(pow(1.01,-9.21*peso))); //Costo de transporte para artículos con un peso menor a 50 libras
	}
	
	cout << setprecision(2) << fixed;
	cout << setw(42) << nombre << " " << setw(18) << cedula << " " << setw(8) << peso << " " << setw(8) << precio << " " << setw(7) << costo << " " << endl;

	return 0;
}

