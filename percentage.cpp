#include<iostream>
using namespace std;
int main()
{
   int matricMarks ,percentage;
	cout<<"Enter your matric marks :";
	cin>>matricMarks;
	percentage=(matricMarks*100)/1100;
	cout<<"Show your percentage :"<<percentage<<endl;
	if(percentage>=80)
	{
		cout<<"Grade is A+:";
	}
else if(percentage>=60)
	{
		cout<<"Grade is A:";
	}
else if(percentage>=50)
	{
		cout<<"Grade is B:";
	}
else if(percentage>=45)
	{
		cout<<"Grade is c:";
	}
else
{
cout<<"FAIL";	
}
}
