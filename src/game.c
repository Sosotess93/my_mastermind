/*
** game.c for game.c in /home/sofiane/GITHUB/my_mastermind/src
**
** Made by sofiane
** Login   <sofiane@epitech.net>
**
** Started on  Mon Apr 15 13:16:24 2019 sofiane
** Last update Mon Apr 15 13:16:25 2019 sofiane
*/

#include	<unistd.h>
#include	"../include/mastermind.h"

int		test_code(t_mind *mind)
{
  char		buff[4096];
  int		i;

  i = 0;
  i = read(0, buff, 4096);
  if (i == -1 || i != mind->slots + 1)
    return (-1);
  buff[mind->slots] = '\0';
  if (my_strcmp(buff, mind->code) == 0)
    return (0);
  disp_good(good_places(mind->code, buff));
  disp_bad(bad_places(mind->code, buff));
  return (1);
}

int		main_loop(t_mind *mind)
{
  int		i;
  int		j;

  i = 0;
  while (i != mind->tent + 1)
    {
      disp_round(i);
      j = test_code(mind);
      if (j == 0)
	{
	  my_putstr("You win\n");
	  return (0);
	}
      else if (j == -1)
	my_putstr("Wrong slots you loose this round.\n");
      ++i;
      my_putstr("--\n");
    }
  my_putstr("You loose\n");
}
