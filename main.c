/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papilaz <papilaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:24:00 by papilaz           #+#    #+#             */
/*   Updated: 2025/11/11 14:34:01 by papilaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ma_fonction(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	else
		return (c);
}
// int	main(int argc, char **argv)
// {
// 	// size_t n = 10;
// 	// char *tab = "hello";
// 	// char c = 'o';
// 	// char *newtab;
// 	// // char dest[n];
// 	// // int	len;
// 	// // len = 0;
// 	// newtab = ft_memcmp(tab, c, n);
// 	// printf("%s\n", tab);
// 	// printf("%s\n", newtab);
// 	// len = ft_strlcpy(dest, tab, n);

// 	// printf("%s \nlen = %d\n", dest, len);
// 	// ft_memcpy(dest, tab, n);
// 	// printf("%s \n", dest);

// 	// printf("%c\n", ft_tolower('c'));
// 	// printf("%c\n", ft_toupper('c'));

// 	// printf("%c\n", ft_tolower('B'));
// 	// printf("%c\n", ft_toupper('B'));

// 	// printf("%s", ft_strrchr("adqwldqwl", 'l'));

// 	// printf("%d", ft_strncmp("dddda", "ddaa", 10));

// 	// char	*s1 = "cccca";
// 	// char	*s2 = "cccco";
// 	// printf("%d", ft_memcmp(s1, s2, 1));

// 	// char *str = "Hello World";
// 	// char *result;

// 	// result = ft_strnstr(str, "ge", 50);
// 	// printf("%s", result);

// 	// printf("faux : %d \nvrais : %d\n", ft_atoi(argv[1]), atoi(argv[1]));

// 	// char	*tab;

// 	// tab = ft_calloc(50, 5);

// 	// int	i = 0;
// 	// while (tab[i])
// 	// {
// 	// 	printf("%d", i);
// 	// 	i++;
// 	// }

// 	// char	*tab;

// 	// tab = ft_comptword("hello ca va ?", " ");

// 	// printf("%s", tab);

// 	// printf("%d", ft_comptword("hello ca va ?", ' ', 1));

// 	// test split

// 	// char **tab;
// 	// char *src = "hello comment tu va ?";
// 	// char sep = ' ';
// 	// int i;

// 	// i = 0;
// 	// tab = ft_split(src, sep);

// 	// while (tab[i])
// 	// {
// 	// 	printf("tab(%d) : %s\n", i, tab[i]);
// 	// 	free(tab[i]);
// 	// 	i++;
// 	// }
// 	// free(tab);

// 	// printf("%d", ft_compt_all_number(-1));

// 	// char *res;

// 	// res = ft_strmapi("hello", ma_fonction);
// 	// printf("%s\n", res);
// 	// free(res);
// 	// ft_putstr_fd("dwq\n", 2);

// 	// ft_putnbr_fd(-25, 1);
// 	// char *big = "abcdef";
// 	// char *s1 = "\xff\xaa\xde\x12";
// 	// char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
// 	// size_t size = 4;
// 	// int i1 = ((memcmp(s1, s2, size) > 0) ? 1 : ((memcmp(s1, s2, size) < 0) ?
// 				// -1 : 0));
// 	// int i2 = ((ft_memcmp(s1, s2, size) > 0) ? 1 : ((ft_memcmp(s1, s2,
// 						// size) < 0) ? -1 : 0));

// 	// printf("reel %d \nfake %d \n", i1, i2);

// 	// char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	// // char *s2 = "Hello \t  Please\n Trim me !";
// 	// char *ret = ft_strtrim(s1, " \n\t");

// 	// printf("%s", ret);

//  	// char *s = "split  ||this|for|me|||||!|";
//  	// int i = 0;
//  	// char **result = ft_split(s, '|');

//  	// while (result[i])
//  	// {
// 	// 	printf("%s\n", result[i]);

//  	// 	free(result[i]);
//  	// 	i++;
//  	// }
//  	// free(result);

// 	// printf("%s", ft_itoa(-2147483648));
// 	// printf("%s", ft_substr("hola", -1, 18446744073709551615));

// 	(void)argv;
// 	(void)argc;
// }

void	ft_del(void * tab)
{	
	free(tab);
}

int	main(void)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*node1;

	list = NULL;
	printf("=== Test ft_lstnew ===\n");
	node1 = ft_lstnew("Premier");
	printf("Content: %s\n", (char *)node1->content);
	printf("Next: %p\n\n", (void *)node1->next);
	
	
	
	printf("=== Test ft_lstadd_front ===\n");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, ft_lstnew("Deuxieme"));
	ft_lstadd_front(&list, ft_lstnew("hello"));
	ft_lstadd_front(&list, ft_lstnew("Troisieme"));
	ft_lstadd_back(&list, ft_lstnew("comment tu va ?"));
	
	// ft_lstdelone(node1, ft_bzero);
		
	t_list	*last = ft_lstlast(list);
	printf("Liste:\n");
	tmp = list;
	while (tmp)
	{
		printf("- %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&list, &ft_del);
	printf("\ntaille noed %d\n\n", ft_lstsize(list));

	printf("\nlast element noed %s\n\n", (char *)last->content);
	return (0);
}
