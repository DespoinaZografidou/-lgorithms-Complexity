#include <iostream> 
#include <limits.h>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;
}

int max3(int a, int b, int c)
{
    return max(max(a, b), c);
}

int maxCrossingSum(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)           
        	left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)           
        	right_sum = sum;
    }
    return left_sum + right_sum;
}

int maxSubArraySum(int arr[], int l, int h)
{
    if (l == h)      
    	return arr[l];
    int m = (l + h)/2;
    return max3(maxSubArraySum(arr, l, m), maxSubArraySum(arr, m+1, h),  maxCrossingSum(arr, l, m, h));
}
int main ()
{
    int T[16]= {12,11,10,11, 9,10,12,9,10,11,13,7,14,15,14,9};
    int i,j,z;
    int AK[15];
    for (i=1; i<=15; i++)
    {
        j=i-1;     
         //A erwtima me O(n^3)
        if(T[i]>T[j]) AK[j]=1;
        else if(T[i]<T[j]) 
        	AK[j]=-1;
        else 
        	AK[j]=0;
    }
    int sum;
    int max=AK[0];
    for (i=0; i<=14; i++)
    {
        for(j=i; j<=14; j++)
        {
            sum = 0;
            for(z=i; z<=j; z++)
            {
                sum+=AK[z];
            }
            if(sum>=max)
            {
                max=sum;
            }
        }
    }
    cout<<max<<endl;   
     //B erwtima me O(n^2)  
     max=AK[0];    
     for (i=0; i<=14; i++){   
     	sum = 0;   
     	for(j=i; j<=14; j++){    
     		sum += AK[j];    
     		if(sum>=max){     
     			max=sum;    }   
     		}  
     }    
     cout<<max<<endl;    

     //G erwtima me O(nlogn)
     int max_sum = maxSubArraySum(AK, 0, 15-1);  
     cout<<max_sum<<endl; 
 }
