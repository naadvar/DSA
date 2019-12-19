#include<iostream>
#include<string>
using namespace std;
int *insertion_sort(int arr[],int size)
{
    for (int j =1; j<size; j++)
    {   int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i]<key)
        {
            arr[i+1] = arr[i];
            i = i -1;
            cout<<"The value of i:"<<i<<endl;
        }
        arr[i+1] = key;
    }
    return arr;
}


int main()
{
    int random_data[6]  = {5,2,4,6,1,3};
    int *a = insertion_sort(random_data,6);
      cout<<"The final array after sorting is"<<endl;
    for (int j =0;j<6;j++)
    {
      
        cout<<a[j];
    }
    return 0;


}