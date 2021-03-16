# define BUF_SIZE 30000000

int ft_strlen(char *str)
{
    int num;
    
    while (*str)
    {
        str++;
        num++;
    }
    return (num);
}

int map_info_valid(char *nb)
{
    while (nb[i])
    {
        if (!(nb[i] >= '0' && nb[i] <= '9'))
            return (0);
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i;
    int result;

    if (!(map_info_valid(str)))
        return (0);
    i = 0;
    result = 0;
    while (str[i])
        result = result * 10 + str[i] - '0';
    return (result);
}

t_map_info *get_map_info(char *fl)
{
    t_map_info *a;
    int back;
    int nb;

    back = ft_strlen(fl);
    a->empty = fl[back - 3];
    a->obstacle = fl[back - 2];
    a->fill = fl[back - 1];
    fl[back - 1] = '\0';
    a->map_lines = ft_atoi(fl);
    return (a);
}

char *get_standard_input()
{
    char *buf;
    char *str;
    int size;
    int l_len;
    
    buf = (char*)malloc(sizeof(char) * BUF_SIZE);
    str = (char*)malloc(sizeof(char) * BUF_SIZE);
    *buf = '\0';
    l_len = read(0, str, BUF_SIZE);
    str[l_len] = '\0';
    size = 0;
    while (l_len > 0)
    {
        l_len = read(0, str, BUF_SIZE);
        size = size + ft_strcat(&buf, str);
        str[l_len] = '\0';
    }
    free(str);
    if (size == 0)
    {
        free(buf);
        return (0);
    }
    buf[size] = '\0';
    return (buf);
 }

 