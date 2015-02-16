# include <iostream>

using namespace std;

int a[100];

int main()
{
	 cout<< "Vvedite razmer:\n";
	int n;
	cin >> n;

	//Считываем данные
	for (int i = 0; i<n; ++i)
		cin >> a[i];

	//Сортировка пузырьком
	for (int i = 0; i<n; ++i)
	for (int j = i + 1; j<n; ++j)
	if (a[j]<a[i])swap(a[i], a[j]);

	//Выводим массив на экран
	for (int i = 0; i<n; ++i)
		cout << a[i] << " ";
	
	cout << "\n";
}