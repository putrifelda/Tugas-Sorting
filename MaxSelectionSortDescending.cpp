#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	cout << "Masukkan nilai pada element array : " << endl; 	// memasukkan nilai yang akan di urutkan
	int max = 0;
	int temp = 0;
	int sz = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array [" << i << "] = "; 
		cin >> arr[i];
	}

	cout << "Array before Sorting : "; // nilai sebelum diurutkan
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < 5; j++)
	{
		max = 4;
		for (int j = sz; j <= 3; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
		}
		temp = arr[sz];
		arr[sz] = arr[max];
		arr[max] = temp;
		
		cout << "hasil  proses ke-" << j + 1 << " = ";
		for (int j = 0; j < 5; j++)
		{
			cout << arr[j] << " ";
		}
		cout << endl;
	}

	cout << "Array after Sorting : "; // menampilkan nilai setelah diurutkan
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}