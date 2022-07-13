#include <stdio.h>
int main()
{
    int data[10], count = 0;
    int recd[10], p, p1, p2, p3, i;

    printf("Enter 4 bits of data one by one\n");
    scanf("%d", &data[0]);
    scanf("%d", &data[1]);
    scanf("%d", &data[2]);
    scanf("%d", &data[4]);

    data[6] = data[0] ^ data[2] ^ data[4];
    data[5] = data[0] ^ data[1] ^ data[4];
    data[3] = data[0] ^ data[1] ^ data[2];

    printf("\nEncoded data is\n");
    for (i = 0; i < 7; i++)
        printf("%d", data[i]);

    printf("\n\nDetection and Correction of Error for the received data\nEnter the data received data one by one \n");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &recd[i]);
    }

    p1 = recd[6] ^ recd[4] ^ recd[2] ^ recd[0];
    p2 = recd[5] ^ recd[4] ^ recd[1] ^ recd[0];
    p3 = recd[3] ^ recd[2] ^ recd[1] ^ recd[0];

    if (p1 == 1 || p2 == 1 || p3 == 1)
    {
        printf("\nERROR DETECTED!");
        p = p3 * 4 + p2 * 2 + p1;
        printf("\nError bit %d", (8 - p));

        printf("\n\nReceived data before correction\n");
        for (int i = 0; i < 7; i++)
        {
            printf("%d", recd[i]);
        }

        if (recd[7 - p] == 0)
            recd[7 - p] = 1;
        else
            recd[7 - p] = 0;

        printf("\n\nReceived data after correction\n");

        for (int i = 0; i < 7; i++)
        {
            printf("%d", recd[i]);
        }
    }
    else
    {

        printf("\n\nEncoded data and Received data both matches\n");
        for (int i = 0; i < 7; i++)
        {
            printf("%d", recd[i]);
        }
        printf("\n\nNO ERROR FOUND!\n\n");
    }

    return 0;
}
