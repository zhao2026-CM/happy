#include<iostream>
#include<iomanip>//两位小数使用fixed和setprecision （AI）
using namespace std;

int main()
{
    int arr[5];
    int sum=0;
    
    for(int i=0;i<5;i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    int max =arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
      }
       if(arr[i]<min)
       {
        min=arr[i];
      }
       
    }
     cout<<sum<<endl;
      double a=(double) ((sum-max-min)/3.00);
    cout<<fixed<<setprecision(2)<<a<<endl;

    system("pause");
    return 0;
}   
