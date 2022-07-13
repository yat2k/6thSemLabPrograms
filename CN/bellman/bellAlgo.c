#include <stdio.h>
struct
{
    int dist[20];
    int from[20];
} a[20];

int main()
{
    int nodes;
    int cost[20][20];
    printf("Enter number of nodes: ");
    scanf("%d", &nodes);
    printf("\nEnter Cost Matrix:\n");
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            scanf("%d", &cost[i][j]);
            cost[i][i] = 0;
            a[i].dist[j] = cost[i][j];
            a[i].from[j] = j;
        }
    }
    int count = 0;
    do
    {
        count = 0;
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
            {
                for (int k = 0; k < nodes; k++)
                {
                    if (a[i].dist[j] > cost[i][k] + a[k].dist[j])
                    {
                        a[i].dist[j] = a[i].dist[k] + a[k].dist[j];
                        a[i].from[j] = k;
                        count++;
                    }
                }
            }
        }

    } while (count != 0);

    for (int i = 0; i < nodes; i++)
    {
        printf("\n\nFor Router - %d ", i + 1);
        for (int j = 0; j < nodes; j++)
        {
            printf("\t\nNode--> %d Via--> %d Distance--> %d ", j + 1, a[i].from[j] + 1, a[i].dist[j]);
        }
    }

    printf("\n\nExecution Complete\n\n");
    return 0;
}
