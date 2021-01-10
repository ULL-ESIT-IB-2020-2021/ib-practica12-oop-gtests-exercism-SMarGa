#include<iostream>

Complejo::Complejo(int real, int imaginaria){
  PReal_         = real;
  PImgaginaria_  = imaginaria;
}

Complejo Complejo::Add(Complejo a , Complejo b){
  int ParteReal = a.GetReal()+b.GetReal();
  int ParteImaginaria = a.GetImaginaria()+b.GetImaginaria();
  Complejo resultado{ParteReal,ParteImaginaria};
  return resultado;
}
Complejo Complejo::Sub(Complejo a , Complejo b){
  int ParteReal= a.GetReal()- b.GetReal();
  int ParteImaginaria= a.GetImaginaria()-b.GetImaginaria();
  Complejo resultado{ParteReal,ParteImaginaria};
  return resultado;
}
void Complejo::Print(Complejo a){
    std::cout << a.GetReal() <<" + "<< a.GetImaginaria()<<"i"<< std::endl;
}
