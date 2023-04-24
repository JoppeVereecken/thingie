#include<iostream>
using namespace std;

void BubbleSort(int array[], int N);

int main()
{
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	
	BubbleSort(array, 10);
	
	for(int i = 0; i < 10; i++)
	  cout << array[i] << " ";
	return 0;
}

void BubbleSort(int array[], int  N)
{
	bool sorted = true;
	
	int NewArray[N];
	for(int i = 0; i < N; i++)
	  NewArray[i] = array[i];
	
	do
	{
		sorted = true;
		for(int i = 0; i < (N-1); i++)
		{
			if(array[i] > array[i+1])
			{
				int ThrowRA = array[i];
				array[i] = array[i+1];
				array[i+1] = ThrowRA;
				sorted = false;
			}
		}
	}while(sorted == false);
}