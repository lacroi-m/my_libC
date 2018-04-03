/*
** my_getnbr.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:31:09 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 20:45:22 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int             my_getnbr(char *s)
{
  int           nb;

  nb = 0;
  while (*s == ' ' || *s == '\t')
    s++;
  if (*s == '-')
    return (-1);
  while (*s)
    {
      if (*s > '9' || *s < '0')
        return (-1);
      nb = nb * 10 + *s - '0';
      s++;
    }
  return (nb);
}
