#include<iostream>
using namespace std;
class car{
	public:
	string brand;
	string color;
	int model;
	int price;
	 void inputcar(){
		cout<<"brand"<<endl;
		cin>>brand;
		cout<<"color"<<endl;
		cin>>color;
		cout<<"model"<<endl;
		cin>>model;
		cout<<"price"<<endl;
		cin>>price;
	}
	void displaycar(){
		cout<<"cars detail"<<endl;
		cout<<"car name "<<endl;
		cout<<"brand :"<<brand<<endl;
		cout<<"color :"<<color<<endl;
		cout<<"model :"<<model<<endl;
		cout<<"price :"<<price<<endl;
	}
};
int main(){
	car c1;
	c1.inputcar();
	c1.displaycar();
	return 0;
}
