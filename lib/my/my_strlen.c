/*
** my_strlen.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:34:05 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:36:35 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  if (str == NULL)
    return (0);
  while (str[++i])
  return (i);
}
