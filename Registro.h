#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string>

using namespace std;

struct Registro {

    char buffer[64];

    char Nombre[16];
    char Apellido[16];
    char Direccion[15];
    char Ciudad[9];
    char Estado[3];
    char ZipCode[5];
 
    void pack();
    void unpack();
};

class ArchivoTexto {
public:

    int filesize;


    void AgregarArchivo();
    bool Buscar(const char* name);
    void EliminarRegistro(const char* name);
    void Compactar();
    void SetBuffer(const char*, int);
};