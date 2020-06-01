//
// Created by Maria Hilda Bermejo on 6/1/20.
//

#ifndef EJ_01_CRECTANGULO_H
#define EJ_01_CRECTANGULO_H

#include <iostream>
using namespace std;

using Tnumero=double;


class CRectangulo{
private:
    Tnumero ancho;
    Tnumero largo;
public:
    CRectangulo(){}  //--- es el constructor por defecto
    CRectangulo(Tnumero _ancho, Tnumero _largo):ancho(_ancho),largo(_largo){}
    virtual ~CRectangulo(){ cout << "Se esta destruyendo el objeto en este momento...\n";}
    //--- metodos de acceso
    void setAncho(Tnumero _ancho) { ancho = _ancho;}
    Tnumero getAncho(){ return ancho;}
    void setLargo(Tnumero _largo) { largo = _largo;}
    Tnumero getLargo() { return largo;}

    Tnumero Area();
    Tnumero Perimetro();
};


#endif //EJ_01_CRECTANGULO_H
