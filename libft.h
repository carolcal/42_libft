/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:24:50 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 18:12:17 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

    #include <stdlib.h>

    int	ft_isalpha(int c);
    int	ft_isdigit(int c);
    int	ft_isalnum(int c);
    int	ft_isascii(int c);
    int	ft_isprint(int c);
    size_t	ft_strlen(const char *s);
    void	*ft_memset(void *s, int c, size_t n);
    void	ft_bzero(void *s, size_t n);
    void	*ft_memcpy(void *dest, const void *src, size_t n);
    void	*ft_memmove(void *dest, const void *src, size_t n);

    size_t ft_strlcpy(char *dest, const char *src, size_t size);
    size_t	ft_strlcat(char *dest, const char *src, size_t size);
    int	ft_toupper(int c);
    int	ft_tolower(int c);
#endif
