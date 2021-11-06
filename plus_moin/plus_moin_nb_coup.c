/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_moin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 05:00:05 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/02 16:00:13 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<time.h>

const int max = 100, min = 1;
int nb_myster (int n, int n_myster);

int nb_myster (int n, int n_myster)
{
	printf("entre un nombre entre 1 et 100: ");
	scanf("%d", &n);
	if (n == n_myster)
	{
		printf("BRAVO!!! le nombre myster est %d. \n", n_myster);
		return(2);
	}
	else if (n < n_myster)
	{
		printf("C'est plus!!!\n");
		return (1);
	}
	else if (n > n_myster)
	{
		printf("C'est moin!!!\n");
		return (1);
	}
	return (0);
}

int main (void)
{
	srand(time(NULL));
	int nombre_myster = (rand() % (max - min + 1)) + min;
	int nb = 0;
	int i = 1; 

	printf("HELLO\n");
	while(nb_myster(nb, nombre_myster) != 2)
	{
		i++;
	}
	printf("vous avez trouvez en %d coup.\n", i);
	return(0);
}
