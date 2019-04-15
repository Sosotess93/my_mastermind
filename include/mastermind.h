/*
** mastermind.h for ny_mastermind.h in /home/sofiane/GITHUB/my_mastermind/include
**
** Made by sofiane
** Login   <sofiane@epitech.net>
**
** Started on  Mon Apr 15 13:15:49 2019 sofiane
** Last update Mon Apr 15 13:23:04 2019 sofiane
*/

#ifndef MY_MASTERMIND_H_
# define MY_MASTERMIND_H_

typedef struct	s_mind
{
  char		pions[9];
  char		code[5];
  int		tent;
  int		slots;
}		t_mind;

void            my_putchar(char c);
int		my_strcmp(char *str1, char *str2);
void            my_putstr(char *c);

#endif /* !MY_MASTERMIND_H_ */
