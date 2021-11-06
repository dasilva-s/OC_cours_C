/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:42:55 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/16 01:59:47 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdlib.h>
//#include<stdio.h>
//#include<unistd.h>
//#include<string.h>
#include"fonction.h"
#include"imp_pendu.h"


int main(void)
{

char mot[T_MOT] = "";

int nblettre = 0;
char *motx = malloc((nblettre + 1)* sizeof(char));
int nbcoup = 10;
char lx;
lx = '0';
ft_mots_hasard(mot);
nblettre = strlen(mot);
ft_putxstr (motx, nblettre);

printf("\nBienvenu dans le pendu!\n\n");

while (nbcoup > 0)
{
	imp_pendu (nbcoup);
	printf("il vous reste %d chance.\n", nbcoup);
	printf("Quel est le mot secret? %s\n", motx);
	printf("Proposez une lettre: ");
	lx = entrerlettre();
	if (cheklettre(lx, mot, motx) == 0)
		nbcoup--;
	else if (strcmp( mot, motx) == 0)
	{
		printf("\n\tBRAVO!!! \nvous avez trouvez le mot secret : %s.\n\n", motx);
		break;
	}
	printf("\n\n");



}

if (nbcoup == 0)
{
	imp_pendu (nbcoup);
	printf("\tP E N D U !!!\n vous avez perdu!!!\n le mot secret est : %s\n\n", mot);
}

free(motx);
printf("voulez vous rejouez? Y/N :");
if(entrerlettre() == 'Y')
	main();
return (0);
}