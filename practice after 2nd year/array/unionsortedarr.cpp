#include<iostream>
using namespace std;

int union( int[] a1, int[] a2)
{
    vector<int> un;
    int i,j,k;
    int n1 = a1.length();
    int n2 = a2.length();
    int n;
    if (n1 > n2)
    {
        n = n1;
    }
    else
    {
        n = n2;
    }
    for (i = 0; i < n; i++)
    {
        if (a1[i] < a2[j])
        { 
            un.push_back(a1[i]);
            if(a1[i] == a1[i+1]){
              i++;
            }
        }
        else
        {
            un.push_back(a2[j]);
            if(a1[j] == a1[j+1]){
              j++;
            }
            j++;
            
        }
    }
    for(auto: un){
        cout<<i<<" ";
    }
}

int main(){
    int arr1[] = {1,1,2,2,3,4,5};
    int arr2[] = {2,2,3,3,4,6,7};

    union(arr1,arr2);
}