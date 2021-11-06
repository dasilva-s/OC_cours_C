/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imp_pendu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:21:01 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/16 01:59:14 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include"imp_pendu.h"

void imp_pendu (int i)
{

if(i == 9)
{
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 8)
{
printf("\t____\n");
printf("\t|/\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 7)
{
printf("\t__________\n");
printf("\t|/\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 6)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t \n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 5)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 4)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\t | \n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 3)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\t/| \n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 2)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\t/|\\ \n");
printf("\t|\n");
printf("\t|\n");
printf("\n\n");
}

if(i == 1)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\t/|\\ \n");
printf("\t|\t/  \n");
printf("\t|\n");
printf("\n\n");
}

if(i == 0)
{
printf("\t__________\n");
printf("\t|/\t |\n");
printf("\t|\t O\n");
printf("\t|\t/|\\ \n");
printf("\t|\t/ \\ \n");
printf("\t|\n");
printf("\n\n");
}

}