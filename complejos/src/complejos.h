#ifndef COMPLEJOS_H
#define COMPLEJOS_H


class Complejo {

  public:
    Complejo() = default; 
    Complejo(int real, int imaginaria);
    int GetReal(){ return PReal_;}
    int GetImaginaria(){ return PImgaginaria_;}
    Complejo Add(Complejo a , Complejo b);
    Complejo Sub(Complejo a , Complejo b);
    void Print(Complejo a);

  private: 
    int PReal_{0};
    int PImgaginaria_{0};
};

#include"complejos.cc"

#endif


