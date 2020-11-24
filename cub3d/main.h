#ifndef MAIN_H
# define MAIN_H

# include "types.h"
# include "errors.h"
# define BUFFER_SIZE 1

int			valid_args(int count, char *params[]);
int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
void		*ft_memmove(void *dst, const void *src, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		**reader_input_data(char *file_name);
char		**ft_split(char const *s, char c);
t_setting	*setting_inicializ(char *file_name);
t_setting	*switch_set_texture(char *line, t_setting *set);
char	    *ft_substr(char const *s, unsigned int start, size_t len);
t_setting	*switch_set_size(char *line, t_setting *set);
t_setting	*switch_set_map(char *line, t_setting *set, int iter, char **data);
t_setting	*switch_set_color(char *line, t_setting *set);
int		    ft_atoi(const char *str);
int 		count_len_map(char **data, int iter);
int         check_valid_set(t_setting *set);
int         is_open_file(char *file_name);


#endif
