#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x>y)?y:x

int main()
{
    int orate,drop=0,count=0,bsize;
    int x,nsec,i=0,ch,inp[10]={0};
    
    printf("ENTER BUCKET SIZE\n");
    scanf("%d",&bsize);
    printf("ENTER OUTPUT RATE\n");
    scanf("%d",&orate);
    
    do {
        printf("ENTER NUMBER OF INCOMING PACKETS at second %d",i+1);
        scanf("%d",&inp[i]);
        i++;
        printf("ENTER 1 TO CONTINUE OR 0 TO EXIT");
        scanf("%d",&ch);
        
    }while (ch);
    nsec=i;
    
printf("\n Second\t Received\t Sent\t Dropped\t Remaining\t");
for(i=0;count||i<nsec;i++)
{
    printf("%d",i+1);
    printf("\t%d\t",inp[i]);
    printf("\t%d\t",MIN((inp[i]+count),orate));
    
    if ((x=inp[i]+count-orate)>0)
    {
        if (x>bsize)
        {
            count=bsize;
            drop=x-bsize;
        }
        else
        {
        count=x;
        drop=0;
        }
    }
    else
    {
        count=0;
        drop=0;
    }
    
    printf("\t%d\t%d",drop,count);
    
}
    
  return 0;  
}

