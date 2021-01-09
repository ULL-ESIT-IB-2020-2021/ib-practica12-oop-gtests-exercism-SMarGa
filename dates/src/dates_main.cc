#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include"dates.h"

int main ( int argc, char* argv[]) {
  std::string nombre_del_arcivo (argv[1]);
  if(nombre_del_arcivo=="--help"){
    std::cout << "Usage: ./Sort_Dates Fichero_entrada fichero_salida" << std::endl;
    std::cout << "Fichero_entrada:  Fichero a ordenar                " << std::endl;
    std::cout << "fichero_salida :  Fichero ordenado                 " << std::endl;
    return 1;
  }

  std::string nombre_del_arcivo_salida (argv[2]);
  std::ifstream finput(nombre_del_arcivo+".txt", std::ios_base::in);
 
  std::string fecha;
  std::vector <Date> TodasLasFechas;
  while (finput >> fecha){

   std::string LineaALeer = fecha;

   std::vector <std::string> Datos_de_prueba = StringToParametersOfDate(LineaALeer);
   int DiaPrueba  = std::stoi(Datos_de_prueba[0]);
   int MesPrueba  = std::stoi(Datos_de_prueba[1]);
   int AnyoPrueba = std::stoi(Datos_de_prueba[2]);
   Date Fechas = Date(DiaPrueba,MesPrueba,AnyoPrueba);
   TodasLasFechas.push_back(Fechas);
  }

  std::sort(TodasLasFechas.begin(),TodasLasFechas.end());
  
  std::ofstream foutput(nombre_del_arcivo_salida+".txt", std::ios_base::out);
  std::string salida("");
   for(int i= 0; i<TodasLasFechas.size();i++){
      salida +=TodasLasFechas[i].ToString();
      salida += "     ";
      
  }
  foutput << salida << std::endl;
  return 0;
}
