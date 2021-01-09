#ifndef DATES_H
#define DATES_H

class Date {
  public:
    Date() = default; 
    Date(int dia, int mes, int anyo);
    void SetDate(int dia, int mes, int anyo);
    int GetDia(){ return dia_;}
    int GetMes(){ return mes_;}
    int GetAnyo(){return anyo_;}
    std::string ToString();
    friend bool operator< (const Date Fecha1, const Date Fecha2);
    friend bool operator> (const Date Fecha1, const Date Fecha2);
  private: 
    int dia_ {0};
    int mes_ {0};
    int anyo_{0};
};
std::vector <std::string> StringToParametersOfDate(std::stringstream Separar);

#include"dates.cc"

#endif 