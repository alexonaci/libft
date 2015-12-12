char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (str == NULL)
		return (NULL);
	if (str)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}
