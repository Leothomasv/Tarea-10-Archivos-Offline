#include "Registro.h"
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

void Registro::pack(){
	ofstream file("persona.txt", ios::app | ios::out);
	

	strcpy(buffer, Nombre);
	strcat(buffer, " |");
	strcat(buffer, Apellido);
	strcat(buffer, "|");
	strcat(buffer, Direccion);
	strcat(buffer, "|");
	strcat(buffer, Ciudad);
	strcat(buffer, "|");
	strcat(buffer, Estado);
	strcat(buffer, "|");
	strcat(buffer, ZipCode);
	strcat(buffer, "|");
	

	file << buffer << '\n';
	
	file.close();
}

//void Registro::unpack(){
//	ifstream file("persona.txt",ios::in);
//
//	Registro r;
//	
//		//file.read(buffer, 64);
//		/*size_t pos = 0;
//
//		string token;
//		string delimiter = "|";
//		string s = buffer;
//
//		while ((pos = s.find(delimiter)) != string::npos) {
//			token = s.substr(0, pos);
//			cout << token << endl;
//			s.erase(0, pos + delimiter.length());
//		}*/
//
//	file >> Nombre;
//	file >> Apellido;
//	file >> Direccion;
//	file >> Ciudad;
//	file >> Estado;
//	file >> ZipCode;
//
//	file.close();
//}

void ArchivoTexto::AgregarArchivo(){
	Registro r;

	cout << "Nombres: " << flush; cin.getline(r.Nombre, sizeof(r.Nombre));
	cout << "Apellido: " << flush; cin.getline(r.Apellido, sizeof(r.Apellido));
	cout << "Direccion: " << flush; cin.getline(r.Direccion, sizeof(r.Direccion));
	cout << "Ciudad: " << flush; cin.getline(r.Ciudad, sizeof(r.Ciudad));
	cout << "Estado: " << flush; cin.getline(r.Estado, sizeof(r.Estado));
	cout << "Zip Code: " << flush; cin.getline(r.ZipCode, sizeof(r.ZipCode));

	r.pack();
}

bool ArchivoTexto::Buscar(const char* name) {
	Registro r;
	ifstream file ("persona.txt", ios::in);
	while (file >> r.Nombre) {
		if (strcmp(r.Nombre, name) == 0) {
			file.close();
			return true;
		}
	}
	return false;
}

void ArchivoTexto::EliminarRegistro(const char* name) {
	Registro r;
	ifstream File("persona.txt");
	ofstream FileTemp("tmp.txt");

	char remplazo[16];

	if (Buscar(name) == true) {
		
	}
	else {
		cout << "No se encontro registro" << endl;
		
	}

}