/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pallspic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:42:22 by pallspic          #+#    #+#             */
/*   Updated: 2019/07/07 15:24:35 by pallspic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define TRUE 1
# define FALSE 0
# define ERROR -1

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
/*
** ------------------------------ My funcs: ----------------------------------
** ft_abs - returns absolute value of int
** ft_isspace - returns if character is separator or not
** ft_strrev - replace input string to a reversed version
** ft_strnchr - returns the position of first matching symbol
*/

int					ft_abs(int n);
int					ft_isspace(char c);
char				*ft_strrev(char *str);
int					ft_strfchr(char *str, int to_find);
char				*ft_strerase(const char *to_erase,
								int start_pos, int size);

/*
** ----------------------- Standart functions: --------------------------------
*/

int					ft_atoi(const char *str);

int					ft_isalnum(int ch);
int					ft_isalpha(int ch);
int					ft_isascii(int ch);
int					ft_isdigit(int ch);
int					ft_isprint(int ch);

char				*ft_itoa(int n);

void				ft_bzero(void *point, size_t size);

int					ft_memcmp(const void *mem1, const void *mem2, size_t size);
void				*ft_memccpy(void *dest,
								const void *src, int c, size_t size);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t size);
void				*ft_memset(void *point, int val, size_t size);
void				*ft_memchr(const void *arr, int to_find, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t size);
void				ft_memdel(void **ap);

void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t size);
int					ft_strequ(char const *s, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strchr(const char *str, int to_find);
char				*ft_strrchr(const char *str, int to_find);
char				*ft_strcat(char *dest, const char *add);
char				*ft_strncat(char *dest, const char *add, size_t size);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t size);
char				*ft_strsub(char const *s1, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s1, char c);
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strclr(char *s);
void				ft_strdel(char **as);
size_t				ft_strlcat(char *dest, const char *stc, size_t size);
size_t				ft_strlen(const char *str);

int					ft_toupper(int ch);
int					ft_tolower(int ch);

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

#endif
