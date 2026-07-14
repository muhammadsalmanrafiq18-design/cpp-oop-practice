#include<iostream>
using namespace std;
class book{
	public:
		int bookid;
		string title;
		string author;
		int price;
		int pages;
	void inputbook(){
		cout<<"bookid :"<<endl;
		cin>>bookid;
		cout<<"title :"<<endl;
		cin>>title;
		cout<<"author :"<<endl;
		cin>>author;
		cout<<"price :"<<endl;
		cin>>price;
		cout<<"pages :"<<endl;
		cin>>pages;
	}
	void displayoutput(){
		cout<<"book details"<<endl;
		cout<<"bookid"<<bookid<<endl;
		cout<<"title"<<title<<endl;
		cout<<"author"<<author<<endl;
		cout<<"price"<<price<<endl;
		cout<<"pages"<<pages<<endl;
	}
	void isexpensive(){
		cout<<"enter the price of book"<<endl;
		cin>>price;
		if(price>1000){
			cout<<"is expensive";
		}
		else{
			cout<<"is affordable";
		}
	}
	};
int main(){
	book b1;
	b1.inputbook();
	b1.displayoutput();
	b1.isexpensive();
	return 0;
}
