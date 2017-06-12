/*
** str_tab.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Fri May  5 10:19:49 2017 benoit pingris
** Last update Fri May  5 10:27:04 2017 benoit pingris
*/

#include <stdlib.h>
#include "useful.h"

char	**str_tab(char *s)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  i = 0;
  j = 0;
  if ((tab = malloc(sizeof(char *) * (my_strlen(s) + 1))) == NULL)
    return (NULL);
  while (s[i])
    {
      if ((tab[j] = malloc(sizeof(char) * (my_strlen(s) + 1))) == NULL)
	return (NULL);
      k = 0;
      while (s[i] == ':')
	++i;
      while (s[i] && s[i] != ':')
	tab[j][k++] = s[i++];
      tab[j++][k] = '\0';
    }
  tab[j] = NULL;
  tab = &tab[3];
  return (tab);
}
