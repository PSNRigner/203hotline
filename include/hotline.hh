//
// hotline.hh for  in /home/frasse_l/Projets/203hotline
// 
// Made by loic frasse-mathon
// Login   <frasse_l@epitech.net>
// 
// Started on  Mon Mar 14 11:45:31 2016 loic frasse-mathon
// Last update Mon Mar 14 12:32:48 2016 loic frasse-mathon
//

#ifndef HOTLINE_HH_
# define HOTLINE_HH_

namespace	htl
{
  class		Hotline
  {
  public:
    Hotline(int, int);
    Hotline(int);
    ~Hotline();
    void	Calc_bino();
    void	Calc_poisson();
    void	Calc_combi();
  private:
    int		n;
    int		k;
    int		d;
  };
}

#endif /* !HOTLINE_HH_ */
