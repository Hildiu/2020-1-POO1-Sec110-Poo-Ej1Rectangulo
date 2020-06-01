//
// Created by Maria Hilda Bermejo on 6/1/20.
//

#include "CRectangulo.h"

Tnumero CRectangulo::Area()
{
  return largo * ancho;
}

Tnumero CRectangulo::Perimetro()
{
  return 2*largo + 2*ancho;
}
