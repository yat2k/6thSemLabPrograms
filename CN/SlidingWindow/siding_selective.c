#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=1,p,a,w,nac,ack;
    printf("Enter the window size\n");
    scanf("%d",&w);
    printf("Enter the packet size\n");
    scanf("%d",&a);
    printf("Transmission begins.Packet size is %d\n",a);
    while(i<=a)
    {
        printf("Sending packets fromm %d to %d\n",i,w+i-1);
        for(p=i;p<w+i;p++)
        {
          printf("Transmitting packet %d\n",p);
        }
        nac=i+rand()%w;
    if(nac==i)
    {
        printf("Ack=%d\n",w+i);
        i=i+w;
        continue;
    }
    printf("Nac=%d\n",nac);
    printf("Sending packet %d\n",nac);
    printf("Ack=%d\n",nac+1);
    printf("Ack=%d\n",i+w);
    i=i+w;
    }
    printf("End of packets so ack %d is discarded\n",i);
}
