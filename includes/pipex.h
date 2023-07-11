/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:39:58 by lsalin            #+#    #+#             */
/*   Updated: 2022/10/06 11:43:29 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <sys/wait.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*find_path(char *cmd, char **envp);
void	first_child(char **argv, char **envp, int pipefd[2], int fd[2]);
void	second_child(char **argv, char **envp, int pipefd[2], int fd[2]);
void	error(void);
void	ft_putstr_fd(char *s, int fd);
void	ft_print_putstr(void);
void	free_strs(char *str, char **strs);
void	close_fd(int pipefd[2], int fd[2]);

#endif