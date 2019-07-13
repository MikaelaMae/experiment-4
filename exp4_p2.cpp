#include <iostream>
#include <conio.h>

using namespace std;
//Create a C++ functional program that sorts n number of elements using either selection or
//bubble sort.


int main ()
{
	int a[100];
	int size, i, j;
	int temp;
	
	//inputs array size
	cout<<"Enter Array Size: ";
	cin>>size;
	
	//input array elements
	cout<<"Enter Array Elements: ";
	for(i=0; i<size; i++)
	{
		cin >> a[i];
	}
	
	cout << "-----------------------------" << endl;

	//displays the entered elements
	cout<<"Your data: "<<endl;
	for(i=0;i<size;i++)
	{
		cout << a[i] << " ";
		
	}
	cout<<endl;
	
	//sorting elements using selection sort
    cout << "-----------------------------" << endl;
	cout<<"Sorting array using selection sort...\n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	//displays sorted array
	cout<<"After using selection or bubble sort:" << endl;
	for(i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}

	getch();
	return 0;
	
	
}
