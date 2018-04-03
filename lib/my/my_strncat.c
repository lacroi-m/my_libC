/*
** my_strncat.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:27:38 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:27:38 2018 DESKTOP-FQFT07H
*/

#include "my.h"

char	*my_strncat(char *dest, char *src, int n)
{
  char	*str;
  int	len;
  int	i;

  i = 0;
  len = my_strlen(dest);
  if ((str = malloc(sizeof(char) * (len + n + 1))) == NULL)
    return (NULL);
  while (i < len + n)
    {
      str[i] = i < len ? dest[i] : src[i - len];
      ++i;
    }
  str[len + n] = '\0';
  free(dest);
  return (str);
}
