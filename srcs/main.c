/*
** main.c for n4s in /home/benoit.pingris/delivery/need4speed/n4s_package/srcs
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 12:09:56 2017 benoit pingris
** Last update Mon May 29 16:02:43 2017 benoit pingris
*/

#include <stdio.h>
#include <stddef.h>
#include "get_next_line.h"
#include "simulation.h"
#include "useful.h"

int	start_stop_simulation(int status)
{
  if (status == START)
    {
      my_putstr("START_SIMULATION\n", 1);
      if (free_gnl() == ERROR)
	return (ERROR);
      my_putstr("Simulation started...\n", 2);
    }
  else
    {
      my_putstr("STOP_SIMULATION\n", 1);
      if (free_gnl() == ERROR)
	return (ERROR);
      my_putstr("Simulation stopped\n", 2);
    }
  return (SUCCESS);
}

int	main()
{
  if (start_stop_simulation(START) == ERROR)
    return (ERROR);
  if (my_car(0) == ERROR)
    return (ERROR);
  return (0);
}
