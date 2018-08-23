#include <stdio.h>
 
int main()
{   int n,i;
printf("enter no of flights");
scanf("%d",&n);
    char fno[100],airname[100],des[100],source[100],dep_date[100],arr_time[100];
    for(i=0;i<n;i++){
        scanf("%c",&fno[i]);
    }
    for(i=0;i<n;i++){
        scanf("%c",&airname[i]);
    }
    for(i=0;i<n;i++){
        scanf("%c",&des[i]);
    }
    for(i=0;i<n;i++){
        scanf("%c",&source[i]);
    }
    for(i=0;i<n;i++){
        scanf("%c",&dep_date[i]);
    }
    for(i=0;i<n;i++){
        scanf("%c",&arr_time[i]);
    }
    switch(choice){
        case des:  for(i=0;i<n;i++){
                  printf("%c",&des[i]);
           }
                 break;
        case dep_date: for(i=0;i<n;i++){
            printf("%c",&dep_date[i]);}
                 break;
        case arr_date: for(i=0;i<n;i++){
            printf("%c",&arr_date);}
                    break;
        default:printf("invalid");           
        
    }

    return 0;
}
