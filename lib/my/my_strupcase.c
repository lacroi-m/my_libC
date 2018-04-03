/*
** my_strupcase.c for yes in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 14:15:06 2015 zemax DUC
** Last update Fri Oct  9 14:15:56 2015 zemax DUC
*/

int is_low(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (-1);
}

void	my_strupcase(char *str)
{
  int i;

  i = -1;
  while (str[++i])
    if (is_low(str[i]) == 1)
      str[i] = str[i] + 32;
}