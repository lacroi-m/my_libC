/*
** my_str_islower.c for str_islower in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:31:23 2015 zemax DUC
** Last update Fri Oct  9 14:58:33 2015 zemax DUC
*/

#include "my.h"

int is_low(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (-1);
}

int	my_str_islower(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_low(str[i]) == -1)
      return (-1);
  return (1);
}
