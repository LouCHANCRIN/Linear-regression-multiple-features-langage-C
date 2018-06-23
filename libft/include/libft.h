/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchancri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:50:39 by lchancri          #+#    #+#             */
/*   Updated: 2018/06/23 20:06:13 by lchancri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

long long			ft_atoll(const char *str);
int					ft_atoi(const char *str);
int					ft_ignore_space_tab(char *str, int a);
int					ft_isnum(char c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, const char *s2, size_t n);
int					ft_firstwordindex(const char *s1);
int					ft_lastcharindex(const char *str);
int					ft_intlen(long long a);
int					ft_strclen(char const *s, char c);
int					ft_countcword(char const *s, char c);
int					ft_recursive_factorial(int nb);
int					ft_sqrt(int nb);
int					ft_is_int(char *str, int signe, char c);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
void				ft_bzero(void *s, size_t n);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *newl);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_printbit(const char o);
void				ft_swap(int *a, int *b);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memalloc(size_t size);
char				*ft_strdup(const char *s);
char				*ft_strcdup(const char *s, char c, int b);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strccpy(char *str, char c, int last_char);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *h, const char *n);
char				*ft_strnstr(const char *h, const char *n, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
char				*ft_strrev(char *str);
char				*ft_read_std(char stop_read);
char				**ft_strsplit(char const *s, char c);
char				*ft_uitoabase(unsigned long long nb, char *base);
char				*ft_itoabase(long long nb, char *base);
char				*ft_strjoinfree(char *s, char *t);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
