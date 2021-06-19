/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
 int max(int arr[], int n)
 {
   int ret=arr[0];
   for(int i=0; i<n; i++)
   {  
     if(ret < arr[i]) {
      ret = arr[i];
      }
   }
   return ret;
 }    
  
  int min(int arr[], int n)
 { 
   int ret=arr[0];
   for(int i=0; i<n; i++)
   { 
     if(ret>arr[i]) {
     ret = arr[i];
     }
   }
   return ret;
  }
  
  float average( int arr[], int n)
  { 
    float sum =0.0;
    
     for(int i=0; i<n; ++i)
      { 
        sum += arr[i];
      }
    float avg= sum/n;
    return avg;
  }  
   
  int factors( int n, int arr[])
  { 
    int a= n/2, fact=0;
    for( int i=2; i<a+1;)
    {
      if(n%i==0)
      { 
       arr[fact]=i;
       fact++;
       n = n/i;
      }
      else 
      i++;
    }    
    return fact;
  }  
  
  int mode( int arr[], int n)
  { 
    int MaxValue = 0, MaxCount = 0;
     for(int i=0; i<n; ++i)
      { 
        int count = 0;
         for(int j=0; j<n; ++j)
          { 
             if(arr[j]==arr[i])
              count++;
          }
         if(count>MaxCount)
          {  
             MaxCount = count;
             MaxValue = arr[i];
          }
    } 
    return MaxValue;
  }   
     
