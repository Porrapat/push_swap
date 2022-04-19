#include <unistd.h>

void print_bits(unsigned char num)
{
	char i;
	char c;

	i = 7;
    while(i >= 0)
	{
		c = (num >> i) & 1;
		if (c == 0)
		{
			write(1, "0", 1);
		}
		else
		{
			write(1, "1", 1);
		}
		i--;
    }
	write(1, "\n", 1);
}

int main()
{
	print_bits(0);
}