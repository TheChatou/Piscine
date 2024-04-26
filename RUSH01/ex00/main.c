#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i;
    int sign;
    int cti;

    i = 0;
    sign = 1;
    cti = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        cti *= 10;
        cti += str[i] - '0';
        i++;
    }
    cti *= sign;
    return (cti);
}
/*
int check_duplicate(int tab[4][4]) {
    int i, j, k;

    i = 0;
    while (i < 4) 
    {
        j = 0;
        while (j < 4) 
        {
            k = j + 1;
            while (k < 4) 
            {
                if (tab[i][j] == tab[i][k]) 
                {
                    return 0; 
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 1; 
}

int first_cond(int tab[4][4], int data[16])
{
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (data[k] == 1 && data[k + 4] == 4)
            {
                tab[i][j] = 4;
                tab[i][j + 1] = 3;
                tab[i][j + 2] = 2;
                tab[i][j + 3] = 1;
            }
            else if (data[k] == 4 && data[k + 4] == 1)
            {
                tab[i][j] = 1;
                tab[i][j + 1] = 2;
                tab[i][j + 2] = 3;
                tab[i][j + 3] = 4;
            }
            k++;
            j += 4;
        }
        i++;
    }
    return 0;
}
*/
int argvcheck(char *parstr)
{
    int i;
    int dig;
    int spc;

    i = 0;
    dig = 0;
    spc = 0;
    
    while (parstr[i] != '\0')
    {
        if (i % 2 == 0)
        {
            if (parstr[i] < '1' || parstr[i] > '4') 
            {
                return (0);
            }
            dig++;
        }
        else 
        {
            if (parstr[i] != ' ')
            {
                return (0);
            }
            spc++;
        }
        i++;
    }   

    if (dig + spc == 31)
    {
        return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int tmp;
    int data[16];
    int tab[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };

    i = 0;
    j = 0;
    if (argc == 2)
    {
        if (argvcheck(argv[1]) == 1)
        {
            i = 0;
            while (argv[1][i] != '\0')
            {
                if (i % 2 == 0)
                {
                    tmp = ft_atoi(argv[1] + i);
                    data[j] = tmp;
                    j++;
                }
                i++;
            }

            if (j != 16)
            {
                write(1, "Error\n", 6);
                return 1;
            }
/*
            if (check_duplicate(tab) == 0)
            {
                write(1, "Error\n", 6);
                return 1;
            }

            first_cond(tab, data);*/
            j = 0;
            while (j < 4)
            {
                i = 0;
                while (i < 4)
                {
                    ft_putchar(tab[j][i] + '0');
                    ft_putchar(' ');
                    i++;
                }
                ft_putchar('\n');
                j++;
            }
        }
        else
        {
            write(1, "Error\n", 6);
        }
    }
    else
    {
        write(1, "Error\n", 6);
    }
    return 0;
}