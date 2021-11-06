/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:40:54 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/03 17:57:38 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int somme_tab(int tab[], int t_tab)
{
	int somme = 0;
	int i = 0;

	while(i < t_tab)
	{
		somme += tab[i];
		i++;
	}
	return(somme);
}

double moyenne_tab(int tab[], int t_tab)
{
	double moy = 0;
	int i = 0;

	while(i < t_tab)
	{
		moy += tab[i];
		i++;
	}
	moy = moy / t_tab; 
	return(moy);
}

void cp_tab(int tab[], int cptab[], int t_tab)
{
	int i = 0;

	while(i < t_tab)
	{
		cptab[i] = tab [i];
		i++;
	}
}

void printftab(int tab[], int t_tab)
{
	int i = 0;
	while(i< t_tab)
	{
		printf("%d,\t", tab[i]);
		i++;
	}
	printf("\n");
}

void maxtab(int tab[], int t_tab, int max)
{
	int i =0;
	while(i < t_tab)
	{
		if (tab[i] > max)
			tab[i] = 0;
	i++;
	}
}

void ordtab(int tab[], int t_tab)
{
	int i = 0, y = 0, tmp = 0;

	while(i < t_tab)
	{
		y = i + 1;
		while(y < t_tab)
		{
			if(tab[i] > tab[y])
			{
				tmp = tab[i];
				tab[i] = tab[y];
				tab[y] = tmp;
			}
			y++;
		}
		i++;
	}
}


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
