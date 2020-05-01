/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:19:21 by abarthel          #+#    #+#             */
/*   Updated: 2020/05/01 10:16:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <term.h>

#include "libtc.h"

void	init_term(_Bool start)
{
	if (start)
	{
		tputs(tgetstr("ti", NULL), g_tc_fd, tc_output);
		tc_setnoncanonical(STDIN_FILENO, 0);
		tc_cursor(0);
	}
	else
	{
		tc_cursor(1);
		tputs(tgetstr("te", NULL), g_tc_fd, tc_output);
		tc_setnoncanonical(STDIN_FILENO, 1);
	}
}
