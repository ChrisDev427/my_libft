/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:21:09 by chmassa           #+#    #+#             */
/*   Updated: 2023/07/14 12:32:11 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//**** struct lst *************************************************************
typedef struct s_list
{
	char			*str;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;
//----------------------------------------------------------------------
//------ str -----------------------------------------------------------
//----------------------------------------------------------------------
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_str_chr(const char *s, int c);
int					ft_str_rchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strdup_free(const char *s1);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strtrim_free_s1(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free_s1(char const *s1, char const *s2);
char				*ft_strjoin_free_s1_s2(char const *s1, char const *s2);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*get_next_line(int fd);
void				ft_bzero(void *s, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_strrev(char *str);
void				ft_strcpy(char *dst, const char *src);
int					ft_atoi(const char *str);
unsigned long long	ft_atoi_llu(const char *str);
int					ft_atoi_base(const char *str, const char *base);
int					ft_strncmp(const char *s1, const char *s2,	size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_found_char(const char *s, char c);
int					ft_strscmp(char **strtab, char *s);

//----------------------------------------------------------------------
//------ memory --------------------------------------------------------
//----------------------------------------------------------------------
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
//----------------------------------------------------------------------
//------ is ------------------------------------------------------------
//----------------------------------------------------------------------
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspaces(char c);
int					ft_str_isspaces(char *str);
//----------------------------------------------------------------------
//------ to ------------------------------------------------------------
//----------------------------------------------------------------------
int					ft_tolower(int c);
int					ft_toupper(int c);
//----------------------------------------------------------------------
//------ print -----------------------------------------------------------
//----------------------------------------------------------------------
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_base(long long nbr, const char *base);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putendl(char *s);
void				ft_print_strs_array(char **strs);
//----------------------------------------------------------------------
//------ free ----------------------------------------------------------
//----------------------------------------------------------------------
void				free_int_tab2d(int **tab, int size);
void				free_str_tab(char **tab);
//----------------------------------------------------------------------
//------ tab -----------------------------------------------------------
//----------------------------------------------------------------------
void				ft_rev_int_tab(int *tab, size_t size);
void				ft_sort_int_tab(int *tab, size_t size);
int					ft_nb_digit(long int nb);
int					ft_strtab_size(char **tab);
char				**ft_strtab_dup(char **tab);
int					ft_biggest_str_in_tab(char **tab);
//----------------------------------------------------------------------
//------ ft_printf -----------------------------------------------------
//----------------------------------------------------------------------
int					ft_putstr_ptf(char *s);
int					ft_printf(const char *s, ...);
int					ft_flag_linker(char flag, va_list list);
int					ft_print_x(unsigned int n, char *base);
int					ft_print_u(unsigned int n);
int					ft_print_p(unsigned long long int n, char *base);
int					ft_print_di(int nb);
//-----------------------------------------------------------------------------
//------ linked lists ---------------------------------------------------------
//-----------------------------------------------------------------------------
//**** lst new node ************************************************************
t_list				*ft_lstnew(char *str);
//**** lst new tools ***********************************************************
t_list				*ft_lstcpy(t_list **lst);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				ft_sortlst_str(t_list **lst);
char				*ft_lst_to_str(t_list *lst);
char				**ft_lst_to_char_tab(t_list *lst);
int					ft_lst_strcmp(t_list *lst, char *s);
//***** lstadd *****************************************************************
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_position(t_list **lst, t_list *new, int position);
void				ft_lstadd_back(t_list **lst, t_list *new);
//***** lstdel *****************************************************************
void				ft_lstdel_front(t_list **lst);
void				ft_lstdel_back(t_list **lst);
void				ft_lstdel_position(t_list **lst, int position);
void				ft_lstdel_actual(t_list **lst, t_list *tmp);
void				ft_lstdel_all(t_list **lst);
void				ft_lstdel_current(t_list **lst);
//***** lstprint ***************************************************************
void				ft_lstprint(t_list *lst);
void				ft_lstprint_from_head(t_list *lst);
void				ft_lstprint_from_tail(t_list *lst);
#endif