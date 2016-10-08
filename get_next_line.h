/*
** get_next_line.h for  in /home/belfio_u/rendu/MUL_2014_fdf/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sat Nov 22 20:40:34 2014 ugo belfiore
** Last update Sat Nov 22 21:02:50 2014 ugo belfiore
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define LEN 4096

char	*reset_buff(char *buff);
char	*my_strcat2(char *src1, char *src2, int ret);
char	*read_loop(const int fd, char *result);
char	*get_next_line(const int fd);
char	*my_strdup2(char *str);

#endif /* !GET_NEXT_LINE_H_ */
