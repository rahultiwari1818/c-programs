#include<iostream.h>
int const m=50;
float sum=0;
class item
{
	int itemCode[m];
	float itemPrice[m];
	int count;
	public:
	void cnt(){count=0;}
	void getItem(void);
	void displaySum(void);
	void removeItem(void);
	void displayItem(void);

};
//==========================================
void item:: getItem(void)
{
	cout<<"\n enter item code:";
	cin>>itemCode[count];
	cout<<"\n enter item price:";
	cin>>itemPrice[count];
	count++;
}
//===========================
void item:: displaySum(void)
{

	for(int i=0;i<count;i++)
	{
		sum+=itemPrice[i];
	}
	cout<<"\n total: "<<sum;
}
//===========================
void item:: removeItem(void)
{        int icode;
	cout<<"\n enter item code:";
	cin>>icode;
	for(int i=0;i<count;i++)
	{
	if(itemCode[i]==icode)
	itemPrice[i]=0;
	}
}
//===========================
void item:: displayItem(void)
{
	cout<<"\n code  price\n";
	for(int i=0;i<count;i++)
	{
	cout<<"\n"<<itemCode[i];
	cout<<"  "<<itemPrice[i];
	}
	cout<<"\n sum= "<<sum;
}
//=============================
int main()
{
	int x;
	item order;
	order.cnt();
	do
	{
		cout<<"\n you can do the following:"
			<<"\n enter appro[riate number:";
		cout<<"\n 1:Add Item.";
		cout<<"\n 2: Display Sum.";
		cout<<"\n 3: Remove Item.";
		cout<<"\n 4: Display Total Items.";
		cout<<"\n 5: quit.";

		cout<<"\n enter your choice:";
		cin>>x;
		switch(x) {
		case 1: order.getItem(); break;
		case 2: order.displaySum(); break;
		case 3: order.removeItem(); break;
		case 4: order.displayItem(); break;
		case 5: break;
		default:
		cout<<"\n inappropriate number. try again......\n";}

	} while(x!=5);

return 0;
}