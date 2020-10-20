#include "Empregado.hpp"

int main() {
Empregado eng;
Empregado vend;

   eng.Engenheiro("Joao Snow",35, 3,9.5);
   eng.Engenheiro("Daniela Targaryen",30, 1,8);
   eng.Engenheiro( "Bruno Stark",30, 2,8);

  vend.Vendedor("Tonho Lannister", 20, 5000, 6);
  vend.Vendedor("Jose Mormont", 25, 3000, 8);
  vend.Vendedor( "Sonia Stark", 30, 4000, 8);

  return 0;	
}
