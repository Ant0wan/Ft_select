
#include <unistd.h>
#include <termcap.h>

int	tc_output(int c)
{
	if (write(STDOUT_FILENO, &c, 1) != 1)
		return (-1);
	else
		return (c);
}