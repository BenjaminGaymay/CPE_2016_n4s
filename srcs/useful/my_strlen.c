/*
** my_strlen.c for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Wed May  3 13:37:49 2017 benoit pingris
** Last update Wed May  3 13:38:10 2017 benoit pingris
*/

int	my_strlen(char *s)
{
  int	i;

  i = 0;
  while (s[i])
    ++i;
  return (i);
}
