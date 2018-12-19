#include <iostream>

using namespace std;

int binarysearch(int arr[], int s, int n)
{
    int lower=0;
    int higher=s - 1;
    int middle;

    while(lower<=higher)
    {
         middle=(lower+higher)/2;

    if(n==arr[middle])
    {
        return middle;
    }
    else if(n>arr[middle])
    {
        lower=middle+1;
    }
    else
        {
            higher=middle-1;
        }
    }
   return -1;
}

int main()
{
    int ar[]={7,8,11,13,14,16,19,24,32};
    int number;
     cout<<"The array contains the numbers: 7,8,11,13,14,16,19,24,32 Arranged in ascending order. \n\nEnter a number in the array to display its position and index: ";
     cin>>number;
    cout<<endl<<endl;

    int r = binarysearch(ar, 11, number);
    if(r>=0)
    {
        cout<<"the number "<<ar[r]<<" is found at the position  "<<r+1<<endl;
        cout<<"And "<<ar[r]<<" has index  "<<r<<"  in the array"<<endl;
    }
    else
    {
        cout<<"the number "<<number<<" was not found. "<<endl;
    }
}
