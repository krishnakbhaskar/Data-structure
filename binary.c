#include <stdio.h>
#include <conio.h>

int main()
  {
      int i,low,high,mid,n,key,array[100];
      printf("enter the mnumber of element",n);
      scanf("%d",&n);

      printf("enter %d the integer ",n);
        for(i=0; i<n; i++)     
        scanf("%d",&array[i]);
          
          printf("enter the value to find n");
          scanf("%d",&key);
          
          low = 0;
          high=n-1;
          mid=(low+high)/2;
          while(low<=high)
    
       {
           if (array[mid]<key)

          {
               low=mid + 1;
          }   
           else if (array[mid]==key)
           {
               printf("%d found at location %d.n",key,mid+1);
               break;
           {
               high=mid - 1;
               mid=(low+high)/2;
           }
}         
    if(low>high)
    {
        printf("%d element not found at location");
    }
    
}   
