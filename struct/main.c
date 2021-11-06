/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:25:00 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/03 22:44:13 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "struct_personne.h"

int main (void)
{
	struct PErsonne joueur[2];
	int i = 0;

	while(i < 2)
	{
	printf("\nVotre nom:");
	scanf("%s", joueur[i].nom);
	printf("\nVotre prenom:");
	scanf("%s", joueur[i].prenom);
	printf("\nVotre addresse:");
	scanf("%s", joueur[i].addresse);
	printf("\nVotre age:");
	scanf("%d", &joueur[i].age);
	printf("\nVotre genre:");
	scanf("%d", &joueur[i].genre);
	i++;
	}
	printf("\n");
	i = 0;

	while(i < 2)
	{
	printf("joueur %d:\t", i);
	printf("%s,\t", joueur[i].nom);
	printf("%s\t", joueur[i].prenom);
	printf("%s\t", joueur[i].addresse);
	printf("%d\t", joueur[i].age);
	printf("%d\t", joueur[i].genre);
	printf("\n");
	i++;
	}
return(0);
}