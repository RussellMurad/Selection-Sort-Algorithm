#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int Arr[], int N)
{
    for(int i=0; i<N-1; i++)
    {
        int MIN = i;
        for(int j=i+1; j<N; j++)
        {
            if(Arr[j] < Arr[MIN])
                MIN = j;
        }

        int temp = Arr[i];
        Arr[i] = Arr[MIN];
        Arr[MIN] = temp;
    }
}

int main()
{
    int Arr[] = {10,8,2,5,1,9,4,6,7,3};
    SelectionSort(Arr, 10);

    for(int i=0; i<10; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
