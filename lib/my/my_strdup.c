/*
** my_strdup.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:27:20 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:27:21 2018 DESKTOP-FQFT07H
*/

#include "my.h"

char	*my_strdup(char *src)
{
  char  *copy;
  int   i;
  int   len;

  len = my_strlen(src);
  i = 0;
  if (src == NULL || (copy = malloc(len + 1)) == NULL)
    return (NULL);
  while (i < len)
    {
      copy[i] = src[i];
      i = i + 1;
    }
  copy[i] = '\0';
  return (copy);
}
