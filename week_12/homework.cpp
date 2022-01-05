#include <iostream>

using namespace std;

void fromSmallToBig(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int task4(double *arr, int size)
{
    int index = 0;

    for(int i = 1; i < size - 1; i++)
    {
        if(arr[i] == (arr[i-1]+arr[i+1])/2)
        {
            index = i;
        }
    }

    if (index == 0) {
        return -1;
    } else {
        return index;
    }
}

void task5(int *arr, int size)
{
    int x, count = 0;
    cout << "Number you want to remove: ";
    cin >> x;

    for (int i = 0; i < size - count; i++)
    {
        bool flag = false;
        if (arr[i] == x)
        {
            flag = true;

            for (int j = i; j < size - 1 - count; j++)
                arr[j] = arr[j + 1];

            count++;
        }
        if (flag) i--;
    }

    printArr(arr, size - count);
}

void deleteElementInArray(double *array, int size, int n, int &newSize)
{
    int counter2 = 1;
    
    if (size < 0)
        return;

    if (array[0] == n)
    {
        int counter = 0;
        while (counter != size)
        {
            array[counter] = array[counter + 1];
            counter++;
        }
        array[counter] = '\0';
        counter2 = 0;
        newSize--;
    }

    return deleteElementInArray(array + counter2, size - 1, n, newSize);
}

void remove(int* arr, int& size, int n) {
   for (int i = 0; i < size; i++){
      if (n == arr[i])
      {
         for (int j = i; j < size - 1; j++){
            arr[j] = arr[j + 1];
         }
         size--;
         i--;
      }
   }
   for (int i = 0; i < size; i++){
      cout << arr[i] << " ";
   }
   cout <<endl;
}

int main() {
    int arr[20];
	int size; cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int* ptr = arr;
	fromSmallToBig(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<<" ";
	}

	return 0;
}