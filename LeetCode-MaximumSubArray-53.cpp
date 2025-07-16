#include <iostream>
using namespace std;
#include <vector>

 // Find the sub array with largest sum - Using Kadane's algorithm


int subArray()
{
  int arr[9]={-2,1,-3,4,-1,2,1,-5,4},maxSum=0,currSum=arr[0];
  for(int i=0;i<9;i++)
  {
    currSum=currSum+arr[i];
   
    maxSum=max(currSum,maxSum);
     if(currSum<0)
    {
        currSum=0;
    }
    
    
}
return maxSum;
}
int main()
{


    
    //cin >> arr ;
    cout <<"out " << subArray() << endl;

    return 0;
}