/*
** my_strcat.c for my_strcat in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:09:07 2015 zemax DUC
** Last update Fri Oct  9 12:11:38 2015 zemax DUC
*/

char	*my_strcat(char *dest, char *src)
{
  int   i;
  int   k;

  i = 0;
  k = 0;
  if(src[i] != '\0')
    {
      i = i + 1;
    }
  else
    {
      dest[k] = src[i];
      k = k + 1;
      if(dest[k] = '\0')
        {
          return(dest);
        }
    }
}
