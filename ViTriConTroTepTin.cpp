#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>

using namespace std;

const int length =25;

int main()
{
	char fileName[length];
	cout<<"Ten tep tin: ";
	cin>>fileName;
	
	ifstream fileIn(fileName, ios::in);
	if(!fileIn)
	{
		cout<<"\nKhong the mo tep tin: "<<fileName<<endl;
	}
	
	int index = 1;
	char output;
	do
	{
		cout<<"\nNhap so ky tu dich chuyen: ";
		cin>>index;
		fileIn.seekg(index, ios::cur);
		
		if(fileIn)
		{
			fileIn>>output;
			cout<<"\nVi tri con tro: "<<fileIn.tellg()<<endl<<output;
		}
		else
		{
			fileIn.clear();
		}
	}while(index);

	fileIn.close();
}