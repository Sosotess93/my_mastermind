/*
** init.c for init.c in /home/sofiane/GITHUB/my_mastermind/src
**
** Made by sofiane
** Login   <sofiane@epitech.net>
**
** Started on  Mon Apr 15 13:16:35 2019 sofiane
** Last update Mon Apr 15 13:16:36 2019 sofiane
*/

#include	<stdlib.h>
#include	"../include/mastermind.h"

void		set_code(t_mind *mind)
{
  int		i;
  int		nbr;

  nbr = 12;
  i = 0;
  my_putstr("Generating the code it can takes few secondes.\n");
  while (i != 4)
    {
      while (nbr > 7)
	nbr = rand();
      mind->code[i] = '0' + nbr;
      nbr = 8;
      ++i;
      printf("%d", mind->code);
    }
  mind->code[4] = '\0';
}

void		init_struct(t_mind *mind)
{
  int		i;

  i = 0;
  mind->tent = 10;
  mind->slots = 4;
  while (i != 8)
    {
      mind->pions[i] = '0' + i;
      ++i;
    }
  mind->pions[8] = '\0';
  set_code(mind);
}
