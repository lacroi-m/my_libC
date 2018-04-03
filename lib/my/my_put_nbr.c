/*
** my_put_nbr.c for my_put_nbr in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 11:35:07 2015 zemax DUC
** Last update Fri Oct  9 14:52:39 2015 zemax DUC
*/

#include "my.h"

int	my_put_nbr(int nb)
{
  int i;

  i = 0;
  while (i >= 0)
      my_putchar((nb / 10) % 10);
}
