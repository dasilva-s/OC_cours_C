/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <dasilva_s@ik.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:42:52 by stde-alm          #+#    #+#             */
/*   Updated: 2021/10/16 01:38:30 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FONCTION
#define DEF_FONCTION
#define T_MOT 30
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

void ft_putxstr (char *str, int nb);
char entrerlettre(void);
int cheklettre(char car,char str[], char *strx);
char *ft_mots_hasard(char strmot[]);
int ft_nblignefichier(FILE* fichier);
int ft_alaligne_x(FILE* fichier, int ligne);

#endif