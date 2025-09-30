// #include<iostream>
// using namespace std;
// void bubblesort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[5]={5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"original array"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]," ";
//        // cout<<endl;
//     }
//     bubblesort(arr,n);
//      cout<<"sorted  array"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]," ";
//         //cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<set>
// using namespace std;

// int main()
// {
//     set<int>s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(9);
//     cout<<"set elements: ";
//     for(int x:s)
//     {
//         cout<< x <<" ";
//     }
// }

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>age;
    age["thamu"]=27;
    age["anas"]=3;
    for(auto pair:age)
    {
        cout<<pair.first<<":"<<pair.seconf    }

}