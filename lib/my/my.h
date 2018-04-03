/*
** me.h for my.h in /home/lacroi_m/rendu/Piscine_C_J09/include
** 
** Made by zemax DUC
** Login   <lacroi_m@epitech.net>
** 
** Started on  Fri Oct  9 10:13:02 2015 zemax DUC
** Last update Tue Apr  3 20:49:37 2018 DESKTOP-FQFT07H
*/

#ifndef LIBMY_A_
#define LIBMY_A_

#include <unistd.h>
#include <stdlib.h>

int     my_getnbr(char *s);
int	my_isneg(int n);
int 	my_power_rec(int nbr, int power);
int     my_put_nbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int 	my_xputstr(char *str, int fd, int value);
char    *my_revstr(char *str);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isupper(char *str);
char	**my_str_to_wordtab(char *str);
void	my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
int 	my_strcmp(char *s1, char *s2);
char    *my_strcpy(char *dest, char *src);
char	*my_strdup(char *src);
int	my_strlen(char *str);
void	my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int n);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strndup(char *src, int n);
void	my_strupcase(char *str);
int	my_swap(int *a, int *b);
#endif /* LIBMY_A_ */
