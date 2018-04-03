/*
** my_str_isalpha.c for str_isalpha in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:18:30 2015 zemax DUC
** Last update Fri Oct  9 12:29:33 2015 zemax DUC
*/

#include "my.h"

int is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (-1);
}

int	my_str_isalpha(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_alpha(str[i]) == -1)
      return (-1);
  return (1);
}
