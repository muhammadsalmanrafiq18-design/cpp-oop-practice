#include<iostream>
using namespace std;
class product{
	public:
		int productid;
		string productname;
		string category;
		int price;
		int quantity;
		int totalvalue;
	void inputproduct(){
		cout<<"product id :"<<endl;
		cin>>productid;
		cout<<"productname :"<<endl;
		cin>>productname;
		cout<<"category :"<<endl;
		cin>>category;
		cout<<"price :"<<endl;
		cin>>price;
		cout<<"quantity :"<<endl;
		cin>>quantity;
	}
	void displayproduct(){
		cout<<"productid :"<<productid<<endl;
		cout<<"productname :"<<productname<<endl;
		cout<<"category :"<<category<<endl;
		cout<<"price :"<<price<<endl;
		cout<<"quantity"<<quantity<<endl;
	}
	void calculate_totalvalue(){
		cout<<"now we calculate the total value :"<<endl;
		totalvalue = price * quantity;
		cout<<"total_value"<<"="<<totalvalue<<endl;
	}
};
int main(){
	product p1;
	p1.inputproduct();
	p1.displayproduct();
	p1.calculate_totalvalue();
	return 0;
}
