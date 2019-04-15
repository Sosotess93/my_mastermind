/*
** util.c for util.c in /home/sofiane/GITHUB/my_mastermind/src
**
** Made by sofiane
** Login   <sofiane@epitech.net>
**
** Started on  Mon Apr 15 13:17:10 2019 sofiane
** Last update Mon Apr 15 13:17:14 2019 sofiane
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i])
    ++i;
  return (i);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    {
      ++i;
    }
  if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  return (1);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
