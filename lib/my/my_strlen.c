/*
** my_strlen.c for strlen in /home/lacroi_m/rendu/Piscine_C_J04
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Thu Oct  1 18:39:08 2015 zemax DUC
** Last update Sat Oct  3 10:20:40 2015 zemax DUC
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
      my_putnbr(i);
    }
  return(i);
}

