/*
** my_putnbr.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 15:57:21 2017 benoit pingris
** Last update Sat Jun  3 17:09:49 2017 benoit pingris
*/

#include <unistd.h>
#include "useful.h"

void	my_putchar(char a)
{
  write(2, &a, 1);
}

void	my_putnbr(int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n = -n;
    }
  if (n >= 0 && n <= 9)
    my_putchar(n + '0');
  if (n > 9)
    {
      my_putnbr(n / 10);
      my_putnbr(n % 10);
    }
}
