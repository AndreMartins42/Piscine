char *ft_strnstr(const char *big, const char *little, unsigned int len)
{
    unsigned int  i;  
    unsigned int  j;


    i = 0;
    if (little[i] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && len > i)
    {
        j = 0;
        while (big[i + j] != '\0' && big[i + j] == little[j])
        {
            if (little[j + 1] == '\0')
                return ((char *)big);
            j++;
        }
        i++;
    }
	return(0);
}


#include <stdio.h>
int main()
{
    char c[] = "ola tudo bem?";
    char d[] = "tudo";
    char *result = ft_strnstr(c, d, 5);

    printf("%s\n", result);

    return 0;
}
