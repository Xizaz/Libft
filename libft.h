/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:19:52 by jcornil           #+#    #+#             */
/*   Updated: 2018/10/29 16:21:59 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 32

typedef struct				s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}							t_list;

int							get_next_line(int fd, char **line);
int							read_line(int fd, char **buf);
int							next_line(int fd, char **buf, char **line);
int							ft_strcmp(const char *s1, const char *s2);
int							ft_strncmp(char *s1, char *s2, unsigned int n);
char						*ft_strcat(char *dest, char *src);
char						*ft_strncat(char *dest, char *src, int nb);
unsigned int				ft_strlcat(char *dest, char *src,
							unsigned int size);
char						*ft_strcpy(char *dest, char *src);
char						*ft_strncpy(char *dest, char *src, unsigned int n);
int							ft_isdigit(int c);
int							ft_isalpha(int c);
int							ft_atoi(char *str);
char						*ft_strdup(char *src);
size_t						ft_strlen(const char *str);
char						*ft_strstr(char *str, char *to_find);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_isalnum(int c);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
char						*ft_strnstr(char *s1, char *s2, size_t n);
void						ft_bzero(void *s, size_t n);
int							ft_toupper(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);
void						*ft_memcpy(void *dest, const void *src, size_t n);
void						*ft_memset(void *b, int c, size_t len);
void						*ft_memccpy(void *dest, const void *src,
							int c, size_t size);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
void						*ft_memmove(void *dst, const void *src, size_t len);
void						*ft_memchr(const void *s, int c, size_t n);
void						ft_putchar(char c);
void						ft_putchar_fd(char c, int fd);
int							ft_nsize(int n);
char						*ft_itoa(int n);
void						ft_memdel(void **ap);
void						*ft_memalloc(size_t size);
char						*ft_strnew(size_t size);
void						ft_strdel(char **as);
void						ft_strclr(char *s);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s, void (*f)(unsigned int,
							char *));
char						*ft_strmap(char const *s, char (*f)(char));
int							ft_strequ(char const *s1, char const *s2);
int							ft_strnequ(char const *s1, char const *s2,
							size_t n);
char						*ft_strmapi(char const *s, char (*f)(unsigned int,
							char));
char						*ft_strsub(char const *s, unsigned int start,
							size_t len);
void						ft_putstr(char const *str);
void						ft_putstr_fd(char const *str, int fd);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strtrim(char const *s);
void						ft_putendl(char *s);
void						ft_putendl_fd(char *s, int fd);
void						ft_putnbr(int nbr);
void						ft_putnbr_fd(int nbr, int fd);
int							ft_count_words(char const *s, char c);
char						**ft_strsplit(char const *s, char c);
t_list						*ft_lstnew(void const *content,
							size_t content_size);
void						ft_lstdel(t_list **alst, void (*del)(void *,
							size_t));
void						ft_lstdelone(t_list **alst, void (*del)(void *,
							size_t));
t_list						*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void						ft_lstadd(t_list **alst, t_list *new);
void						ft_lstiter(t_list *lst, void (*f)(t_list *elem));
int							ft_base(const char c);
int							ft_value_of(char c);
int							ft_atoi_base(const char *str, int str_base);
int							ft_sqrtint(int nbr);
#endif
