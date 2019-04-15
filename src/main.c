/*
** main.c for main.c in /home/sofiane/GITHUB/my_mastermind/src
**
** Made by sofiane
** Login   <sofiane@epitech.net>
**
** Started on  Mon Apr 15 13:16:43 2019 sofiane
** Last update Mon Apr 15 13:16:44 2019 sofiane
*/

#include <stdlib.h>
#include "../include/mastermind.h"

int	main(int agrc, char **argv)
{
  t_mind	mind;

  init_struct(&mind);
  main_loop(&mind);
}
