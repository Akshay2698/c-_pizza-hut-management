#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class pizza
{
	char name[20];
	string  phno;
	int no;
	int ch;
	int fare;
	
	int a=50,b=60,c=50,d=70,e=60,f=120,g=140,h=150,i=170,j=170,k=300;
	public:
		void get()     
		{
			cout<<"\t \t \t welcome to VARAKS pizzas"<<endl;
			
			cout<<"enter customers name : "<<endl;
			gets(name);
			cout<<"enter customers phone number"<<endl;
			cin>>phno;
		}
			void select()
			{
				int many,y,z,w;
				cout<<"enter which type of pizzas you want from following :"<<endl;
				cout<<"1) same type pizzas 2) combo pack of pizzas"<<endl;
				cin>>y;
				if(y==1)
				{
				
			cout<<endl<<"How many pizzas you want : ";
			cin>>many; 
			cout<<"available pizzas are:"<<endl;
			cout<<"**********************************"<<endl;
			cout<<"enter 1 for veg-section"<<endl;
			cout<<"enter 2 for non-veg section"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
				cout<<"pizzas available in veg section are following"<<endl;
				cout<<"1: onion pizza----------------------------------Rs "<<a<<endl;
				cout<<"2: capsicum pizza-------------------------------Rs "<<b<<endl;
				cout<<"3: tomato pizza---------------------------------Rs "<<c<<endl;
				cout<<"4: golden corn pizza----------------------------Rs "<<d<<endl;
				cout<<"5: paneeer pizza--------------------------------Rs "<<e<<endl;
				
				break;
				
				
				case 2:
				cout<<"pizzas available in non-veg section are following"<<endl;
				cout<<"6: chicken pizza--------------------------------Rs "<<f<<endl;
				cout<<"7: mutton pizza---------------------------------Rs "<<g<<endl;
				break;
				
			
		}
		cout<<"enter the pizza number"<<endl;
		cin>>no;
	}
		if(y==2)
		{
			cout<<"available combo packs are following :"<<endl;
			cout<<"1) onion pizza and capsicum pizza with soft drink-------------------Rs"<<h<<endl;
			cout<<"2) golden corn pizza and tomato pizza with soft drink---------------Rs"<<i<<endl;
			cout<<"3) paneer pizza and onion pizza with soft drink---------------------Rs"<<j<<endl;
			cout<<"4) chicken pizza and mutton pizza with soft drink-------------------Rs"<<k<<endl;
			cout<<"enter serial no of combo pack you want to order"<<endl;
			cin>>z;
			cout<<"enter how many combo packs you wnat to order of selected one"<<endl;
			cin>>w;
			switch(z)
			
			
			{
				case 1:
				cout<<"your order is onion and capsicum combo pack"<<endl;
				break;
			
			case 2:
			
				cout<<"your order is goldern corn and tomato combo pack"<<endl;
				break;
			case 3:
				cout<<"your order is paneer and onion combo pack"<<endl;
				break;
			case 4:
				cout<<"your order is chicken and mutton combo pack"<<endl;
				break;
			case 5:
			
				cout<<"invalid option"<<endl;
				break;
			default:
		
			cout<<"invalid option"<<endl;
			break;
		
		}}
		cout<<endl<<"******************************************************************"<<endl;
	 
	  	cout<<"\t \t \t VARAKS PIZZAS"<<endl;
			cout<<"\t \t  shopno.11,ameerpet,hyderabad,500011"<<endl;
			cout<<"\t \t  ph.no:9542957205,9908439269"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\t \t  CUSTOMER BILL "<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\t customers name:"<<name<<endl;
			cout<<"\t customers ph.no:"<<phno<<endl;
			if(y==1)
			{
			

		switch(no)
		{
			case 1:
				cout<<"\t your order is "<<many<<" onion pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*a<<endl;
				break;
			case 2:
				cout<<"\t your order is "<<many<<" capsicum pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*b<<endl;
				break;
			case 3:
				cout<<"\t your order is "<<many<<" tomato pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*c<<endl;
				break;
			case 4:
				cout<<"\t your order is "<<many<<" golden corn pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*d<<endl;
				break;
			case 5:
				cout<<"\t your order is "<<many<<" paneer pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*e<<endl;
				break;
			case 6:
				cout<<"!!"<<"\t your order is "<<many<<" chicken pizza"<<endl;
				cout<<"\t Total fare is : Rs"<<many*f<<endl;
				break;
			case 7:
				cout<<"\t your order is "<<many<<" mutton pizza"<<endl;
				cout<<"\t Total amount is : Rs"<<many*g<<endl;
				break;
			default:
				cout<<"invalid option"<<endl;
				break;
		}}
		if(y==2)
		{
			switch(z)
			{
				case 1:
					cout<<"\t your order is onion and capsicum pizza combo pack with soft drink "<<endl;
					cout<<"\t total fare = Rs"<<h*w<<endl;
					break;
				case 2:
					cout<<"\t your order is golden corn and tomato combo pack with soft drink "<<endl;
					cout<<"\t total fare = Rs"<<i*w<<endl;
					break;
				case 3:
					cout<<"\t your order is paneer and onion combo pack with soft drink "<<endl;
					cout<<"\t total fare = Rs"<<j*w<<endl;
					break;
			}
		}
		cout<<endl<<"\t \t \t THANK YOU "<<endl;
		cout<<"****************************************************************"<<endl;
			}
	void file()
	{
		ofstream f1;
		f1.open("Pizza.txt",ios::app);
		f1<<name<<"\t"<<phno<<"\t"<<endl;
		f1.close();
	}
};

int main()
{
	pizza p1;
	p1.get();
	
	p1.select();
	p1.file();
	getch();
}

