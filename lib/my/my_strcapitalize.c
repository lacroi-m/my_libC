/*
** my_strcapitalize.c for strcapitalize in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:07:25 2015 zemax DUC
** Last update Fri Oct  9 14:57:15 2015 zemax DUC
*/

#include "my.h"

int is_low(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (-1);
}

int is_upp(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (-1);
}

void	my_strcapitalize(char *str)
{
  int i;

  i = -1;
  while (str[++i])
  {
    if (is_low(str[i]) == 1)
      str[i] = str[i] + 32;
    else if (is_upp(str[i]) == 1)
      str[i] = str[i] - 32;
  }
}
