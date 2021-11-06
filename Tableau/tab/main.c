/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:40:54 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/03 18:09:03 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "tableau.h"

int main (void)
{
	int t = 10, tableau[10] = {68, 38, 30, 15, 25, 45, 22, 10, 46, 72};
	int tableau2 [10] = {100, 200};

	printf("somme tableau = %d\n", somme_tab(tableau, t));
	printf("moyen tableau = %f\n", moyenne_tab(tableau, t));
	cp_tab(tableau, tableau2, t);
	printftab(tableau, t);
	printftab(tableau2, t);
	maxtab(tableau2, t, 38);
	printftab(tableau2, t);
	printf("ordonner tableau \n");
	ordtab(tableau, t);
	ordtab(tableau2, t);
	printftab(tableau, t);
	printftab(tableau2, t);
	return (0);
}
