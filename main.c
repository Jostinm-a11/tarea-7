#include <stdio.h>

int main()
{
    int n, num = 0;

    printf("Ingrese cualquier número para imprimir en palabras: ");
    scanf("%d", &n);

    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }


    while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                printf("cero ");
                break;
            case 1:
                printf("uno ");
                break;
            case 2:
                printf("dos ");
                break;
            case 3:
                printf("tres ");
                break;
            case 4:
                printf("cuatro ");
                break;
            case 5:
                printf("cinco ");
                break;
            case 6:
                printf("seis ");
                break;
            case 7:
                printf("Siete ");
                break;
            case 8:
                printf("ocho ");
                break;
            case 9:
                printf("nueve ");
                break;
        }

        num = num / 10;
    }

    return 0;
}
