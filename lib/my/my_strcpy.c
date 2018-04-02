/*
** my_strcpy.c for stringcopy in /home/lacroi_m/rendu/Piscine_C_J06
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Mon Oct  5 09:33:05 2015 zemax DUC
** Last update Mon Oct  5 17:23:59 2015 zemax DUC
*/

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
