/*
** my_putchar.c for  in /mnt/c/Users/ze/Desktop/gitshit/mylibC/lib/my/OG
** 
** Made by DESKTOP-FQFT07H
** Login   <maxime.lacroix@epitech.eu>
** 
** Started on  Tue Apr  3 17:31:50 2018 DESKTOP-FQFT07H
** Last update Tue Apr  3 17:32:48 2018 DESKTOP-FQFT07H
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
