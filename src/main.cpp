//
// main.cpp for  in /home/frasse_l/Projets/202unsold
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Wed Mar  2 12:25:40 2016 loic frasse-mathon
// Last update Mon Mar 14 12:06:14 2016 loic frasse-mathon
//

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include "hotline.hh"

static bool	is_number(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (i == 0 && (str[i] == '-' || str[i] == '+'))
	i++;
      else if (str[i] < '0' || str[i] > '9')
	return (false);
      else
	i++;
    }
  return (true);
}

static void	usage(char **av)
{
  std::cout << "USAGE" << std::endl;
  std::cout << "\t\t" << av[0] << " [nk | d]" << std::endl;
  std::cout << "DESCRIPTION" << std::endl;
  std::cout << "n\tn value for the computation of (n k)" << std::endl;
  std::cout << "b\tk value for the computation of (n k)" << std::endl;
  std::cout << "d\taverage duration of calls (in seconds)" << std::endl;
  exit(0);
}

static void	error_args()
{
  std::cerr << "Error: Bad arguments, please run with -h for help" << std::endl;
  exit(84);
}

static void	unsold(int *args, int n)
{
  if (n == 3 && (args[0] <= 0 || args[1] <= 0 || args[1] > args[0]))
    error_args();
  if (n == 2 && args[0] <= 0)
    error_args();
  htl::Hotline	hotline = (n == 3 ? htl::Hotline(args[0], args[1]) : htl::Hotline(args[0]));
  if (n == 2)
    {
      hotline.Calc_bino();
      hotline.Calc_poisson();
    }
  else
    hotline.Calc_combi();
}

int	main(int ac, char **av)
{
  int	i;
  int	args[2];
  
  i = 1;
  while (i < ac)
    {
      if (std::string("-h") == av[1])
	usage(av);
      if (i > 2 || !is_number(av[i]))
	error_args();
      errno = 0;
      args[i - 1] = atoi(av[i]);
      if (errno == ERANGE)
        error_args();
      i++;
    }
  if (i != 3 && i != 2)
    error_args();
  unsold(args, i);
  return (0);
}
