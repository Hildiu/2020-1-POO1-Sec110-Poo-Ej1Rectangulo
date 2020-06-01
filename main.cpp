//--- Dato de Entrada: ancho, largo (double)
//--- Dato de Salida : area, perimetro (double)

#include <iostream>
#include "CRectangulo.h"

using namespace std;

int main()
{
  CRectangulo  R1, R2;  //-- se la declarado el objeto de la clase CRectangulo y se ha creado utilizando
  //-- el constructor por defecto.
  cout << "Usando el objeto R1 \n";
  R1.setAncho(12.5);
  R1.setLargo(25.0);
  cout << "El area del rectangulo es : " << R1.Area() << "\n";
  cout << "El perimetro del rectangulo es : " << R1.Perimetro() << "\n";

  //--- pedimos datos desde el teclado para R2
  cout << "\n\nUsando R2 \n\n";
  Tnumero l,a;
  cout << "Largo : "; cin>>l;
  cout << "Ancho : "; cin >>a;
  R2.setLargo(l);
  R2.setAncho(a);
  cout <<"Area es : " << R2.Area() << "\n";
  cout <<"Perimetro es : " <<R2.Perimetro()<< "\n";
  cout << "El valor del atributo largo de R2 es " << R2.getLargo() << "\n";

  //-- crear un tercer objeto
  CRectangulo R3(34.5, 75);
  cout << "\n\nTercer objeto \n";
  cout << "El area es      : "<< R3.Area() <<"\n";
  cout << "El perimetro es : " << R3.Perimetro() << "\n";

  return 0;
}