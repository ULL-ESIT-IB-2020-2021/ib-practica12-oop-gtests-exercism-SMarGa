#include<iostream>
#include<string>
#include<vector>
#include <sstream>

#include"dates.h"

Date::Date(int dia, int mes, int anyo){
  dia_  = dia;
  mes_  = mes;
  anyo_ = anyo;
}
std::string Date::ToString(){
    std::string ParteDia = std::to_string(dia_);
    std::string ParteMes = std::to_string(mes_);
    std::string ParteAnyo = std::to_string(anyo_);
    std::string respuesta =  ParteDia + "/"+ ParteMes + "/" + ParteAnyo;
    return respuesta;
}

std::vector <std::string> StringToParametersOfDate(std::string ParaSeparar){
  std::string parte;
  std::stringstream Separar(ParaSeparar);
  std::vector <std::string> CombinacionDePartes;
  while(std::getline(Separar,parte,'/')){
    CombinacionDePartes.push_back(parte);
  }
  return CombinacionDePartes;
}
bool operator< ( Date Fecha1, Date Fecha2){
  if (Fecha1.GetAnyo() < Fecha2.GetAnyo()) {
		return true;
	}
	if ((Fecha1.GetAnyo() == Fecha2.GetAnyo()) && (Fecha1.GetMes() < Fecha2.GetMes())) {
		return true;
	}
	if ((Fecha1.GetAnyo() == Fecha2.GetAnyo()) && (Fecha1.GetMes() == Fecha2.GetMes()) && (Fecha1.GetDia() < Fecha2.GetDia())) {
		return true;
	}
}
bool operator> (Date Fecha1,Date Fecha2){
  if (Fecha1.GetAnyo() > Fecha2.GetAnyo()) {
		return true;
	}
	if ((Fecha1.GetAnyo() == Fecha2.GetAnyo()) && (Fecha1.GetMes() > Fecha2.GetMes())) {
		return true;
	}
	if ((Fecha1.GetAnyo() == Fecha2.GetAnyo()) && (Fecha1.GetMes() == Fecha2.GetMes()) && (Fecha1.GetDia() > Fecha2.GetDia())) {
		return true;
	}
}