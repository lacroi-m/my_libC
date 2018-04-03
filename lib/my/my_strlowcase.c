/*
** my_strlowcase.c for strlowcase in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 14:10:10 2015 zemax DUC
** Last update Fri Oct  9 14:11:05 2015 zemax DUC
*/

#include "my.h"

int is_upp(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (-1);
}

void	my_strlowcase(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_upp(str[i]) == -1)
      str[i] = str[i] - 32;
}