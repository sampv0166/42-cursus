#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *ptr, int x, size_t n);

int main ()
{
	//char str[20] = "dh\0edllo";
	
	//printf("%d \n %s ", ft_tolower(1) , "ft_tolower");
	//char *ptr;	
	//ptr = ft_strrchr(str , '\0');
	//printf("%c" ,ft_strrchr(str , 'n'));

	//while(*ptr)
	//{
	//	printf("%c" ,*ptr);
	//	ptr--;
	//}
	//

//	printf("%d" , strncmp("h" , "hi" , 0));
//	printf("%d" , ft_strncmp("h" , "hi" , 0));

//	char str[50] = "GeeksForGeeks is for programming geeks.";

//	printf("%s\n" , ft_memset(str + 13 , '.' , 8*sizeof(char)));		
//	printf("%s" , memset(str + 13 , '.' ,8*sizeof(char)));

	char str[] = "hello";
	printf("%s \n" , str);
	printf("%s" ,memset(str , 48 , 7 ) );

	return 0 ;
}


