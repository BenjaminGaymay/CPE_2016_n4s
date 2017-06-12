/*
** free_gnl.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
**
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
**
** Started on  Mon May 29 11:15:24 2017 benoit pingris
** Last update Mon May 29 16:44:29 2017 Benjamin GAYMAY
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "simulation.h"
#include "useful.h"

int	free_gnl()
{
  char	*s;

  if ((s = get_next_line(0)) == NULL)
    return (ERROR);
  if (my_strcmp(my_strstr(s, "Track Cleared"), "\0") != 0)
    {
      free(s);
      start_stop_simulation(STOP);
    }
  free(s);
  return (SUCCESS);
}

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while ((tab[i]))
    {
      free(tab[i]);
      ++i;
    }
}
