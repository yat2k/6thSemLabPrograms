#include <stdio.h>
#include <time.h>

void delay (int number_of_seconds)
{
  int milli_seconds = 1000 * number_of_seconds;
  clock_t start_time = clock ();
  while (clock () < start_time + milli_seconds);
  // printf("Hello");
}

int main ()
{
  int n, m, i, frames[1000], window[1000], frameStart = 0, frameEnd =0, preFrameAck = -1, ackNumber = -1;
  printf ("Enter the number of frames to be sent: ");
  scanf ("%d", &n);
  printf ("Enter the window size: ");
  scanf ("%d", &m);
  frameEnd = frameStart + m;

  for (i = 0; i < n; i++)
    {
      frames[i] = i;
    }

  printf ("Data Transmitting::: Be Patient...\n");
  delay (1000);

  printf ("Frames sent from frame number %d to %d\n", frameStart, frameEnd - 1);

  while (frameStart != n)
    {
          printf ("Enter the ack Number: ");
          scanf ("%d", &ackNumber);
         
          if(frameEnd <= n-1){
   
          if (ackNumber - 1 == preFrameAck)
    {
     // moveWindow
     frameStart += 1;
     frameEnd += 1;
     preFrameAck = ackNumber;
     printf ("Sliding Window is moving\nContents in the Sliding Window is %d to %d\n", frameStart, frameEnd - 1);
                    
        }
               
        else
        {
            // resendTheWindowContent
            frameStart = frameStart; frameEnd = frameEnd;
            printf("Frame Lost %d\nFrames resent from frame number %d to %d\n",preFrameAck+1,frameStart,frameEnd-1);
            
        }
            
            printf("\n\n");
           
          }
         
         else{
      if (ackNumber - 1 != preFrameAck)
      {
         
             printf("Frames sent from frame number %d to %d\n",frameStart,frameEnd-1);
      }
      else
      {
          frameStart++;
          preFrameAck = ackNumber;
      }
         }
         
    delay (1000);
    }
   
   
    printf("Data Sent Successfully\n");
   
    return 0;
}
