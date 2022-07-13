#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, w, i = 1, j = 0;
    int total = 0;
    printf("Enter the number of frames : \n");
    scanf("%d", &n);
    printf("Enter the Window Size : \n");
    scanf("%d", &w);
    while (i <= n)
    {
        int x = 0;
        for (j = i; j < i + w && j <= n; j++)
        {
            printf("Sent Frame %d\n ", j);
            total++;
        }
        for (j = i; j < i + w && j <= n; j++)
        {
            int flag = rand() % 2;
            if (!flag)
            {
                printf("Acknowledgment for Frame %d\n", j);
                x++;
            }
            else
            {
                printf("Frame %d Not Received\n", j);
                printf("Retransmitting Window");
                break;
            }
        }
        printf("\n");
        i += x;
    }
    printf("Total number of transmissions : %d", total);
    return 0;
}
