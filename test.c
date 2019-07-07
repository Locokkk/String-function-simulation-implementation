#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strlen��ģ��ʵ��
int my_strlen(const char *str)
{//��������
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen(const char *str)
{  //�ݹ鷨
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
{   //ָ��ķ�ʽ
	char *p = s;
    while (*p != '\0')
{
		p++;
		}
	return p - s;
}

//strcpy��ģ��ʵ��
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


//strcat��ģ��ʵ��
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


//strstr��ģ��ʵ��
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

//strcmp��ģ��ʵ��
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
