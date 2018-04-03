/*
** my_str_isupper.c for isupper in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 13:00:29 2015 zemax DUC
** Last update Fri Oct  9 14:59:35 2015 zemax DUC
*/

#include "my.h"

int is_upp(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (-1);
}

int	my_str_isupper(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_upp(str[i]) == -1)
      return (-1);
  return (1);
}