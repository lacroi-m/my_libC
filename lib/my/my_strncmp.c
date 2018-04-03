/*
** my_strncmp.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:33:48 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:33:49 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int   j;

  i = 0;
  while (s1[i] == s2[i])
    i++;
  if ((n - 1) >= i)
    j = s1[i] - s2[i];
  else
    return (0);
  return (j);
}
