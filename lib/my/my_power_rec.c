/*
** my_power_rec.c for my_power_rec in /home/lacroi_m/rendu/Piscine_C_J05
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Mon Oct  5 20:45:48 2015 zemax DUC
** Last update Tue Apr  3 18:06:01 2018 DESKTOP-FQFT07H
*/

#include "my.h"

int	my_power_rec(int nbr, int power)
{
  if (power <= 0)
    return (0);
  else if (power > 1)
    nbr = nbr * my_power_rec(nbr, power - 1);
  return (nbr);
}
