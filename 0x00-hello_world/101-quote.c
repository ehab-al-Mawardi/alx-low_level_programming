#include <unistd.h>

/**
* main - starting point
*
* Description: printing quote using write function in c program
*
* write(int fd, const void *buf, size_t count)
*
* Return: 1 (not Successful)
*
*/

int main(void)
{
	char quo[] = "and that piece of art is useful \"- Dora Korpar, 2015-10-19 ";

	write(2, quo, 59);
	return (1);

}
