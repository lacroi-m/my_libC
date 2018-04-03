/*
** my_strcat.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:33:06 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:33:07 2018 DESKTOP-FQFT07H
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  int	k;
  char	*dest_final;
  int	size;

  size = (my_strlen(dest)) + (my_strlen(src)) + 2;
  k = 0;
  i = 0;
  j = 0;
  if ((dest_final = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  while (dest[i] != 0)
    {
      dest_final[i] = dest[i];
      i++;
    }
  j = my_strlen(dest);
  while (src[k] != '\0')
    dest_final[j++] = src[k++];
  dest_final[j] = '\0';
  return (dest_final);
}
