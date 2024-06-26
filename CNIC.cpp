#include<iostream>
using namespace std;
int main ()
{
 int a,g,f,d,e,u;
 long long int t;
long long int CNIC;
string name;
cout << "Enter name of student: ";
cin >> name;
cout << "Enter your CNIC number: ";
cin >> CNIC;

g=CNIC%10;
if(g%2==0)
cout << "Gender of "<<name<<" is: Female"<<endl;
else
cout << "Gender of "<<name<<" is: Male"<<endl;


t=CNIC/10;
t=t%10000000;
cout << "Family tree of "<<name<<" is :"<<t<<endl;


a=CNIC/1000000000000;

d=CNIC/100000000000;
d=d%10;

e=CNIC/10000000000;
e=e%10;

f=CNIC/1000000000;
f=f%10;

u=CNIC/100000000;
u=u%10;

if(a==1)
{
cout << "Province of "<<name<<" is: KPK"<<endl;
	if(d==1)
	{
	cout << "division of "<<name<<" is: Bannu Division"<<endl;
		if(e==1)
		{
		cout << "district of "<<name<<" is: Bannu"<<endl;
			if(f==1)
				{
				cout << "Tehsil of "<<name<<" is: Bannu Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			else if(f==2)
				{
				cout << "Tehsil of "<<name<<" is: Domel Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else 
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			if(f==3)
				{
			cout << "Tehsil of "<<name<<" is: Miryan Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else 
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			if(f==4)
				{
			cout << "Tehsil of "<<name<<" is: Bakakhel Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			if(f==5)
			{
			cout << "Tehsil of "<<name<<" is: Kakki Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			
		}
		else if(e==2)
		{
		cout << "district of "<<name<<" is: Lakki Marwat"<<endl;
			if(f==1)
				{
			cout << "Tehsil of "<<name<<" is: Lakki Marwat Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
		}
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is: Sarai Naurang Teshsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is: Ghaznikhel Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			}
		else if(e==3)
		{
		
		cout << "division of "<<name<<" is: North Waziristan"<<endl;
			{
			cout << "district of "<<name<<" is: Bannu."<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is: Ghulam Khan Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is: Mir Ali Tehsil"<<endl;			
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is: Miran Shah Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Razmak Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==5)
			{
			cout << "Tehsil of "<<name<<" is: Shewa Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
		}
	}
	else if(d==2)
	{
	cout << "division of "<<name<<" is: Dera Ismail Khan  Division"<<endl;
		if(e==1)
		{
		cout << "district of "<<name<<" is: Dera Ismail Khan District"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is: Kulachi Tehsill"<<endl;
				 if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else 
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			}
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is: Paroa Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is: Paharpur Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			
			else if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Daraban Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			
			else if(f==5)
			{
			cout << "Tehsil of "<<name<<" is: Dera Ismail Khan Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
			
		
		else if(e==2)
		{
		cout << "district of "<<name<<" is: Tank District"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is: Wana Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is: Kulachi Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else if(u==5)
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is: Lakki Marwat Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
		}
		else if(e==3)
		{
		cout << "district of "<<name<<" is: Lower South Waziristan District"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is: Ladha Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is: Makin Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is: Sararogha Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Serwekai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==5)
			{
			cout << "Tehsil of "<<name<<" is: Tiarza Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
		}
		else if(e==4)
		{
		cout << "district of "<<name<<" is: Upper South Waziristan District"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Ladha"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Makin Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Tayyarzai"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Sarokai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}
					
			else if(f==5)
			{
			cout << "Tehsil of "<<name<<" is:  Spinkai Rakhzai"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			}
	}
	else if(d==3)
	{
	cout << "division of "<<name<<" is: Hazara Division"<<endl;
		if(e==1)
		{
		cout << "district of "<<name<<" is: Haripur"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Ghazi Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Haripur Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Khanpur Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			}
		else if(e==2)
		{
		cout << "district of "<<name<<" is: Mansehra"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Darband Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Baffa Pakhal Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Oghi Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Mansehra Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			else if(f==5)
			{
			cout << "Tehsil of "<<name<<" is:  Bala Kot Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				else if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				else if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				else if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			}
		else if(e==3)
		{
		cout << "district of "<<name<<" is: Battagram"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Allai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Battagram Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				
				}	
			}
			}
		else if(e==4)
		{
		cout << "district of "<<name<<" is: Torghar"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Judba Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Khander Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			}
		else if(e==5)
		{
		cout << "district of "<<name<<" is: Upper Kohistan"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is: Pattan Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Bankad Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Kandia Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
			    else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Dassu Tehsil"<<endl;
			if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			
				}	
		}
	else if(d==4)
	{
	cout << "division of "<<name<<" is: Kohat Division"<<endl;
		if(e==1)
		{
		cout << "district of "<<name<<" is: Kohat"<<endl;
		if(f==1)
		{
			cout << "Tehsil of "<<name<<" is:  Kohat Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Lachi Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			
		}
		else if(e==2)
		{
		cout << "district of "<<name<<" is: Karak"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Karak Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Banda Daud Shah Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Takht-e-Nasrati Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
		}
		else if(e==3)
		{
		cout << "district of "<<name<<" is: Hangu"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Hangu Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Tall Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
		}
		else if(e==4)
		{
		cout << "district of "<<name<<" is: Kurram"<<endl;
		if(f==1)
		{
			cout << "Tehsil of "<<name<<" is:  Central Kurram"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Lower Kurram"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
		}
		else if(e==5)
		{
		cout << "district of "<<name<<" is: Orakzai"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Central Orakzai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Ismail Zai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Lower Orakzai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==4)
			{
			cout << "Tehsil of "<<name<<" is:  Upper Orakzai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
		}
		}
	else if(d==5)
		{
		cout << "division of "<<name<<" is: Mardan Division"<<endl;
		if(e==1)
			{
		cout << "district of "<<name<<" is: Mardan"<<endl;
			if(f==1)
			{
			cout << "Tehsil of "<<name<<" is:  Katlang Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==2)
			{
			cout << "Tehsil of "<<name<<" is:  Rustam Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Ghari Kapura Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==4)
			{
			cout << "Tehsil of "<<name<<" is: Mardan Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==5)
			{
			cout << "Tehsil of "<<name<<" is: Takht Bhai Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
		}
		}
		else if(e==2)
		{
		cout << "district of "<<name<<" is: Swabi"<<endl;
		   	 if(f==1)
		   	 {
			cout << "Tehsil of "<<name<<" is:  Topi Tehsil"<<endl;
    				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
				}	
    			if(f==2)
    			{
			cout << "Tehsil of "<<name<<" is:  Lahor Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==3)
			{
			cout << "Tehsil of "<<name<<" is:  Razar Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			if(f==4)
			{
			cout << "Tehsil of "<<name<<" is:  Swabi Tehsil"<<endl;
				if(u==1)
				cout << "Union council "<<name<<" is:  a"<<endl;
				if(u==2)
				cout << "Union council "<<name<<" is:  b"<<endl;
				if(u==3)
				cout << "Union council "<<name<<" is:  c"<<endl;
				if(u==4)
				cout << "Union council "<<name<<" is: d"<<endl;
				else
				cout << "Union council "<<name<<" is: e"<<endl;
			}	
			}

if(a==2)
{

cout << "Province of "<<name<<" is: FATA"<<endl;
	if(d==1)
	cout << "division of "<<name<<" is: Tribal Agencies "<<endl;
	else if(a==2)
	cout << "division of "<<name<<" is: Frontier Regions "<<endl;
}
else if(a==3)
{
cout << "Province of "<<name<<" is: Punjab"<<endl;
	if(d==1)
	{
	cout << "division of "<<name<<" is: Lahore Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Kasur"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Lahore"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Nankana Sahib"<<endl;
		else
		cout << "district of "<<name<<" is: Sheikhupura"<<endl;
	}
	else if(d==2)
	{
	cout << "division of "<<name<<" is: Gujranwala Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Gujranwala"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Gujrat"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Mandi Bahauddin"<<endl;
		else if(e==4)
		cout << "district of "<<name<<" is: Hafizabad"<<endl;
		else
		cout << "district of "<<name<<" is: Sialkot"<<endl;
	}
	else if(d==3)
	{
	cout << "division of "<<name<<" is: Rawalpindi Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: District Rawalpindi"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: District Attock"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: District Jhelum"<<endl;
		else
		cout << "district of "<<name<<" is: District Chakwal"<<endl;
	}
	else if(d==4)
	{
	cout << "division of "<<name<<" is: Faisalabad Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: District Faisalabad"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: District Toba Tak Singh"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: District Jhang"<<endl;
		else
		cout << "district of "<<name<<" is: District Chiniot"<<endl;
	}
	else if(d==5)
	{
	cout << "division of "<<name<<" is: Multan  Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Lodhran"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Khanewal"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Vehari"<<endl;
		else
		cout << "district of "<<name<<" is: City District Multan"<<endl;
	}
	
}
else if(a==4)
{
cout << "Province of "<<name<<" is: Sindh"<<endl;
	if(d==1)
	{
	cout << "division of "<<name<<" is: Karachi Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Karachi Central District"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Karachi East District"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Karachi South District"<<endl;
		else
		cout << "district of "<<name<<" is: Karachi West District"<<endl;
	}
	else if(d==2)
	{
	cout << "division of "<<name<<" is: Hyderabad Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: District Hyderabad"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Tando Mohammad Khan"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Matiari"<<endl;
		else
		cout << "district of "<<name<<" is:  Tando Allahyar"<<endl;
	}
	else if(d==3)
	{
	cout << "division of "<<name<<" is: Sukkur Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Sukkur"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Khairpur"<<endl;
		else
		cout << "district of "<<name<<" is: Ghotki"<<endl;
	}
	else if(d==4)
		{
	cout << "division of "<<name<<" is: Mirpurkhas Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Sukkur"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Khairpur"<<endl;
		else
		cout << "district of "<<name<<" is: Ghotki"<<endl;
	}
	else if(d==5)
	{
	cout << "division of "<<name<<" is: Jacobabad District"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Kashmore District"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Larkana District"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Qambar-Shahdadkot District"<<endl;
		else
		cout << "district of "<<name<<" is: Shikarpur District"<<endl;
	}
}
else if(a==5)
{
cout << "Province of "<<name<<" is: Balochistan"<<endl;
	if(d==1)
	{
	cout << "division of "<<name<<" is: Kalat Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Awaran"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: district Kalat"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: district Kharan"<<endl;
		else if(e==4)
		cout << "district of "<<name<<" is: district Khuzdar"<<endl;
		else
		cout << "district of "<<name<<" is: district Lasbela"<<endl;
		
	}
	else if(d==2)
	{
	cout << "division of "<<name<<" is: Makran Division"<<endl;
	if(e==1)
		cout << "district of "<<name<<" is: Turbat"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Gwadar"<<endl;
		else
		cout << "district of "<<name<<" is: Panjgur"<<endl;
	
	}
	else if(d==3)
	{
	cout << "division of "<<name<<" is: Nasirabad Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Jaffarabad"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Jhal Magsi"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Nasirabad"<<endl;
		else
		cout << "district of "<<name<<" is: Sohbatpur"<<endl;
	
	}
	else if(d==4)
	{
	cout << "division of "<<name<<" is: Quetta Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Quetta District"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Pishin District"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Killa Abdullah District"<<endl;
		else
		cout << "district of "<<name<<" is: Chaman District"<<endl;
		}
	else if(d==5)
	{
	cout << "division of "<<name<<" is: Sibi  Division"<<endl;
		if(e==1)
		cout << "district of "<<name<<" is: Sibi District"<<endl;
		else if(e==2)
		cout << "district of "<<name<<" is: Kohlu District"<<endl;
		else if(e==3)
		cout << "district of "<<name<<" is: Dera Bugti District "<<endl;
		else if(e==4)
		cout << "district of "<<name<<" is: Ziarat District"<<endl;
		else
		cout << "district of "<<name<<" is: Harnai District"<<endl;
	}
}
else if(a==6)
{

cout << "Province of "<<name<<" is: Islamabad"<<endl;
	 if(d==6)
	cout << "division of "<<name<<" is: Islamabad"<<endl;
}

}
}