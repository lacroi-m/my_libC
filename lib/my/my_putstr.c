/*
** my_putstr.c for putstringsbro in /home/lacroi_m/rendu/Piscine_C_J04
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Thu Oct  1 21:03:06 2015 zemax DUC
** Last update Tue Oct  6 13:17:57 2015 zemax DUC
*/

int     my_putstr(int *str)
{
  int   i;


  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
