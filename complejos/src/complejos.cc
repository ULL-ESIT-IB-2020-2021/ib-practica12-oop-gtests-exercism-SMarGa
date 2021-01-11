#include<iostream>

Complejo::Complejo(double real, double imaginaria){
  PReal_         = real;
  PImgaginaria_  = imaginaria;
}

Complejo Complejo::Add(Complejo a , Complejo b){
  double ParteReal = a.GetReal()+b.GetReal();
  double ParteImaginaria = a.GetImaginaria()+b.GetImaginaria();
  Complejo resultado{ParteReal,ParteImaginaria};
  return resultado;
}
Complejo Complejo::Sub(Complejo a , Complejo b){
  double ParteReal= a.GetReal()- b.GetReal();
  double ParteImaginaria= a.GetImaginaria()-b.GetImaginaria();
  Complejo resultado{ParteReal,ParteImaginaria};
  return resultado;
}
void Complejo::Print(Complejo a){
    std::cout << a.GetReal() <<" + "<< a.GetImaginaria()<<"i"<< std::endl;
}
Complejo operator- ( Complejo Complejo1,  Complejo Complejo2){
  double ParteReal= Complejo1.GetReal()- Complejo2.GetReal();
  double ParteImaginaria= Complejo1.GetImaginaria()-Complejo2.GetImaginaria();
  Complejo resultado{ParteReal,ParteImaginaria};
  return resultado;
}
Complejo operator- ( Complejo ComplejoR,  int Entero){
  double ParteReal= ComplejoR.GetReal()- Entero;
  double ParteImaginaria= ComplejoR.GetImaginaria() ;
  Complejo resultado {ParteReal,ParteImaginaria};
  return resultado;
}

Complejo operator- ( Complejo ComplejoR,  double Real){
  double ParteReal= ComplejoR.GetReal()- Real;
  double ParteImaginaria= ComplejoR.GetImaginaria();
  Complejo resultado {ParteReal,ParteImaginaria};
  return resultado;
}

