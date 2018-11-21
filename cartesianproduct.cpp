#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	
	int i, j, number1, number2, cartesianproduct;
	string element1[50], element2[50];
	
	cout<<"Enter number of elements in a SET 1? ";
	cin>>number1;
	
	cout<<"\nEnter "<<number1<<" elements in SET 1:\n";
	
	for(i=0; i<number1; i++) 
	{
		cin>>element1[i];
	}
	
	cout<<"Enter number of elements in a SET 2? ";
	cin>>number2;
	
	cout<<"\nEnter "<<number2<<" elements in SET 2:\n";
	
	for(i=0; i<number2; i++) 
	{
		cin>>element2[i];
	}
	
	
	
	system("cls");
	
	
	
	cout<<"SET A = {";
	for(i=0; i<number1; i++) 
	{
		cout<<element1[i];
		cout<<",";
	}
	cout<<"}\t\t\t";
	
	cout<<"SET B = {";
	for(i=0; i<number2; i++) 
	{
		cout<<element2[i];
		cout<<",";
	}
	cout<<"}"<<endl<<endl;
	
	
	
	cartesianproduct=number1*number2;
	cout<<"\nTHE NUMBER OF SETS IN CARTESIAN PRODUCT SET1 X SET2= "<<cartesianproduct<<"\n\n";
	system("color D");
	cout<<"Cartesian Product =  { ";
    for(i=0; i<number1; i++)
    {
        for(j=0; j<number2; j++)
        {
        	
        	if(i==j)
        	cout<<"\n";
        	
			cout<<"("<<element1[i]<<","<<element2[j]<<")";
			cout<<",";
    	}
	}
	cout<<" }"<<endl<<endl;
    system("pause");
}

void display()
{
	
}
