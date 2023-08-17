#include<iostream>
using namespace std;


apple()
{
	int stock=5;
	int choice,quantity;
	cout<<"1 iphone 14"<<endl;
	cout<<"2 iphone 15"<<endl;
	cin>>choice;
	
	
	
	if(choice==1)
	{
		char buy; 
		cout<<"price is 100000"<<endl;
		cout<<"you want to buy??answers with y or n"<<endl;
		
		cin>>buy;
		if(buy == 'y' || buy == 'Y')
		{
			cout<<"really ?"<<endl;
			cout<<"a card"<<endl;
			cout<<"b rokde"<<endl;
			cout<<"c upi"<<endl;
			char payment;
			cin>>payment;
			if(payment=='a'||payment=='A')
			{
				cout<<"Your total is : 100000 and you made the payment with card"<<endl;
				cout<<"Thank you for shopping with us"<<endl;
			}
			else
			{
				cout<<"enter valid choice"<<endl;
			}
		}
		
		
	}
}



basic()
{
  string name;

  int age;
 
	
 cout<<"enter your name"<<endl;
	getline(cin,name);
 cout<<"enter your age"<<endl;
 cin>>age;

 	int choice;
	cout<<"1 apple"<<endl; 
	cout<<"2 samsung"<<endl;
	cout<<"3 redmi"<<endl;
 	cin>>choice;
 	if(choice==1)
 	{
 		apple();
	 }
	else if(choice ==2)
	{
	//	samsung();
	}
	else if(choice ==3)
	{
	//	redmi();
	}
	else
	{
       cout<<"enter valid choice"<<endl;
	}
}





main()
{
	basic();
	
	
}

