/*
** my_putnbr.c for my_putnbr in /home/charra_s/rendu/colle-1_15BhJ
**
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
**
** Started on  Tue Apr 28 22:08:14 2015 Sofiane Charrad
** Last update Mon Apr 15 13:20:33 2019 sofiane
*/

#include        "../include/mastermind.h"

void	my_putnbr(int nb)
{
  int	div;

  div = 1;
  while ((nb / div ) >= 10)
    div = div * 10;
  while (div > 0)
    {
      my_putchar((nb / div ) % 10 + '0');
      div = div / 10;
    }
}
