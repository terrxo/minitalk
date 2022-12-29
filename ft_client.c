#include "ft_minitalk.h"

int send_bit(int pid, int byte)
{
    int bit = 0;
    while (bit < 8)
    {
        if (byte & 1 << bit)
        {
            if (kill(pid, SIGUSR1) == -1)

                return 1;
        }
        else
        {
            if (kill(pid, SIGUSR2) == -1)
                return 1;
        }
        usleep(1000);
        bit++;
    }
    return 0;
}

int send_message(int pid, char *msg_str)
{
    while (*msg_str)
    {
        if (send_bit(pid, *msg_str) == 1)
            return (1);
        msg_str++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int pid;
    if (ac == 3)
    {
        if ((pid = ft_atoi(av[1])) == 0)
            return (ft_printf("Problem parsing Process ID..\n"));
        if (send_message(pid, av[2]) == 1)
            return (ft_printf("Problem sending message to server..\n"));
        return 0;
    }
    return (ft_printf("Please use the correct number of parameters..\n"));
}