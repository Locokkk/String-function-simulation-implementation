#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strlen的模拟实现
int my_strlen(const char *str)
{//计数器法
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen(const char *str)
{  //递归法
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
 
}

int my_strlen(const char *s)
{   //指针的方式
	char *p = s;
    while (*p != '\0')
{
		p++;
		}
	return p - s;
}

//strcpy的模拟实现
char * my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest&&src);
	while (*src!='\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = *src;
	return ret;
}


//strcat的模拟实现
char *my_strcat(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest&&src);
	while (*dest)
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest= *src;
		++dest;
		++src;
	}
	return ret;
}


//strstr的模拟实现
char *my_strstr(const char *str1, const char *str2)
{
	assert(str1&&str2);
	char *cp = (char *)str1;
	char *substr = (char *)str2;
	char *str = NULL;

	if (*str2 == '\0')
	{
		return NULL;
	}
	while (*cp)
	{
		str = cp;
		substr = str2;
		while (*substr&&*str && (*str == *substr))
		{
			str++;
			substr++;
		}
		if (*substr == '\0')
		{
			return cp;
		}
		cp++;
	}
}

//strcmp的模拟实现
int my_strcmp(const char *dest, const char *src)
{
	int ret = 0;
	assert(dest&&src);
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dest) && *dest)
	{
		++dest;
		++src;
	}
		if (ret < 0)
			ret = -1;
		else if (ret > 0)
			ret = 1;
		return(ret);
	}
//int main()
//{
//	const char *dest= "hsdfghjk";
//	const char *src= "fghhhhhhhhhhhh";
//	printf("%d\n", my_strcmp(dest, src));
//	system("pause");
//	return 0;
//}
