#include <iostream>
#include <fstream>
#include <cmath>

int main()
{
  int a;
  double summe;
  double durchschnitt;
  double Varianzarg;
  double Varianzsum;
  double Varianz;
  double Standardabweichung;
  double msum;
  double nsum;

  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ifstream gin("datensumme.txt");
  std::ofstream gout("varianzen.txt");

  for (int n=0; n<26; n++)
  {
    
    summe = 0;
    for (int i=0; i<9; i++)
    {
      fin >> a;
      summe += a;
    }
    durchschnitt = summe/9;
    fout << durchschnitt << std::endl;

    Varianz = 0;
    Varianzsum = 0;
    for (int i=0; i<9; i++)
    {
      gin >> a;
      Varianzarg =  pow((a-durchschnitt), 2);
      Varianzsum += Varianzarg;
    }
    Varianz = Varianzsum/9;
    gout << Varianz << std::endl;
  }

  std::ifstream hin("mittelwerte.txt");
  for (int n=0; n<26; n++)
  {
    hin >> a;
    msum += a;
  }
  double Mittelwert = msum / 26;
  //std::cout << Mittelwert << std::endl;

  std::ifstream jin("varianzen.txt");
  for (int n=0; n<26; n++)
  {
    jin >> a;
    nsum += a;
  }
  double VarianzMit = nsum/26;
  //std::cout << VarianzMit << std::endl;
}
