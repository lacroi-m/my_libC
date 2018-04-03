/*
** my_str_isnum.c for str_isnum in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:54:30 2015 zemax DUC
** Last update Fri Oct  9 12:55:10 2015 zemax DUC
*/

#include "my.h"

int is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (-1);
}

int	my_str_isnum(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_num(str[i]) == -1)
      return (-1);
  return (1);
}