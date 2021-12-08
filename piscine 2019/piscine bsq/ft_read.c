/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonaert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:57:30 by fbonaert          #+#    #+#             */
/*   Updated: 2019/11/18 14:02:42 by fbonaert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_read(char *filepath)
{
	int     fd;
	int     buffersize;
	char    *fichier;
	int     fichierlen;
	char    buffer[51];

	fichierlen = 0;
	fd = open(filepath, O_RDONLY);
	buffersize = 50;
	while (buffersize == 50)
	{
		buffersize = read(fd, buffer, buffersize);
		fichierlen = fichierlen + buffersize;
	}
	if (!(fichier = (char*)malloc(sizeof(char) * fichierlen + 1)))
		return (0);
	fichier[fichierlen] = '\0';
	close(fd);
	fd = open(filepath, O_RDONLY);
	if (!(read(fd, fichier, fichierlen)))
		return (0);
	close(fd);
	return (fichier);
}
