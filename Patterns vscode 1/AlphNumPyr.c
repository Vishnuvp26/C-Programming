    #include <stdio.h>

    int main()
    {
        int i,j;
        int c=65;

        for(i=1;i<=7;i++) 
        {
            for(j=1;j<=i;j++)
            {
                if(i%2==0)
                    printf("%d",i/2);
                 else
                    printf("%c",c);   
            }

            if(i%2==0)
                c++;
            printf("\n");
        }

        return 0;
    }

