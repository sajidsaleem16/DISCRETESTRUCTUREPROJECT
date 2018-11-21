#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	system("color B");
	int result, i, j, k, number, num;
	string element[50];
	
	cout<<"Enter number of elements in a set? ";
	cin>>number;
	
	num=number;
	
	result=pow(2,number);
	
	cout<<"\nTHE POWER SET WILL HAVE "<<result<<" MEMBERS:\n";
	
	cout<<"\nEnter "<<number<<" elements:\n";
	
	for(i=0; i<num; i++) 
	{
		cin>>element[i];
	}
	
	cout<<endl<<"{ }";
	
    for(j=0; j<result; j++)
    {
    	//printf("\nJ=%d", j);
    	
        for(k=0; k<num; k++)
        {
        	//printf("\nK=%d", k);
        	
            if(j & (1 << k))
            {
            	//printf("  IF=%d\t",(j & (1<<k)));
            	cout<<"{"<<element[k]<<"}";
            }
        }
		cout<<endl; //<<endl;
    }
    system("pause");
}
