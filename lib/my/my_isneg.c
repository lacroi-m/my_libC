/*
** my_isneg.c for isneg in /home/lacroi_m/rendu/Piscine_C_J03
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Wed Sep 30 15:03:22 2015 zemax DUC
** Last update Fri Oct  9 11:27:59 2015 zemax DUC
*/

void	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else 
    {
      my_putchar('P');
    }
}
