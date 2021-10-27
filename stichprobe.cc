#include <iostream>
#include <fstream>
#include <cmath>

int main()
{
  int a;
  double summe = 0;
  double durchschnitt;
  double Varianzarg;
  double Varianzsum = 0;
  double Varianz;
  double Standardabweichung;

  std::ifstream fin("datensumme.txt");
  
  for (int n=0; n<234; ++n)
  {
    fin >> a;
    summe += a;
  }
  durchschnitt = summe/234;
  std::cout << durchschnitt << std::endl;

  std::ifstream gin("datensumme.txt");
  for (int n=0; n<234; ++n)
  {
    gin >> a;
    Varianzarg =  pow((a-durchschnitt),2);
    Varianzsum += Varianzarg;
  }
  Varianz = Varianzsum/234;
  std::cout << Varianz << std::endl;
  Standardabweichung = sqrt(Varianz);
  std::cout << Standardabweichung << std::endl;
}