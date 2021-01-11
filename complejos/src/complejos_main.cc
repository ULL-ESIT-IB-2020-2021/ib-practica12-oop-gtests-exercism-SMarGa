#include<iostream>

#include "complejos.h"

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = resultado.Add(complejo1, complejo2);
  //resultado.Print(resultado);
  resultado = resultado.Sub(complejo1, complejo2);
  ///resultado.Print(resultado);
  Complejo prueba;
  Complejo prueba1;
  Complejo prueba2;
  int prueba_entero = 1;
  double prueba_real= 0.1;
  prueba = complejo1 - complejo2;
  prueba1= complejo1 - prueba_entero;
  prueba2= complejo1 - prueba_real;
  prueba.Print(prueba);
  prueba1.Print(prueba1);
  prueba2.Print(prueba2);

  return 0;
}