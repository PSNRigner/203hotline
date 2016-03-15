//
// hotline.cpp for  in /home/frasse_l/Projets/203hotline
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Mon Mar 14 11:56:43 2016 loic frasse-mathon
// Last update Tue Mar 15 18:59:13 2016 loic frasse-mathon
//

#include <iostream>
#include <iomanip>
#include "hotline.hh"

htl::Hotline::Hotline(int n, int k)
{
  this->n = n;
  this->k = k;
}

htl::Hotline::Hotline(int d)
{
  this->d = d;
}

htl::Hotline::~Hotline()
{
}

static void	print_int128(unsigned __int128 n)
{
  if (n / 10)
    print_int128(n / 10);
  std::cout << (char)(n % 10 + 48);
}

void	htl::Hotline::Calc_combi()
{
  unsigned __int128	c = 1;

  int i = 0;
  while (i < k)
    {
      c = c * (n - i) / (i + 1);
      i++;
    }

  std::cout << k << "-combination of a " << n << " set:" << std::endl;
  print_int128(c);
  std::cout << std::endl;
}

void	htl::Hotline::Calc_bino()
{
  std::cout << "Binomial distribution:" << std::endl << std::setprecision(3);
  int i = 0;
  while (i <= 50)
    {
      std::cout << i << " -> ";
      std::cout << (i % 6 == 5 || i == 50 ? "\n" : "\t");
      i++;
    }
}

void	htl::Hotline::Calc_poisson()
{

}
