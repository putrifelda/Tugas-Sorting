#include <iostream>

using namespace std;

int main()
{
	int arr[10]; // deklarasi array
	cout << "Masukkan nilai pada element array : " << endl;
	int min; // indeks dari nilai terkecil
	int temp; // 
	int sz = 3; // sz sebagai privot
	int n;
	cout << "Masukkan banyak bilangan : ";
	cin >> n;

	cout << "Array before Sorting : "; // menampilkan nilai sebelum diurutkan
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		min = 0; // 0 setiap perulangan
		for (int j = 1; i <= sz; j++) // karena sz = 3 perulangan sebanyak 3 kali
		{
			if (arr[j] > arr[min])

				min = j; // menyimpan angka yang dicari

		}

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;

	}

	cout << "Array after Sorting : "; // menampilkan nilai setelah diurutkan
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;