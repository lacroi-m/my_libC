/*
** my_strncpy.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:37:23 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:37:24 2018 DESKTOP-FQFT07H
*/

#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(src);
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  if (n > len)
    dest[len] = '\0';
  return (dest);
}
