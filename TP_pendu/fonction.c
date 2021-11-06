/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:42:47 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/16 01:38:26 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"


void ft_putxstr (char *str, int nb)
{
	int i = 0;

	while (i < nb)
	{
		str[i] = '*';
		i++;
	}
	str[i] = '\0';

}

char entrerlettre(void)
{
	char car = '0';

	car = getchar();
	while (getchar() != '\n') ;
	if(!((car >= 'A' && car <= 'Z') || (car >= 'a' && car <= 'z')))
	{
		printf("Erreure, entrer une lettre: ");
		car = entrerlettre();
	}

	car = toupper(car);
	return car;
}

int cheklettre(char car,char str[], char *strx)
{
	int i = 0;
	int a = 0;

	while(str[i])
	{
		if(car == str[i])
		{
			strx[i] = car;
			a++;
		}
		i++;
	}
	if (a > 0)
	{
		printf("\nBravo vous avez trouvez la lettre %c\n", car);
	}
	return (a);
}

char *ft_mots_hasard(char strmot[])
{
	int nblignefichier = 0;
	int nblignemot = 0;
	int nbl = 0;
	FILE* dico = NULL; 
	dico = fopen("pendu.txt","r");
	if (dico == NULL)
		{
			printf("\nErreur ouvertur fichier\n");
			exit(0);
		}
	else
	{
		nblignefichier = ft_nblignefichier(dico);
		srand(time(NULL));
		nblignemot = (rand() % (nblignefichier - 1 + 1)) + 1;
		ft_alaligne_x(dico, nblignemot);
		fgets(strmot, T_MOT, dico);
		rewind(dico);
		if(nblignemot != 10)
		{
			nbl = strlen(strmot);
			strmot[(nbl - 1)] = '\0';
		}
	}


	fclose(dico);
	return strmot;
}

int ft_nblignefichier(FILE* fichier)
{
	int car = 0;
	int nbligne = 1;

	rewind(fichier);
	while(car != EOF)
	{
		car = fgetc(fichier);
		if(car == '\n')
			nbligne++;
	}
	rewind(fichier);
	return (nbligne);
}

int ft_alaligne_x(FILE* fichier, int ligne)
{
	int car = 0;

	rewind(fichier);
	ligne--;
	if(ligne < 1)
	{
		return(0);
	}
	while(car != EOF && ligne != 0)
	{
		car = fgetc(fichier);
		if(car == '\n')
		{
			ligne--;
		}
	}
}

