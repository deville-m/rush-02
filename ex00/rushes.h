/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:49:40 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 19:13:36 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHES_H
# define RUSHES_H

char	rush00(int i, int j, int i_max, int j_max);
char	rush01(int i, int j, int i_max, int j_max);
char	rush02(int i, int j, int i_max, int j_max);
char	rush03(int i, int j, int i_max, int j_max);
char	rush04(int i, int j, int i_max, int j_max);

typedef char (*rushes)(int, int, int, int);

rushes			g_rushtab[] =
{
	rush00,
	rush01,
	rush02,
	rush03,
	rush04
};

#endif
