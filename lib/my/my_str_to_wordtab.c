/*
** my_str_to_wordtab.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:27:53 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:27:54 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int	my_nb_word(char *str)
{
  int	i;
  int	r;

  i = 0;
  r = 0;
  while (str[i] != '\0')
    {
      while (str[i] <= 32 && str[i] != '\0')
	i++;
      if (str[i] != '\0')
	{
	  if (str[i] > 32)
	    {
	      r++;
	      while (str[i] > 32&& str[i] != '\0')
		i++;
	    }
	}
    }
  return (r);
}

char	**my_str_to_wordtab(char *str)
{
  char  **r;
  int   i;
  int   u;
  int   j;

  i = 0;
  u = 0;
  j = 0;
  if ((r = malloc((my_nb_word(str) + 1) * sizeof(char *))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      while (str[i] <= 32 && str[i] != '\0')
        i++;
      u = i;
      while (str[u] > 32 && str[u] != '\0')
        u++;
      if (str[i] != '\0')
        r[j++] = my_strndup(&str[i], u - i);
      i = (str[u] != 0) ? u + 1 : u;
    }
  r[j] = NULL;
  return (r);
}
