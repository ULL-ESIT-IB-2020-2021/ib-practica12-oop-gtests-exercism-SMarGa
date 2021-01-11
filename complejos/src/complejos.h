#ifndef COMPLEJOS_H
#define COMPLEJOS_H


class Complejo {

  public:
    Complejo() = default; 
    Complejo(double real, double imaginaria);
    double GetReal(){ return PReal_;}
    double GetImaginaria(){ return PImgaginaria_;}
    Complejo Add(Complejo a , Complejo b);
    Complejo Sub(Complejo a , Complejo b);
    void Print(Complejo a);
    friend Complejo operator- ( Complejo Complejo1,  Complejo Complejo2);
    friend Complejo operator- ( Complejo Complejo,  int Entero);
    friend Complejo operator- ( Complejo Complejo,  double Real);

  private: 
    double PReal_{0};
    double PImgaginaria_{0};
};

#include"complejos.cc"

#endif


