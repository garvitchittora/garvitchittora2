#include <bits/stdc++.h>
using namespace std;

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	
    	
    	string name,mobile,registered,item;
    	cout<<'#'*60;
        cout<<"Welcome to Big Bazaar \n Tax invoice / Bill of supply \n Big Bazaar UDAIPUR \n UDAIPUR -313001 \n TEL NO. 0294-2426756\n";
		cout<<"Enter your name \n";
		cin>>name;
		
		cout<<"Enter your MOBILE no. \n";
		cin>>mobile; 
		ofstream myfile("bigbazaar.txt",ios::app);
		myfile<<mobile;
		myfile.close();
		cout<<" sir you are old or new customer \n";
		cin>>registered;
		if(registered=="old")
			cout<<"Sir you are old costumer\n";
		else if(registered=="new")
			cout<<"Sir you are new costumer\n";
		else
			cout<<"Sir Enter correct input\n";
	int i=1,qty,count=0,a[10000000];
	map <string,int> mp;
	
	while(i!=0)
	{
    	cout<<"Enter the item";
		cin>>item;    
		cout<<"Enter quantity";
		cin>>qty;	
		mp[item]+=qty;	
		cout<<"Enter price";
		cin>>a[count];	
        cout<<" Enter 1 to buy more \n else press 0 ";
        cin>>i;
        count++;
	}
	count=0;
	cout<<"ITEM"<<"	"<<"QTY"<<"	"<<"PRICE PER PIECE"<<"TOTAL PER ITEM";
	map <string,int> :: iterator it ;
	for(it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"	"<<it->second<<"	"<<a[count]<<"	"<<a[count]*(it->second);
		count++;
	}
	int sum;
	for(int j=0;j<=count;j++)
	{
		sum+=a[j];
	}
	cout<<"TOTAL "<<sum;
	return 0;
}
