#include <iostream>
#include <fstream>

int main()
{
int a;
int b;
int c;

std::ifstream fin("daten.txt");
std::ofstream fout("datensumme.txt");

for (int n = 0; n<234; ++n)
{
  fin >> a >> b;
  c = a + b;
  // std::cout << a << "," << b << std::endl;
  std::cout << c << std::endl;

  fout << c << std::endl;
}

fin.close();
fout.close();

}