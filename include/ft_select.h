/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:40:07 by abarthel          #+#    #+#             */
/*   Updated: 2019/09/06 17:01:05 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

struct	s_select
{
	unsigned short	len:14;
	unsigned short	col:14;
	unsigned short	row:14;
	_Bool			isselected:1;
	_Bool			isunderline:1;
};

struct	s_display
{
	unsigned short	maxcol;
	unsigned short	maxrow;
	unsigned short	wininfo_col;
	unsigned short	wininfo_row;
};

struct s_display	get_window_info(void);

#endif
