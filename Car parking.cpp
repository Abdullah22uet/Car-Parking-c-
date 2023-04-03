#include<iostream>
using namespace std;
int main()
{
	//Welcome
	cout<<"\n\t :::: Welcome to Parking Center :::: \n"<<endl;
	//variabes
	int press,amount=0,count=0,b=0,c=0;
	while(true)
{
	cout<<"=Press 1 for byke. Byke fees is 20 Rs/-"<<endl;
	cout<<"=Press 2 for car. Car fees is 50 Rs/-"<<endl;
	cout<<"=Press 3 for total record"<<endl;
	cout<<"=Press 4 for delete the record"<<endl;
    cin>>press;
    // 1st choice
	// Byke
	if(press==1)
	{
		if(count<10){
		amount=amount+20;
		count=count+1;
		b=b+1;
		}
		else{
		cout<<"\n\t:::: Parking full ::::\n";
	    }
	}
	// 2nd choice
	// Car
	else if(press==2)
	{
		if(count<10){
		amount=amount+50;
		count=count+1;
		c=c+1;
		}
		else{
		cout<<"\n\t:::: Parking full ::::\n";
	    }
	}
	// 3rd choice
	// Show Record
	else if(press==3)
	{
		cout<<"\n\n\tTotal amount you have : "<<amount<<endl;
        cout<<"\tTotal vechicles you have : "<<count<<endl;
		cout<<"\tTotal numbers of bykes you have : "<<b<<endl;
		cout<<"\tTotal numbers of cars you have : "<<c<<"\n"<<endl;	
	}
	// 4th choice
	// Delete the record
	else if(press==4)
	{
        amount=0;
		count=0;
		b=0;
		c=0;
        cout<<"\n\n\t::: Record successfully deleted ::: "<<endl<<endl;
	}
	// Invalid option
	else
	{
        cout<<"Invalid Choice"<<endl<<endl;
	}
}
	return 0;

}