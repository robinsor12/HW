#include <iostream>

using namespace std;

void BubbleSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}
}

int main()
{
	int n, i;
	cout<<"How large is your array?: ";
	cin>>n;

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}

	BubbleSort(arr, n);

	cout<<"Sorted Data ";
	for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";

	return 0;
}
