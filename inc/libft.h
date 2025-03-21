/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:46:51 by lpaysant          #+#    #+#             */
/*   Updated: 2025/03/21 18:38:43 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *string, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *buf, int c, size_t count);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t elementcount, size_t elementsize);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_printf(const char *format, ...);
ssize_t				whichformat(const char **format, ssize_t *count,
						va_list ap);
ssize_t				printchar(const char **format, ssize_t *count, va_list ap);
ssize_t				printint(const char **format, ssize_t *count, va_list ap);
ssize_t				printptr(char *res, const char **format, ssize_t *count);
int					ft_putchar_prtf(int c, int fd);
int					ft_putstr_prtf(char *str, int fd);
int					ft_putnbr_prtf(int n, int fd, ssize_t *count);
int					ft_nbrbase(unsigned long nbr, const char *base, int fd,
						ssize_t *count);
char				*get_next_line(int fd);
char				*linecheck(char *buffer, char **buffrest, int fd, int i);
char				*new_line(char **buffrest, char *buffer, int i, char *line);
char				*create_line(char *buffer, char *line);
char				*get_buffrest(char *buffer, char **buffrest, int *i);
char				*read_buffer(int fd, char **buffrest);
char				*ft_strcpy(char *dest, const char *src);
size_t				ft_strlen_gnl(const char *s);
char				*ft_strjoin_gnl(char *s1, char *s2);
char				*ft_strcpy_gnl(char *dest, const char *src);

#endif
