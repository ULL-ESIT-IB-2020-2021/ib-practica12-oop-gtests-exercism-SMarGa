#include<iostream>

#include "complejos.h"

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = resultado.Add(complejo1, complejo2);
  resultado.Print(resultado);
  resultado = resultado.Sub(complejo1, complejo2);
  resultado.Print(resultado);
  return 0;
}