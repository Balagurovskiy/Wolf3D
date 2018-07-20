/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xy.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obalagur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:40:29 by obalagur          #+#    #+#             */
/*   Updated: 2018/06/29 13:40:37 by obalagur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

t_xy		set_xy(double x, double y)
{
	t_xy	xy;

	xy.dx = x;
	xy.dy = y;
	xy.x = I(x);	
	xy.y = I(y);
	return (xy);
}
