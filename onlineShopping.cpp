#include <iostream>
#include <windows.h>
#include <string.h> //header file to include string
#include <time.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void welcome1();
void welcome();
void gotoxy(int x,int y);
void add();
void view();
void mainmenu();
void searchproduct();
void login();
void buy();
void regstr();
void forgot();
void login1();
void regstr1();
void forgot1();
void add_customer();
string itos(int num);
int stoii(string s);
int main()
{
    welcome1();
    system("cls");
    welcome();
    system("cls");
	int ch;
	int a;
	cout<<"Enter 1 of you are an admin and enter 2 if you are a customer "<<endl;
	cin>>a;


	if(a==1)
    {
        int ch;
	cout<<"1.Login\n2.Register\n3.Forgot credential\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			login();
			break;
		case 2:
			regstr();
			break;
		case 3:
			forgot();
			break;
		default:
			cout<<"Sorry, wrong choice selected."<<endl;
	}
	cout<<endl;
	char x;
	cout<<"Enter non-integer to continue: ";
	cin>>x;
	if(x)
	{
	    system("cls");
		mainmenu();
	}
	else
	{
	    system("cls");
		main();
	}
}
else if(a==2)
    {
         int ch;
	cout<<"1.Login\n2.Register\n3.Forgot credential\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			login1();
			break;
		case 2:
			regstr1();
			break;
		case 3:
			forgot1();
			break;
		default:
			cout<<"Sorry, wrong choice selected."<<endl;
	}
	cout<<endl;
char x;
	cout<<"Enter non-integer to continue:";
	cin>>x;
	if(x)
	{
	    system("cls");
		mainmenu();
	}
	else
	{
		main();
	}
}
}
void gotoxy(int x,int y)  //function to manage cursor
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void welcome1()   //for first welcome page
{
    int j;
    char str[]="\n\n\n\n\n\t\t\t************************WELCOME TO PROJECT OF************************ \n\n\t\t\t********************Avisha Goyal********************* \n\t\t\t********************Nikita Bansal************************** \n\t\t\t**********************Akshita Khandelwal********************** \n\t\t\t**********************Nokesha Marwari***************************" ;
    for(j=0;j<strlen(str);j++)
    {
      printf("%c",str[j]);
    }
    printf("\t\t\t\n\nPress any key to continue\n") ;
    getch();
    system("cls");
	gotoxy(25,6);
printf("  *------------------*");
}

void welcome()      //welcome page 2
{


gotoxy(25,6);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,7);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,8);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,9);
printf("        =                 WELCOME                   =");
gotoxy(25,10);
printf("        =                   TO                      =");
gotoxy(25,11);
printf("        =                 ONLINE                   =");
gotoxy(25,12);
printf("        =                SHOPPING                   =");
gotoxy(25,13);
printf("        =               MANAGEMENT                  =");
gotoxy(25,14);
printf("        =                 SYSTEM                    =");
gotoxy(25,15);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,16);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,17);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(28,25);

printf(" Enter any key to continue.....");
getch();
}
void mainmenu()        //main menu
{

    int ch1,i;
    char s[29],p[6];
    printf("-----------------WELCOME TO THE SHOP -------------n");
     gotoxy(40,4);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1. ADD ENTRIES\n");
    gotoxy(40,8);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2. VIEW ENTRIES\n");
    gotoxy(40,10);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3. SEARCH PRODUCT DETAILS\n");
    gotoxy(40,14);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4. BUY PRODUCT\n");
    gotoxy(40,18);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5. EXIT\n");

    gotoxy(40,24);
    cout<<"Enter your choice ";
    cin>>ch1;
    switch(ch1)
    {
    case 1:   //to add books
        add();
        break;
    case 2:     //to see the book list
        view();
         break;
    case 3:
        searchproduct() ;
         break;
    case 4:
        buy();
         break;
    case 5:
    {
        system("cls");
        gotoxy(40,5);
        printf("Exiting the application..............................\n");
        gotoxy(29,7);
        printf("****************************************************\n");
        gotoxy(32,9);
        printf("*************************************\n");
        exit(0);
        break;
    }

    default:
    {
        gotoxy(40,26);
        printf("Wrong choice!!Please enter a valid choice ");
        system("cls");
        mainmenu();
        break;
    }
    }
}


string itos(int num){
	ostringstream str1;

	str1 << num;

	string istring = str1.str();

	if(num<10){
        istring="0"+istring;
	}

	return istring;
}

int stoii(string s){

    stringstream str(s);
    int x = 0;
    str >> x;

    return x;
}


void buy()
{
    system("cls");
    fstream myfile;
myfile.open("electronics.txt",ios::in);
ofstream outfile,rfile;
outfile.open("buy.txt",ios::app);
int c=0,c1=0,n=1,m=1,o=1,e,a,qty,p,v;
cout<<"\xB2 Enter the product id : ";
cin>>v;
//cin>>m;
char ch;
string s,st,s1,price,d,temp;

while(myfile.eof()==0)
{
    myfile>>s;
    c++;
    if(c==((4*m)-3))
    {
        m++;
        a=stoii(s);
    }
    //cout<<a<<endl;
    if(a==v)
    {
        c1=1;
        myfile>>s1;
        myfile>>price;
        myfile>>d;
        qty=stoii(d);
if(qty==0)
{
cout<<"Sorry!! There are no electronic products left having id "<<a<<"in the shop"<<endl;
break;
}
else
{
    gotoxy(35,12);
    cout<<"There are "<<qty<<"left in the shop"<<endl;
}


gotoxy(45,10);
printf("THE ELECTRONIC PRODUCT IS AVAILABLE");
gotoxy(40,14);
cout<<"\xB2 The name of the product is "<<s1;
gotoxy(40,16);
cout<<"\xB2 Enter customer name : ";
cin>>st;
gotoxy(40,18);
cout<<"\xB2 The PRODUCT of ID "<<a<<" is purchased \xB2 ";
outfile<<a<<" "<<s1<<" "<<price<<endl;
        //cout<<s1<<" "<<price<<" "<<qty<<endl;
    break;
    }
}
myfile.close();
outfile.close();
gotoxy(40,14);
if(c1==0)
{
    printf("Sorry !! No such product found");
}
else
{
myfile.open("electronics.txt",ios::in);
rfile.open("copy.txt",ios::app);

while(myfile.eof()==0)
{

    myfile>>s;

    myfile>>s1;
        myfile>>price;
        myfile>>d;
    if(temp==s){
        break;
    }
    //cout<<s<<" "<<s1<<" "<<price<<" "<<d<<endl;
    qty=stoii(d);
    a=stoii(s);


    if(a==v && qty!=0)
    {
        qty--;
        rfile<<a<<" "<<s1<<" "<<price<<" "<<qty<<endl;
    }
    else{
        rfile<<a<<" "<<s1<<" "<<price<<" "<<qty<<endl;
    }
    temp=s;
}
myfile.close();
rfile.close();
remove("electronics.txt");
rename("copy.txt","electronics.txt");
}
gotoxy(40,24);
printf("Buy any more?(Y/N)");
if(getch()=='Y' || getch()=='y')
{
    system("cls");
    buy();
}
else
{
    system("cls");
}
}



void add_customer() {
   // open a file in write mode.
    system("cls");
   fstream outfile,abcfile;
   string line,phn,email,id;
   outfile.open("Customer.txt",ios::app | ios::out);

   cout << "Enter customer's name: ";
    getline(cin, line);
    getchar();
cout << "Enter customer id: ";
    cin>>id;
getchar();
cout<<"Enter phone no.: ";
    getline(cin,phn);
    getchar();
    cout<<"Enter email id: ";
    getline(cin,email);
     getchar();


            outfile << line <<" "<<id<<" "<<phn<<" "<<email<< endl;
            cout<<"Data written"<<endl;


   outfile.close();
   abcfile.close();
}

void add()
{
    system("cls");
    int x;
      string ename,bname,pname;
      int ecost,pcost,eqty,pqty,bcost,bqty,eid,bid,pid;
      cout<<"Enter the category of the product"<<endl;
      cout<<"1 - Electronics"<<endl;
      cout<<"2 - Books"<<endl;
      cout<<"3 - Personal care"<<endl;
      cin>>x;
      if(x==1)
      {
          ofstream myfile;
          myfile.open("electronics.txt",ios::app);
          cout<<"Enter product id - "<<endl;
          cin>>eid;

          cout<<"Enter product name - "<<endl;
          cin>>ename;

          cout<<"Enter product price - "<<endl;
          cin>>ecost;
          cout<<"Enter product quantity - "<<endl;
          cin>>eqty;
          myfile<<eid<<" "<<ename<<" "<<ecost<<" "<<eqty<<endl;
      }
      else if(x==2)
      {
          ofstream myfile;
          myfile.open("books.txt",ios::app);
          cout<<"Enter product id - "<<endl;
          cin>>bid;
          cout<<"Enter product name - "<<endl;
          cin>>bname;

          cout<<"Enter product price - "<<endl;
          cin>>bcost;
          cout<<"Enter product quantity - "<<endl;
          cin>>bqty;
          myfile<<bid<<" "<<bname<<" "<<bcost<<" "<<bqty<<endl;
      }
      else if(x==3)
      {
          ofstream myfile;
          myfile.open("personal.txt",ios::app);
          cout<<"Enter product id - "<<endl;
          cin>>pid;
          cout<<"Enter product name - "<<endl;
          cin>>pname;
          cout<<"Enter product price - "<<endl;
          cin>>pcost;
          cout<<"Enter product quantity - "<<endl;
          cin>>pqty;
          myfile<<pid<<" "<<pname<<" "<<pcost<<" "<<pqty<<endl;
      }
      else
      {
          cout<<"Wrong choice"<<endl;
      }
}
void view()
{
    system("cls");
    int x;
    string s,s1,s2;
    cout<<"Enter the category of the product"<<endl;
    cout<<"1 - Electronics"<<endl;
    cout<<"2 - Books"<<endl;
    cout<<"3 - Personal care"<<endl;
    cin>>x ;
    if(x==1)
    {
        ifstream myfile;
        myfile.open("electronics.txt");
        cout<<"PRODUCT NAME  PRICE  QUANTITY"<<endl;
        while(myfile)
        {
            getline(myfile,s);
            cout<<s<<endl;
        }
    }
    else if(x==2)
    {
        ifstream myfile;
        myfile.open("books.txt");
        cout<<"PRODUCT NAME  PRICE  QUANTITY"<<endl;
        while(myfile)
        {
            getline(myfile,s1);
            cout<<s1<<endl;
        }
    }
    else if(x==3)
    {
        ifstream myfile;
        myfile.open("personal.txt");
        cout<<"PRODUCT NAME  PRICE  QUANTITY"<<endl;
        while(myfile)
        {
            getline(myfile,s2);
            cout<<s2<<endl;
        }
    }
    else
    {
        cout<<"Wrong choice"<<endl;
    }
}




void searchproduct()
{
    system("cls");
    size_t pos;
    string line;
    int id,x;
    string name,s;
    cout<< "Enter the category to be searched:"<<endl;
    cout<< "1 for Electronics,2 for Books,3 for personal products"<<endl;;
    cin>>x;
    /*cout<<"Enter the product id to be searched"<<endl;
    cin>>id; */
    cout<<"Enter the product name to be searched"<<endl;
    cin>>name;
    int count=0;
    if(x==1)
    {
        ifstream myfile;
        myfile.open("electronics.txt");
        if(myfile.is_open())
        {
            while(getline(myfile,line))
            {
                pos=line.find(name);
                if(pos!=string::npos) //string::npos is returned if string is not found
                {
                    cout<<"Product found"<<endl<<endl;
                    cout<<"PRODUCT NAME  PRICE  QUANTITY"<<endl;
                    cout<<line<<endl;
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                cout<<"Product not found"<<endl;
            }
        }

    }
    else if(x==2)
    {
           ifstream myfile;
        myfile.open("books.txt");
        if(myfile.is_open())
        {
            while(getline(myfile,line))
            {
                pos=line.find(name);
                if(pos!=string::npos) //string::npos is returned if string is not found
                {
                    cout<<"Product found"<<endl;
                    break;
                }
            }
    }
    }
    else if(x==3)
    {
        ifstream myfile;
        myfile.open("personal.txt");
        if(myfile.is_open())
        {
            while(getline(myfile,line))
            {
                pos=line.find(name);
                if(pos!=string::npos) //string::npos is returned if string is not found
                {
                    cout<<"Product found"<<endl;
                    break;
                }
            }
    }
    }
    else{
        cout<<"Wrong choice"<<endl;
    }
}



void login()
{
	int t=0;
	string usr,pas,u,p;
	cout<<"Enter the username: ";
	cin>>usr;

	cout<<"Enter the password: ";
	cin>>pas;
	ifstream read("username.txt"); //ifstream uses here for reading the file
	while(read>>u>>p) // while loop uses here for reading the file till end and in each iteration registered username and password store in u and p respectively
	{
		if(u==usr && p==pas)
		{
			t=1;
			break;
		}
	}
	read.close();
	if(t==1)
	{
		cout<<"Login successful"<<endl;
	}
	else
	{
		cout<<"Login error."<<endl;
		exit(0);
	}
}



void forgot()
{
	int ch;
	system("cls");
	cout<<"1.Search your account by username\n2.Search Your account by password\n3.Mainmenu\n4.Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int t=0;
				string su,u,p;
				cout<<"Enter your remembered username:";
				cin>>su;
				ifstream read("username.txt");
				while(read>>u>>p)
				{
					if(su==u)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nPassword is: "<<p<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
		case 2:
			{
				int t=0;
				string sp,u,p;
				cout<<"Enter your remembered password:";
				cin>>sp;
				ifstream read("username.txt");
				while(read>>u>>p)
				{
					if(sp==p)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nUsername is: "<<u<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
	    case 3:
		    {
		    	cout<<endl;
		    	main();
		    	break;
			}
		default:
            {
				cout<<"Wrong choice selected.press a key to try again!"<<endl;
				forgot();
			}

	}
}



void regstr1()
{
	int t=0;
	string usr,pas,u,p;
	system("cls");
	cout<<"Enter username:";
	cin>>usr;
	ofstream write("username1.txt",ios::app); // username file created which of append type
	ifstream read("username1.txt");
	while(read>>u>>p)
	{
		if(u==usr)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"Username is already taken."<<endl;
	}
	else
	{
		cout<<"Enter password:";
		cin>>pas;
		write<<usr<<" "<<pas<<endl;
		cout<<"Registration is successfull."<<endl;
	}
	write.close();
}



void login1()
{
	int t=0;
	string usr,pas,u,p;
	cout<<"Enter the username: ";
	cin>>usr;
	cout<<"Enter the password: ";
	cin>>pas;
	ifstream read("username1.txt"); //ifstream uses here for reading the file
	while(read>>u>>p) // while loop uses here for reading the file till end and in each iteration registered username and password store in u and p respectively
	{
		if(u==usr && p==pas)
		{
			t=1;
			break;
		}
	}
	read.close();
	if(t==1)
	{
		cout<<"Login successful"<<endl;
	}
	else
	{
		cout<<"Login error."<<endl;
	}
}



void forgot1()
{
	int ch;
	system("cls");
	cout<<"1.Search your account by username\n2.Search Your account by password\n3.Mainmenu\n4.Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int t=0;
				string su,u,p;
				cout<<"Enter your remembered username:";
				cin>>su;
				ifstream read("username1.txt");
				while(read>>u>>p)
				{
					if(su==u)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nPassword is: "<<p<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
		case 2:
			{
				int t=0;
				string sp,u,p;
				cout<<"Enter your remembered password:";
				cin>>sp;
				ifstream read("username1.txt");
				while(read>>u>>p)
				{
					if(sp==p)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nUsername is: "<<u<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
	    case 3:
		    {
		    	cout<<endl;
		    	main();
		    	break;
			}
		default:
			{
				cout<<"Wrong choice selected.press a key to try again!"<<endl;
				forgot1();
			}

	}
}



void regstr()
{
	int t=0;
	string usr,pas,u,p;
	system("cls");
	cout<<"Enter username:";
	cin>>usr;
	ofstream write("username.txt",ios::app); // username file created which of append type
	ifstream read("username.txt");
	while(read>>u>>p)
	{
		if(u==usr)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"Username is already taken."<<endl;
	}
	else
	{
		cout<<"Enter password:";
		cin>>pas;
		write<<usr<<" "<<pas<<endl;
		cout<<"Registration is successful."<<endl;
	}
	write.close();
}
