/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_convertor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:19:53 by amaroni           #+#    #+#             */
/*   Updated: 2021/03/13 13:43:57 by amaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_convertor(char c)
{
	if (c == 'c'
	|| c == 's'
	|| c == 'd'
	|| c == 'i'
	|| c == 'x'
	|| c == 'X'
	|| c == 'u'
	|| c == 'p')
		return (1);
	return (0);
}
