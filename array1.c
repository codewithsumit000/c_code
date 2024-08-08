// // # include<stdio.h>
// // int main()
// // {
// //     int arr[5]={1,8,4,6,5};
// //     int i;
// //     for(i=0;i<5;i++)
// //     {
// //         printf("%d",arr[i]);

// //     }
// //  return 0;
// //  }




// # include<stdio.h>
// int main()
// {
//     int arr[5];
//     int i;
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int j;
//     for(j=0;j<5;j++)
//     {
//         printf("%d",arr[j]);

//     }  return 0; }




// WAP to sort the given array in ascending order

#include<stdio.h>.
int main()
{
    int arr[5]={4,1,1,3,2};
    int i,j,tem;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (arr[i]>arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;

            }
        }
        
    }

    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

 