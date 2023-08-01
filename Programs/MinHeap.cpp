#include <iostream>
#include <queue>
using namespace std;
/*
Name : Owskar Ganbawale
Roll No. : 36
*/
int main()
{
	int N;
	cout << "Enter The size of array : " << endl;
	cin >> N;
	int arr[N];
	cout << "Enter The  array : " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cout << " Array : ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	priority_queue<int> pq;
	for (int i = 0; i < N; i++)
	{
		pq.push((-1) * arr[i]);
	}
	cout << "Min Heap :";
	while (!pq.empty())
	{
		cout << (pq.top()) * (-1) << " ";
		pq.pop();
	}
	return 0;
}
