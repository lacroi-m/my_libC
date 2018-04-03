/*
** my_strcmp.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:26:42 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:26:44 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (1);
  if (my_strlen(s1) != my_strlen(s2))
    return (1);
  while (s1[i] != '\0')
    {
      if ((s1[i] != s2[i]) || s1 == '\0' || s2 == '\0')
	return (1);
      i = i + 1;
    }
  return (0);
}
