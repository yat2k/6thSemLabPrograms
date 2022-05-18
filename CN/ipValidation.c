#include<stdio.h>
#include<stdlib.h>

int main()
{
        int a[4],i;
        char dot;

        printf("Enter your IP address: ");
        for(i=0;i<4;i++)
        {
                scanf("%d",&a[i]);
                if(i==4){
                        break;
                }
                scanf("%c",&dot);
        }

        for(i=0;i<4;i++)
        {
                if(a[i] < 0 || a[i] > 255)
                {
                        printf("1. Programm Terminating: Invalid IP address\n");
                        return 0;
                }

        }
        if(a[0] >= 0 && a[0] < 128){
                printf("Given IP is a Class A IP\n");
                printf("Network ID is: ");
                printf("%d\n",a[0]);

                printf("Host ID is: %d.%d.%d\n",a[1],a[2],a[3]);
        }
        else if(a[0] >= 128 && a[0] < 192){
                printf("Given IP is a Class B IP\n");
                printf("Network ID is: ");
                printf("%d.%d\n",a[0],a[1]);

                printf("Host ID is: %d.%d\n",a[2],a[3]);

        }
        else if(a[0] >= 192 && a[0] < 224) {
                printf("Given IP is a Class C IP\n");
                printf("Network ID is: ");
                printf("%d.%d.%d\n",a[0],a[1],a[2]);

                printf("Host ID is: %d\n",a[3]);

        }
        else if(a[0] >= 224 && a[0] < 240) printf("Given IP is a Class D IP\n");
        else if(a[0] >= 240 && a[0] < 256) printf("Given IP is a Class E IP\n");
        else printf("Invalid IP Address\n");

        return 0;

}
