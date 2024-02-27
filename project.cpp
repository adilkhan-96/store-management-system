#include<iostream>
#include<string>
using namespace std;
class line
{ public:
	void linel()
	{ 
		for (int i = 0; i <= 77; i++)
			cout << "--";	
	}

};

class items    
{
public:
	int	a,b; string n;
	void in()
	{
		cout << "enter name of item ";
		cin >> n;
		
	}
	void brands()
	{
		cout << " select your favourite brand ";
		cin >> b;
	}
};

class mobile :public items   
{ public:
long long int cal,calculation;
	
	void menu()
	{
		cout << "We have 5 brands\n * press 1 for Q-mobile.\n * press 2 for Samsung.\n * press 3 for iphone .\n * press 4 for Nokia .\n * press 5 for Motrolla.\n  " << endl;
	}
	void mobile_item()
	{ 
		
		switch (b)
		{ float c;
		case 1:  char ch;
			   cout<<"\n\n We have Q-mobiles series select your favourite mobile '\n\n * Press..\n a) Q-mobile X-70 price 7000 quntity 200\n b) Q-mobile X-10 price 8000 quntity 100\n c) Q-mobile X-80 price 6000 quntity 100 \n d) Q-mobile X-80 price 12000 quntity 200\n e) Q-mobile ix-10 price 7000 quntity 80\n"<<endl;
			    cout<<"enter your choice";
				cin>>ch;
				switch(ch)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{ if(c<=200)
					{cal=7000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
						throw "sorry we have just 200  Q-mobile X-70";
					}
					catch(char *x)
					{ cout<<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=8000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100 Q-mobile X-10 ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=6000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  Q-mobile X-80 ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=200)
					{cal=12000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  Q-mobile X-80 ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=80)
					{cal=7000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 80  Q-mobile ix-10 ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 2:
			char cho;
			   cout<<"\n\n We have Samsung-mobiles series select your favourite mobile '\n\n * Press..\n a) Samsung Glaxy X-6 price 12000 quantity 100\n b) Samsung S-3 price 8000 quntity 100\n c) Samsung-S7 price 20000 quntity 120 \n d) Samsung-S2 price 6000 quntity 110\n e) Samsung-S4 price 13000 quntity 140   "<<endl;
			    cout<<"enter your choice";
				cin>>cho;
				switch(cho)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=12000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  Samsung Glaxy X-6  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=8000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  Samsung Glaxy S-3  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=120)
					{cal=20000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120  Samsung -S7  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=110)
					{cal=6000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 110  Samsung -S2  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=140)
					{cal=13000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 140  Samsung -S4  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 3:
			char choi;
			   cout<<"\n\n We have Iphone-mobiles series select your favourite mobile '\n\n * Press..\n a) iphone 7 price 80000 quntity 150\n b) iphone 6 price 60000 quntity 100\n c) iphone 5 price 25000 quntity 60\n d) iphone 3G price 3000 quntity 20  \n e) iphone 3Gs price 5000 quntity 50    "<<endl;
			    cout<<"enter your choice";
				cin>>choi;
				switch(choi)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=150)
					{cal=80000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 150  iphone 7  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=60000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  iphone 6  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=60)
					{cal=25000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 60  iphone 5  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=20)
					{cal=3000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 20  iphone 3G  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=50)
					{cal=5000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 50  iphone 3GS  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 4:
			char choic;
			   cout<<"\n\n We have Nokia-mobiles series select your favourite mobile '\n\n * Press..\n a) Nokia-330 price 200 quntity 1000\n b) Nokia-1112 price 600 quntity 500\n c) Nokia-1110  price 350 quntity 800\n d) Nokia-Lumia price 8000 quntity 600  \n e) Nokia-Lumia 540 price 5000 quntity 150    "<<endl;
			    cout<<"enter your choice";
				cin>>choic;
				switch(choic)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=1000)
					{cal=200*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 1000  NOKIA 330  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=500)
					{cal=600*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500  NOKIA 1112  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=800)
					{cal=350*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 800  NOKIA 1110  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=600)
					{cal=8000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600  NOKIA LUMIA  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=150)
					{cal=5000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 150  NOKIA LUMIA 540 ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 5:
			char choice;
			   cout<<"\n\n We have Motrolla-mobiles series select your favourite mobile '\n\n * Press..\n a) Moto-X price 8000 quntity 250\n b) Moto-G price 6000 quntity 100\n c) Moto-E price 9000 quntity 600\n d) Razer-M price 10000 quntity 500  \n e) Razer-Hd price 12000 quntity 350    "<<endl;
			    cout<<"enter your choice";
				cin>>choice;
				switch(choice)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=250)
					{cal=8000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  MOTO-X  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=100)
					{cal=6000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  MOTO-G  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=600)
					{cal=9000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600  MOTO-E  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=500)
					{cal=10000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500  RAZER-M  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>c;
					try
					{
					if(c<=350)
					{cal=12000*c;
					if(cal>=600000)
					{ calculation=cal-cal*0.3;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  RAZER- HD  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
		default: cout << "you enter wrong brand"<<endl;
		}
	}

};











class LED :public items 
{ public:
 long long int m,cal,measured;
	
	void menu()
	{
		cout << "We have 5 brands\n * press 1 for SAMSUNG-LED.\n * press 2 for CHINA-LED.\n * press 3 for SONY-LED .\n * press 4 for PHEONICS-LED .\n * press 5 for APPLE-LED .\n  " << endl;
	}
	void led_item()
	{ 
		
		switch (b)
		{ double d;
		case 1:  char ch;
			   cout<<"\n\n We have SAMSUNG-LED Series in following Inches select your favourite Inch LED '\n\n * Press..\n a) Samsung-LED 40 Inch price 70000 quantity 250\n b) Samsung-LED 30 Inch price 60000 quantity 150\n c) Samsung-LED 32 Inch price 65000 quntity 100 \n d) Samsung-LED 30 Inch price 25000 quntity 200\n e) Samsung-LED 25 Inch price 20000 quntity 120\n"<<endl;
			    cout<<"enter your choice";
				cin>>ch;
				switch(ch)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=250)
					{cal=70000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  samsung-LED 40 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=150)
					{cal=60000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 150  samsung-LED 30 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=100)
					{cal=65000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  samsung-LED 32 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=200)
					{cal=25000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  samsung-LED 25 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=120)
					{cal=20000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120  samsung-LED 25 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 2:
			char cho;
			   cout<<"\n\n We have CHINA-LED Series in following Inches select your favourite Inch LED '\n\n * Press..\n a) CHINA-LED 40 Inch price 20000 quantity 300\n b) CHINA-LED 32 Inch price 15000 quantity 250\n c) CHINA-LED 30 Inch price 12000 quntity 100 \n d) CHINA-LED 20 Inch price 6000 quntity 200\n e) CHINA-LED 18 Inch price 5000 quntity 220\n "<<endl;
			    cout<<"enter your choice";
				cin>>cho;
				switch(cho)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=300)
					{cal=20000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300  CHINA-LED 40 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=250)
					{cal=15000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  CHINA-LED 32 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=100)
					{cal=120000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  CHINA-LED 30 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=200)
					{cal=6000*d;
					if(cal>=500000)
					{measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  CHINA-LED 20 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=220)
					{cal=5000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 220  CHINA-LED 18 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 3:
			char choi;
			   cout<<"\n\n We have SONY-LED Series in following Inches select your favourite Inch LED '\n\n * Press..\n a) SONY-LED 40 Inch price 60000 quantity 300\n b)SONY-LED 32 Inch price 50000 quantity 250\n c) SONY-LED 30 Inch price 40000 quntity 120 \n d) SONY-LED 20 Inch price 20000 quntity 200\n e) SONY-LED 18 Inch price 15000 quntity 300\n   "<<endl;
			    cout<<"enter your choice";
				cin>>choi;
				switch(choi)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=300)
					{cal=60000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300  SONY-LED 40 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=250)
					{cal=50000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  SONY-LED 32 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=120)
					{cal=40000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120  SONY-LED 30 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=200)
					{cal=20000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  SONY-LED 20 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=300)
					{cal=15000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
					}
					else
					throw "sorry we have just 300  SONY-LED 18 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				}
			break;
			case 4:
			char choic;
			   cout<<"\n\n We have PHEONICS-LED Series in following Inches select your favourite Inch LED '\n\n * Press..\n a) PHEONICS-LED 40 Inch price 50000 quantity 500\n b)PHEONICS-LED 32 Inch price 40000 quantity 350\n c) PHEONICS-LED 30 Inch price 30000 quntity 120 \n d) PHEONICS-LED 20 Inch price 25000 quntity 200\n e) PHEONICS-LED 18 Inch price 20000 quntity 300\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choic;
				switch(choic)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=500)
					{cal=50000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500  PHEONICS-LED 40 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=350)
					{cal=40000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  PHEONICS-LED 32 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=120)
					{cal=30000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120  PHEONICS-LED 30 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=200)
					{cal=25000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  PHEONICS-LED 20 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=300)
					{cal=20000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300  PHEONICS-LED 18 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 5:
			char choice;
			   cout<<"\n\n We have APPLE-LED Series in following Inches select your favourite Inch LED '\n\n * Press..\n a) APPLE-LED 40 Inch price 1 Lacs quantity 1000\n b)APPLE-LED 32 Inch price 800000 quantity 350\n c) APPLE-LED 30 Inch price 70000 quntity 120 \n d) APPLE-LED 20 Inch price 50000 quntity 200\n e) APPLE-LED 18 Inch price 25000 quntity 300\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choice;
				switch(choice)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=1000)
					{cal=100000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 1000  APPLE-LED 40 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=350)
					{cal=80000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  APPLE-LED 32 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=120)
					{cal=70000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120  APPLE-LED 30 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=200)
					{cal=50000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  APPLE-LED 20 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>d;
					try
					{
					if(d<=300)
					{cal=25000*d;
					if(cal>=500000)
					{ measured=cal-cal*0.2;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<measured<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300  APPLE-LED 18 Inch  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
		default: cout << "you enter wrong brand"<<endl;
		}
	}

};









class desktop_computer :public items 
{ public:
long long int m,cal,calculation;
	
	void menu()
	{
		cout << "We have 5 brands\n * press 1 for Core-2-due.\n * press 2 for Dual-Core.\n * press 3 for I-3 .\n * press 4 for I-5 .\n * press 5 for I-7 .\n  " << endl;
	}
	void pc_item()
	{ 
		
		switch (b)
		{ float e;
		case 1:  char ch;
			   cout<<"\n\n We have Core-2-due Series in following Catogries select your favourite PC '\n\n * Press..\n a) Ram = 4-gb\tLed = 22 Inch\tHard disk size = 80Gb\tPrice = 70000\tquantity = 250\n b) Ram = 3-gb\tLed = 22 Inch\tHard disk size = 40Gb\tPrice = 50000\tquantity = 450\n c) Ram = 4-gb\tLed = 24 Inch\tHard disk size = 120Gb\tPrice = 100000\tquantity = 350\n d) Ram = 2-gb\tLed = 18 Inch\tHard disk size = 200Gb\tPrice = 40000\tquantity = 250\n e) Ram = 4-gb\tLed = 16 Inch\tHard disk size = 40Gb\tPrice = 55000\tquantity = 330\n"<<endl;
			    cout<<"enter your choice";
				cin>>ch;
				switch(ch)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=70000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  Core-2-due Ram = 4-gb\tLed = 22 Inch\tHard disk size = 80Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=450)
					{cal=50000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 450 Core-2-due  Ram = 3-gb\tLed = 22 Inch\tHard disk size = 40Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=350)
					{cal=100000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  Core-2-due Ram = 4-gb\tLed = 24 Inch\tHard disk size = 120Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=40000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  Core-2-due Ram = 2-gb\tLed = 18 Inch\tHard disk size = 200Gb  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=330)
					{cal=55000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 330  Core-2-due Ram = 4-gb\tLed = 16 Inch\tHard disk size = 40Gb  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 2:
			char cho;
			   cout<<"\n\n We have Dual-Core Series in following Catogries select your favourite PC '\n\n * Press..\n a) Ram = 3-gb\tLed = 21 Inch\tHard disk size = 60Gb\tPrice=60000\tquantity = 350\n b) Ram = 4-gb\tLed = 23 Inch\tHard disk size = 40Gb\tPrice = 55000\tquantity = 550\n c) Ram = 2-gb\tLed = 22 Inch\tHard disk size = 220Gb\tPrice = 80000\tquantity = 550\n d)Ram = 3-gb\tLed = 17 Inch\tHard disk size = 40Gb\tPrice = 25000\tquantity = 350\n e) Ram = 2-gb\tLed = 16 Inch\tHard disk size = 20Gb\tPrice = 20000\tquantity = 500\n"<<endl;
			    cout<<"enter your choice";
				cin>>cho;
				switch(cho)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=350)
					{cal=60000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  Dual-Core Ram = 3-gb\tLed = 21 Inch\tHard disk size = 60Gb  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=55000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550 Dual-Core Ram = 4-gb\tLed = 23 Inch\tHard disk size = 40Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=80000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550 Dual-Core Ram = 2-gb\tLed = 22 Inch\tHard disk size = 220Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=350)
					{cal=25000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350 Dual-Core  Ram = 3-gb\tLed = 17 Inch\tHard disk size = 40Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=500)
					{cal=20000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500 Dual-Core  Ram = 2-gb\tLed = 16 Inch\tHard disk size = 20Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 3:
			char choi;
			   cout<<"\n\n We have I-3 Series in following Catogries select your favourite PC '\n\n * Press..\n a) Ram = 4-gb\tLed = 22 Inch\tHard disk size = 80Gb\tPrice = 90000\tquantity = 600\n b) Ram = 3-gb\tLed = 21 Inch\tHard disk size = 120Gb\tPrice = 80000\tquantity = 300\n c) Ram = 8-gb\tLed = 22 Inch\tHard disk size = 500Gb\tPrice = 1 lac\tquantity = 800\n d) Ram = 8-gb\tLed = 18 Inch\tHard disk size = 20Gb\tPrice = 30000\tquantity = 550\n e) Ram = 4-gb\tLed = 16 Inch\tHard disk size = 60Gb\tPrice = 22000\tquantity = 700\n "<<endl;
			    cout<<"enter your choice";
				cin>>choi;
				switch(choi)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=600)
					{cal=90000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600  I-3 Series Ram = 4-gb\tLed = 22 Inch\tHard disk size = 80Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=300)
					{cal=80000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300  I-3 Series  Ram = 3-gb\tLed = 21 Inch\tHard disk size = 120Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=800)
					{cal=100000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 800 I-3 Series  Ram = 8-gb\tLed = 22 Inch\tHard disk size = 500Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=30000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550 I-3 Series Ram = 8-gb\tLed = 18 Inch\tHard disk size = 20Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=700)
					{cal=22000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 700 I-3 Series Ram = 4-gb\tLed = 16 Inch\tHard disk size = 60Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 4:
			char choic;
			   cout<<"\n\n We have I-5 Series in following Catogries select your favourite PC '\n\n * Press..\n a) Ram = 8-gb\tLed = 21 Inch\tHard disk size = 120Gb\tPrice=1 lac\tquantity=600\n b) Ram = 4-gb\tLed = 22 Inch\tHard disk size = 220Gb\tPrice= 90000\tquantity=800\n c) Ram = 6-gb\tLed = 17 Inch\tHard disk size = 500Gb\tPrice= 80000\tquantity= 100\n d) Ram = 6-gb\tLed = 17 Inch\tHard disk size = 40Gb\tPrice=50000\tquantity= 600\n e) Ram = 4-gb\tLed = 18 Inch\tHard disk size = 80Gb\tPrice = 35000\tquantity = 900\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choic;
				switch(choic)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=600)
					{cal=100000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600 I-5 Series Ram = 8-gb\tLed = 21 Inch\tHard disk size = 120Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=800)
					{cal=90000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 800 I-5 Series Ram = 4-gb\tLed = 22 Inch\tHard disk size = 220Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=100)
					{cal=80000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  I-5 Series Ram = 6-gb\tLed = 17 Inch\tHard disk size = 500Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=600)
					{cal=50000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600  Ram = 6-gb\tLed = 17 Inch\tHard disk size = 40Gb\   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=900)
					{cal=35000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 900  Ram = 4-gb\tLed = 18 Inch\tHard disk size = 80Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 5:
			char choice;
			   cout<<"\n\n We have I-7 Series in following Catogries select your favourite PC '\n\n * Press..\n a) Ram = 6-gb\tLed = 22 Inch\tHard disk size = 120Gb\tPrice = 90000c\tquantity = 700\n b) Ram = 6-gb\tLed = 22 Inch\tHard disk size = 500Gb\tPrice = 1lac\tquantity = 900\n c) Ram = 4-gb\tLed = 22 Inch\tHard disk size = 220Gb\tPrice= 70000\tquantity= 150\n d) Ram = 6-gb\tLed = 23 Inch\tHard disk size = 60Gb\tPrice = 70000\tquantity= 600\n e) Ram = 8-gb\tLed = 18 Inch\tHard disk size = 120Gb\tPrice = 67000\tquantity = 1200\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choice;
				switch(choice)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=700)
					{cal=90000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 700  Ram = 6-gb\tLed = 22 Inch\tHard disk size = 120Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=900)
					{cal=100000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
					}
					else
					throw "sorry we have just 900   Ram = 6-gb\tLed = 22 Inch\tHard disk size = 500Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=150)
					{cal=70000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 150  Ram = 4-gb\tLed = 22 Inch\tHard disk size = 220Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=600)
					{cal=70000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600 Ram = 6-gb\tLed = 23 Inch\tHard disk size = 60Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=1200)
					{cal=67000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.35;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
					}
					else
					throw "sorry we have just 1200  Ram = 8-gb\tLed = 18 Inch\tHard disk size = 120Gb  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				}
			break;
		default: cout << "you enter wrong brand"<<endl;
		}
	}

};


class home_appliances :public items 
{ public:
long long int m,cal,calculation;
	
	void menu()
	{
		cout << "We have 5 types of Home appliances..\n * press 1 for Speakers.\n * press 2 for	kingston Usb.\n * press 3 for microwave oven.\n * press 4 for Printer.\n * press 5 for Camera .\n  " << endl;
	}
	void appliances_item()
	{ 
		
		switch (b)
		{ float e;
		case 1:  char ch;
			   cout<<"\n\n We have Speakers of these following Companies select your favourite Speaker '\n\n * Press..\n a) Audionic\tPrice = 12000\tquantity = 250\n b) Dell\tPrice = 5000\tquantity = 450\n c) China\tPrice = 1000\tquantity = 350\n d) Dani\tPrice = 4000\tquantity = 250\n e) Pioneer\tPrice = 5500\tquantity = 330\n"<<endl;
			    cout<<"enter your choice";
				cin>>ch;
				switch(ch)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=12000*e;
					if(cal>=50000)
					{ calculation=cal-cal*0.1;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  AUDIONIC SPEAKER   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=450)
					{cal=5000*e;
					if(cal>=50000)
					{ calculation=cal-cal*0.1;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 450  DELL SPEAKER   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=350)
					{cal=4000*e;
					if(cal>=50000)
					{ calculation=cal-cal*0.1;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350  CHINA SPEAKER   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=1000*e;
					if(cal>=50000)
					{ calculation=cal-cal*0.1;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250  DANI SPEAKER   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=330)
					{cal=5500*e;
					if(cal>=50000)
					{ calculation=cal-cal*0.1;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 330  PIONEER SPEAKER   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 2:
			char cho;
			   cout<<"\n\n We have Kingston Usb of these following size select your favourite Usb '\n\n * Press..\n a) size = 16Gb\tPrice = 1200\tquantity = 2000\n b) size = 8Gb\tPrice = 1000\tquantity = 1500\n c) size = 4Gb\tPrice = 800\tquantity = 5000\n d) size = 2Gb\tPrice = 200\tquantity = 20\n e) size = 32Gb\tPrice = 2500\tquantity = 25000\n"<<endl;
			    cout<<"enter your choice";
				cin>>cho;
				switch(cho)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=2000)
					{cal=1200*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.02;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 2000    ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=1500)
					{cal=1000*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.02;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 1500    ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=5000)
					{cal=800*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.02;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 5000   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=20)
					{cal=200*e;
					if(cal>=700000)
					{ calculation=cal-cal*0.02;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 20   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=25000)
					{
					}
					else
					throw "sorry we have just 25000  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 3:
			char choi;
			   cout<<"\n\n We have Microwave Oven of these following Companies select your favourite Oven '\n\n * Press..\n a) Dawlance\tPrice = 18000\tquantity = 100\n b) Sony\tPrice = 8000\tquantity = 400\n c) China\tPrice = 6000\tquantity = 300\n d) Panasonic\tPrice = 10000\tquantity = 250\n e) Orient\tPrice = 9000\tquantity = 500\n"<<endl;
			    cout<<"enter your choice";
				cin>>choi;
				switch(choi)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=100)
					{cal=18000*e;
					if(cal>=25000)
					{ calculation=cal-cal*0.03;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 100  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=400)
					{cal=8000*e;
					if(cal>=25000)
					{ calculation=cal-cal*0.03;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 400     ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=300)
					{cal=6000*e;
					if(cal>=25000)
					{ calculation=cal-cal*0.03;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 300     ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=10000*e;
					if(cal>=25000)
					{ calculation=cal-cal*0.03;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250     ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=500)
					{cal=9000*e;
					if(cal>=25000)
					{ calculation=cal-cal*0.03;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500  Core-2-due Ram = 4-gb\tLed = 22 Inch\tHard disk size = 80Gb   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 4:
			char choic;
			   cout<<"\n\n We have Printers of these following Companies select your favourite Printer '\n\n * Press..\n a) HP\t\tPrice = 6000\tquantity = 120\n b) Dell\tPrice = 12000\tquantity = 200\n c) China\tPrice = 2000\tquantity = 400\n d) Intell\tPrice = 7000\tquantity = 200\n e) laserJet\tPrice = 17000\tquantity = 1000\n"<<endl;
			    cout<<"enter your choice";
				cin>>choic;
				switch(choic)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=120)
					{cal=6000*e;
					if(cal>=20000)
					{ calculation=cal-cal*0.05;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 120   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=200)
					{cal=12000*e;
					if(cal>=20000)
					{ calculation=cal-cal*0.05;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200    ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=400)
					{cal=2000*e;
					if(cal>=20000)
					{ calculation=cal-cal*0.05;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 400   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=200)
					{cal=7000*e;
					if(cal>=20000)
					{ calculation=cal-cal*0.05;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=1000)
					{cal=17000*e;
					if(cal>=20000)
					{ calculation=cal-cal*0.05;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 1000   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 5:
			char choice;
			   cout<<"\n\n We have Cameras of these following Companies select your favourite Camera '\n\n * Press..\n a) Kodak\tMemory = 6Gb\tPrice = 12000\tquantity = 220\n b) Dell\tMemory = 16Gb\tPrice = 18000\tquantity = 200\n c) China\tMemory = 32Gb\tprice = 1500\tquantity = 450\n d) DSLR\tMemory = 64Gb\tPrice = 100000\tquantity = 1000\n e) DSLR-X10\tMemory = 120Gb\tPrice = 200000\tquantity = 5000\n"<<endl;
			    cout<<"enter your choice";
				cin>>choice;
				switch(choice)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=220)
					{cal=12000*e;
					if(cal>=800000)
					{ calculation=cal-cal*0.12;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 220  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=200)
					{cal=18000*e;
					if(cal>=800000)
					{ calculation=cal-cal*0.12;
				cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=450)
					{cal=1500*e;
					if(cal>=800000)
					{ calculation=cal-cal*0.12;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 450  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=1000)
					{cal=100000*e;
					if(cal>=800000)
					{ calculation=cal-cal*0.12;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 1000     ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=5000)
					{cal=200000*e;
					if(cal>=800000)
					{ calculation=cal-cal*0.12;
				cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 5000  ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
		default: cout << "you enter wrong brand"<<endl;
		}
	}

};





class laptop :public items 
{ public:
long long int m,cal,calculation;
	
	void menu()
	{
		cout << "We have 5 brands\n * press 1 for Pentium 4.\n * press 2 for I-3.\n * press 3 for I-5 .\n * press 4 for I-7 .\n * press 5 for I-9 .\n  " << endl;
	}
	void laptop_item()
	{ 
		
		switch (b)
		{ float e;
		case 1:  char ch;
			   cout<<"\n\n We have Pentium 4 Series in following Catogries select your favourite Laptop '\n\n * Press..\n a) Ram = 2-gb\tLed = 17 Inch\tHard disk size = 20Gb\tPrice = 2000\tquantity = 50\n b) Ram = 1-gb\tLed = 12 Inch\tHard disk size = 10Gb\tPrice = 500\tquantity = 250\n c) Ram = 60-Mb\tLed = 14 Inch\tHard disk size = 20Gb\tPrice = 1000\tquantity = 350\n d) Ram = 128-Mb\tLed = 18 Inch\tHard disk size = 40Gb\tPrice = 1500\tquantity = 450\n e) Ram = 2-gb\tLed = 20 Inch\tHard disk size = 10Gb\tPrice = 500\tquantity = 30\n"<<endl;
			    cout<<"enter your choice";
				cin>>ch;
				switch(ch)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{cal=2000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=250)
					{cal=500*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 250   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=350)
					{cal=1000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
				cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 350   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=450)
					{cal=1500*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 450   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=30)
					{cal=500*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 30   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 2:
			char cho;
			   cout<<"\n\n We have I-3 Series in following Catogries select your favourite Laptop '\n\n * Press..\n a) Ram = 4-Gb\tLed = 22 Inch\tHard disk size = 120Gb\tPrice=50000\tquantity = 550\n b) Ram = 4-gb\tLed = 18 Inch\tHard disk size = 80Gb\tPrice = 60000\tquantity = 550\n c) Ram = 8-Gb\tLed = 24 Inch\tHard disk size = 500Gb\tPrice = 100000\tquantity = 500\n d)Ram = 8-Gb\tLed = 17 Inch\tHard disk size = 40Gb\tPrice = 55000\tquantity = 550\n e) Ram = 4-Gb\tLed = 19 Inch\tHard disk size = 80Gb\tPrice = 30000\tquantity = 550\n"<<endl;
			    cout<<"enter your choice";
				cin>>cho;
				switch(cho)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=50000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=60000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=500)
					{cal=100000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 500   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=55000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=30000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				default: cout<<"you enterd wrong quantity"<<endl;
				}
			break;
		case 3:
			char choi;
			   cout<<"\n\n We have I-5 Series in following Catogries select your favourite Laptop '\n\n * Press..\n a) Ram = 4-Gb\tLed = 21 Inch\tHard disk size = 40Gb\tPrice=90000\tquantity=600\n b) Ram = 4-Gb\tLed = 22 Inch\tHard disk size = 120Gb\tPrice = 88000\tquantity = 200\n c) Ram = 8-Gb\tLed = 22 Inch\tHard disk size = 250Gb\tPrice = 2 lac\tquantity = 800\n d) Ram = 8-Gb\tLed = 18 Inch\tHard disk size = 20Gb\tPrice = 35000\tquantity = 550\n e) Ram = 2-Gb\tLed = 16 Inch\tHard disk size = 40Gb\tPrice = 25000\tquantity = 700\n "<<endl;
			    cout<<"enter your choice";
				cin>>choi;
				switch(choi)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=600)
					{cal=90000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 600   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=200)
					{cal=88000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 200   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=800)
					{cal=200000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 800   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=550)
					{cal=35000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 550   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=700)
					{cal=25000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
					}
					else
					throw "sorry we have just 700   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					
				break;
				}
			break;
			case 4:
			char choic;
			   cout<<"\n\n We have I-7 Series in following Catogries select your favourite Laptop '\n\n * Press..\n a) Ram = 4-Gb\tLed = 24 Inch\tHard disk size = 240Gb\tPrice=1 lac\tquantity=500\n b) Ram = 4-gb\tLed = 22 Inch\tHard disk size = 220Gb\tPrice= 80000\tquantity=800\n c) Ram = 6-Gb\tLed = 24 Inch\tHard disk size = 500Gb\tPrice= 90000\tquantity= 100\n d) Ram = 6-Gb\tLed = 22 Inch\tHard disk size = 80Gb\tPrice=50000\tquantity= 600\n e) Ram = 4-Gb\tLed = 19 Inch\tHard disk size = 80Gb\tPrice = 90000\tquantity = 900\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choic;
				switch(choic)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=100000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=80000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=90000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=50000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=90000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				}
			break;
			case 5:
			char choice;
			   cout<<"\n\n We have I-9 Series in following Catogries select your favourite Laptop '\n\n * Press..\n a) Ram = 8-Gb\tLed = 24 Inch\tHard disk size = 500Gb\tPrice = 2 lac\tquantity = 800\n b) Ram = 8-Gb\tLed = 21 Inch\tHard disk size = 80Gb\tPrice = 1lac\tquantity = 1000\n c) Ram = 4-Gb\tLed = 23 Inch\tHard disk size = 220Gb\tPrice= 80000\tquantity= 150\n d) Ram = 6-Gb\tLed = 22 Inch\tHard disk size = 80Gb\tPrice = 70000\tquantity= 800\n e) Ram = 8-Gb\tLed = 20 Inch\tHard disk size = 220Gb\tPrice = 77000\tquantity = 2200\n  "<<endl;
			    cout<<"enter your choice";
				cin>>choice;
				switch(choice)
				{ 
					
				case 'a':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=200000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'b':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=100000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'c':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=80000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'd':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=70000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				case 'e':
					cout<<"enter your quantity ";
					cin>>e;
					try
					{
					if(e<=50)
					{
					}
					else
					throw "sorry we have just 50   ";}
					catch(char *x)
					{ cout <<x<<endl;
					}
					cal=77000*e;
					if(cal>=1000000)
					{ calculation=cal-cal*0.4;
					cout<<"-------------------------------------------------------------\n\t\t *** MBA Shop ***\n\t\t *** Bill Slip***\n\n Without Discount Your Bill is this : "<<cal<<"\n After Discount Your Bill is this : "<<calculation<<"\n\n\t\t\t\t Thanks for Visiting :)\n-------------------------------------------------------------"<<endl;
					}
					else
						cout<<" the  bill is this: "<<cal<<endl;
				break;
				}
			break;
		default: cout << "you enter wrong brand"<<endl;
		}
	}

};





void main()
{
	int a;
	laptop p,p1,p2,p3,p4;
	home_appliances h,h1,h2,h3,h4;
	line x;
	mobile m,m1,m2,m3,m4;
	desktop_computer c,c1,c2,c3,c4;
	LED l,l1,l2,l3,l4;
	x.linel(); cout << endl;
	cout << "\t\t\t\t\t ******************************** Welcome to MBA Shop ********************************  \n\n * My Shop is based on Whole saling on Electronics Items\n * Here you can buy Your Required elctronics items which are available in over shop\n * You can get discount on these following crateria.\n\t-> On Mobile purachasing you can get discount of 30% if you purchased on Rs 6 lacs or more than 6 lacs\n\t-> On LED purachasing you can get discount of 20% if you purchased on Rs 5 lacs or more than 5 lacs\n\t-> On Computer purachasing you can get discount of 35% if you purchased 7 lacs or more than 7 lacs\n\t-> On Laptop purachasing you can get discount of 40% if you purchased on Rs 10 lacs or more than 10 lacs\n\t-> On purachasing Home Appliances you can get different type of discount on different appliances\n\t\t- Speakers discount of 10% on buying on Rs 50k or more than 50k\n\t\t- Usb discount of 2% on buying on Rs 10k or more than 10k\n\t\t- Oven discount of 3% on buying on Rs 25k or more than 25k\n\t\t- Printer discount of 5% on buying on Rs 20k or more than 20k\n\t\t- Camera discount of 12% on buying on Rs 8lacs or more than 8lacs\n\n* Press these buttons to select your items  \n1) For mobiles \n2) For LED\n3) For Computer\n4) For Home Appliances.\n5) For Laptops  "  << endl;
	x.linel();
	cout<<"\nenter your choice ";
	cin>>a;
	
	if(a==1)
	{
	m.menu();
	m.brands();
	m.mobile_item();
	m1.menu();
	m1.brands();
	m1.mobile_item();
	m2.menu();
	m2.brands();
	m2.mobile_item();
	m3.menu();
	m3.brands();
	m3.mobile_item();
	m4.menu();
	m4.brands();
	m4.mobile_item();
	
	}
	else if(a==2)
	{
	l.menu();
	l.brands();
	l.led_item();
	l1.menu();
	l1.brands();
	l1.led_item();
	l2.menu();
	l2.brands();
	l2.led_item();
	l3.menu();
	l3.brands();
	l3.led_item();
	l4.menu();
	l4.brands();
	l4.led_item();
	
	}
	else if(a==3)
	{
	c.menu();
	c.brands();
	c.pc_item();
	c1.menu();
	c1.brands();
	c1.pc_item();
	c2.menu();
	c2.brands();
	c2.pc_item();
	c3.menu();
	c3.brands();
	c3.pc_item();
	c4.menu();
	c4.brands();
	c4.pc_item();

	
	}
	else if(a==4)
	{
	h.menu();
	h.brands();
	h.appliances_item();
	h1.menu();
	h1.brands();
	h1.appliances_item();
	h2.menu();
	h2.brands();
	h2.appliances_item();
	h3.menu();
	h3.brands();
	h3.appliances_item();
	h4.menu();
	h4.brands();
	h4.appliances_item();
	
	}
	else if(a==5)
	{
	p.menu();
	p.brands();
	p.laptop_item();
	p1.menu();
	p1.brands();
	p1.laptop_item();
	p2.menu();
	p2.brands();
	p2.laptop_item();
	p3.menu();
	p3.brands();
	p3.laptop_item();
	p4.menu();
	p4.brands();
	p4.laptop_item();
	
	}
	else
    { cout<<" you enter wrong no please type only 1 to 5 number"<<endl;
	}
	
}