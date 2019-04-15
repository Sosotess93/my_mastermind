/*
** affiche.c for affichage colle-1 in /home/charra_s/rendu/colle-1_15BhJ/src
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Apr 28 21:07:42 2015 Sofiane Charrad
** Last update Tue Apr 28 22:15:44 2015 Sofiane Charrad
*/

void	disp_round(int i)
{
  my_putstr("Round ");
  my_putnbr(i);
  my_putchar('\n');
}

void	disp_good(int i)
{
  my_putstr("Pions bien places : ");
  my_putnbr(i);
  my_putchar('\n');
}

void	disp_bad(int i)
{
  my_putstr("Pions mal places : ");
  my_putnbr(i);
  my_putchar('\n');
}
