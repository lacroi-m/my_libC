/*
** my_revstr.c for revstr in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 11:50:41 2015 zemax DUC
** Last update Fri Oct  9 11:54:09 2015 zemax DUC
*/

char    *my_revstr(char *str)
{
  int   i;
  int   k;
  int   c;

  i = 0;
  k = my_strlen(str) - 1;
  while (i < k)
    {
      c = str[i];
      str[i] = str[k];
      str[k]= c;
      i = i + 1;
      k = k - 1;
    }
  return(str);
}
