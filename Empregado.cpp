#include "Empregado.hpp"

 void Empregado::Engenheiro(std::string nome ,double salario,int  projetos, double pagas){

  salarioHora = salario;
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(pagas) << std::endl;
  std::cout << "Projetos: " << projetos << std::endl;
  std::cout << std::endl;

}


void Empregado::Vendedor(std::string nome, double salario, int quota, double pagas){

  quotaMensalVendas = quota;
   salarioHora = salario;
	std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(pagas) << std::endl;
  std::cout << "Quota vendas: " << quotaMensalVendas * 12 << std::endl;
  std::cout << std::endl;
}
