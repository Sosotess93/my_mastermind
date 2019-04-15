/*
** my_strcmp.c for  in /home/charra_s/rendu/colle-1_15BhJ/src
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Apr 28 21:11:51 2015 Sofiane Charrad
** Last update Tue Apr 28 22:45:25 2015 Sofiane Charrad
*/

#include	<string.h>

int		good_places(char *s1, char *s2)
{
  int		i;
  int		j;

  j = 0;
  i = 0;
  while (s1[i])
    {
      if (s1[i] == s2[i])
	++j;
      ++i;
    }
  return (j);
}

int		bad_places(char *s1, char *s2)
{
  int		i;
  int		j;
  int		k;

  i = 0;
  j = 0;
  k = 0;
  while (s1[i])
    {
      while (s2[j])
	{
	  if (s1[i] == s2[j] && j != i)
	    ++k;
	  ++j;
	}
      j = 0;
      ++i;
    }
  return (k);
}
