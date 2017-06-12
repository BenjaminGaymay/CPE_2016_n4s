/*
** useful.h for n4s in /home/benoit.pingris/delivery/CPE/CPE_2016_n4s/include
**
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
**
** Started on  Wed May  3 13:38:56 2017 benoit pingris
** Last update Mon May 29 16:43:49 2017 Benjamin GAYMAY
*/

#ifndef USEFUL_H_
# define USEFUL_H_

# define SUCCESS 0
# define ERROR 84
# define START 1
# define STOP 0

char	*my_strstr(char *, char *);

char	**str_tab(char *);

int	my_printf(char *, ...);
int	avg(int, int , int);
int	my_getnbr(char *);
int	my_strlen(char *);
int	my_strcmp(char *, char *);
int	free_gnl();

void	my_putstr(char *, int);
void	my_putnbr(int);
void	free_tab(char **);

#endif /* !USEFUL_H_ */
