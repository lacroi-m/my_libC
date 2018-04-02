/*
** my_strcmp.c for strcmp in /home/lacroi_m/rendu/Piscine_C_J07/lib/my
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 12:13:17 2015 zemax DUC
** Last update Fri Oct  9 14:57:45 2015 zemax DUC
*/

char	my_strcmp(char *s1, char *s2)
{
  int   i;
  int   a;
  int   b;
  int   c;

  i = 0;
  a = 0;
  b = 0;
  while (s1[i] != '\0')
    {
      a = a + s1[i];
      i = i + 1;
    }
  i = 0;
  while (s2[i] != '\0')
    {
      b = b + s2[i];
      i = i + 1;
    }
  c = a - b;
  return (c);
}
