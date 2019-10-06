#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3,n4, n5, resultado = 0;
	
	cout<<"ingrese primer numero"; cin>>n1;
	cout<<"ingrese el segundo numero"; cin>>n2;
	cout<<"ingrese el tercer numero"; cin>>n3;
	cout<<"ingrese el cuarto numero "; cin>>n4;
	cout<<"ingrese el quinto numero"; cin>>n5;
	
	resultado = ((n1 + n2 + n3 + n4 + n5) / 5);
	
	cout<<"la media es: "<<resultado<<endl;
	
	
	
	return 0;
}
