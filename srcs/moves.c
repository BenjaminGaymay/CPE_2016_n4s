/*
** simulation.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 21:57:25 2017 benoit pingris
** Last update Sun Jun  4 21:09:02 2017 benoit pingris
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "useful.h"

int	turn(float degree, float speed)
{
  dprintf(1, "CAR_FORWARD:%f\n", speed);
  if (free_gnl() == ERROR)
    return (ERROR);
  dprintf(1, "WHEELS_DIR:%f\n", degree);
  if (free_gnl() == ERROR)
    return (ERROR);
  return (SUCCESS);
}

int	turn_mid()
{
  my_putstr("WHEELS_DIR:0\n", 1);
  if (free_gnl() == ERROR)
    return (ERROR);
  return (SUCCESS);
}

int	move_for(float speed)
{
  if (turn_mid() == ERROR)
    return (ERROR);
  dprintf(1, "CAR_FORWARD:%f\n", speed);
  if (free_gnl() == ERROR)
    return (ERROR);
  return (SUCCESS);
}

int	move_back()
{
  if (turn_mid() == ERROR)
    return (ERROR);
  my_putstr("CAR_BACKWARDS:0.4\n", 1);
  if (free_gnl() == ERROR)
    return (ERROR);
  my_putstr("CYCLE_WAIT:1\n", 1);
  if (free_gnl() == ERROR)
    return (ERROR);
  return (SUCCESS);
}
