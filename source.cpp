#include <iostream>
using namespace std;


int tong(int a, int b){
return a + b;
}

int hieu(int a, int b){
return a-b;
}

int tich(int a, int b){
return a*b;
}
int kiemTraChanLe(int a){
	if(a%2==0) return 1;//neu chan tra ve 1
	return 0;//neu le tra ve 0
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;


	if(phepToan=="+")
		cout<<"dap an: "<<tong(a,b);

	if(phepToan=="-")
		cout<<"dap an: "<<hieu(a,b);

	if(phepToan=="*")
		cout<<"dap an: "<<tich(a,b);

	cout << "Nhap so can kiem tra chan le: ";
	cin >> a;
	if(kiemTraChanLe(a)==1)
		cout<<"dap an: "<<a<<" la so chan";
	else if(kiemTraChanLe(a)==0)
		cout<<"dap an: "<<a<<" la so le";

	system("pause");
	return 0;
}