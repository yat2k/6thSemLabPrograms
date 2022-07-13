#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,ack=-1;

    printf("Enter the number of frames:\n");
    scanf("%d",&n);                             // total number of frames

    printf("Enter the window size :\n");
    scanf("%d",&m);                             // window size

    int x=1,y=m,temp=0;
    printf("Sending frame from %d to %d\n",x,y);

    while(x<=n)
    {
        printf("Enter the ack received\n");
        scanf("%d",&ack);

        if(y<n)
        {
            if(ack==x)
            {
                printf("The frame received is %d\n",ack);
                x++;
                y++;
                printf("window moved from frame %d to %d\n",x,y);
            }
            else
            {
                printf("wrong ack received it must be %d\n\n",x);
                printf("re-transmitting window %d to %d\n",x,y);
            }
            temp=x;
        }
        else{
            if(ack==x)
            {
                printf("the frame received id %d\n",ack);
                x++;
            }
            else{
                printf("wrong ack received it must be %d\n",x);
                printf("retransmitting window %d to %d\n",temp,y);
            }
        }
    }
    printf("Process complete\n");
    return 0;
}
