#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void DFS(char arr[], int d, int value, int len)
{
	arr[d] = ++value;
	if (arr[d] === '9')
	{
		arr[d-1]++;
		
		
	}
	



}

void ft_print_combn(int n)
{
	char arr[9];
	arr[0] = '0';
	while(value < (9 - n))
	{
		DFS(arr, i, ,n)
		arr[0]++;
	}

}
