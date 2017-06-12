/*
** my_putstr.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 13:38:15 2017 benoit pingris
** Last update Wed May  3 13:38:47 2017 benoit pingris
*/

#include <unistd.h>
#include "useful.h"

void	my_putstr(char *s, int stream)
{
  write(stream, s, my_strlen(s));
}
