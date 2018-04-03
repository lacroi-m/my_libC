/*
** my_putstr.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:26:26 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:26:27 2018 DESKTOP-FQFT07H
*/

#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int	my_xputstr(char *str, int fd, int value)
{
  if (write(fd, str, my_strlen(str)) == -1)
    return (-1);
  return (value);
}
