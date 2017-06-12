/*
** ai.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 22:03:53 2017 benoit pingris
** Last update Sun Jun  4 21:13:11 2017 benoit pingris
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "simulation.h"
#include "useful.h"

int	touch_wall(int *lidar)
{
  int	i;

  i = 0;
  while (i < 32)
    {
      if (lidar[i] < 150)
	return (SUCCESS);
      ++i;
    }
  return (ERROR);
}

int	set_up(int *lidar)
{
  char	*s;
  char	**tab;
  int	i;

  i = 0;
  my_putstr("GET_INFO_LIDAR\n", 1);
  if ((s = get_next_line(0)) == NULL)
    return (ERROR);
  tab = str_tab(s);
  while (i < 32)
    {
      lidar[i] = my_getnbr(tab[i]);
      ++i;
    }
  free(s);
  free_tab(tab);
  return (SUCCESS);
}

int	find_options(int *lidar, int middle)
{
  if (touch_wall(lidar) == SUCCESS)
    return (move_back());
  if (middle > 0)
    return (turn(0.28, 0.26));
  else
    return (turn(-0.28, 0.26));
}

int	forward(int front1, int front2, int front3, int front4)
{
  float	speed;

  speed = 2.5;
  if (front1 >= 1200 && front2 >= 1200 && front3 >= 1200 && front4 >= 1200)
    speed = 0.9;
  else if (front1 >= 900 && front2 >= 900 && front3 >= 900 && front4 >= 900)
    speed = 0.75;
  else
    speed = 0.35;
  if (move_for(speed) == ERROR)
    return (ERROR);
  return (SUCCESS);
}

int	my_car(int middle)
{
  int	*lidar;

  if ((lidar = malloc(sizeof(int) * 33)) == NULL)
    return (ERROR);
  while (1)
    {
      if (set_up(lidar) == ERROR)
	return (ERROR);
      middle = (avg(lidar[0],  lidar[1], lidar[2])-
		avg(lidar[29], lidar[30], lidar[31]));
      if (lidar[14] > 800 && lidar[17] > 800 &&
	  lidar[12] > 800 && lidar[19] > 800 &&
	  lidar[0] > 100 && lidar[31] > 100)
	{
	  if (forward(lidar[14], lidar[17], lidar[12], lidar[19]) == ERROR)
	    return (ERROR);
	}
      else
	if (find_options(lidar, middle) == ERROR)
	  return (ERROR);
    }
  return (SUCCESS);
}
