/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:09:12 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/03 23:31:18 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	FILE* fichier;
	fichier = fopen("test.txt", "w+");

	if (fichier != NULL)
	{
		fputc('c', fichier);
		fputs("\nHELLO WORD!", fichier);
		fclose(fichier);
	}
	else
	{
		printf("ERREUR ouverture de fichier immposible!\n");
	}
	return(0);
}