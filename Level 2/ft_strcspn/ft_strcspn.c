size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;
    const char *tmp;
    while (*s)
    {
        tmp = reject;
        while (*tmp)
        {
            if (*s == *tmp)
                return (count);
            tmp++;
        }
        s++;
        count++;
    }
    return (count);
}
