/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:52:29 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:24:28 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	**ft_tabcpy(char **tab);
/* memalloc.c */
void	*ft_memalloc(size_t size);
void	ft_memdel(void **app);
void	*ft_memmove(void *s1, void const *s2, size_t n);
/* memcpy.c */
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, void const *s2, int c, size_t n);
/* memset.c */
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
/* putstrnb.c */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
/* putstrnb_fd.c */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
/* strcat.c */
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/* strchr.c */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
/* strcmp.c */
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
/* strcpy.c */
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
/* striter.c */
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* strmap.c */
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* strstr.c */
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
/* toupper_lower.c */
int		ft_toupper(int c);
int		ft_tolower(int c);
/* what_is.c */
int		ft_isdigit(int c);
int		ft_isdigit_str(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);

#endif /* !LIBFT_H */
