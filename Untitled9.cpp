#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"\n Enter the size of integer aray: ";
	cin>>size;
	cout<<"\n Creating an array of size"<<size;
	arr=new int[size];
	if(arr==NULL){
		cout<<"\n problem in memory alloocaton :";
		exit(1);
		
	}
	else{
		cout<<"\n Dynamic allocaton of meeory fort array is successful.";
		cout<<"\n enter the array element :";
		for( int i=0;i<size;i++){
			cin>>*(arr+i);
		}
		cout<<"\n Entered element areL ";
		for(int i=0;i<size;i++){
			cout<<"\n"<<*(arr+i);
		}
	}
	delete[]arr;
	cout<<"\n Memeory deallocated";
	return 0;
}
