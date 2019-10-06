#include <iostream>
using namespace std;

int main()
{int opcion;
float a,b,suma = 0,resta = 0 ,multiplicacion = 0,division = 0, f = 1, n,x=0,y=1,z=1;

cout<<"1 Suma"<<endl;
cout<<"2 Resta"<<endl;
cout<<"3 Multilpicacion"<<endl;
cout<<"4 Division"<<endl;
cout<<"5 Fibonacci"<<endl;
cout<<"6 Factorial"<<endl; 
cout<<"Ingrese numero de opcion: ";
cin>>opcion;

if(opcion == 1)
	{cout<<"Ingrese numero: ";
	cin>>a;
	cout<<"Ingrese segundo numero a sumar: ";
	cin>>b;
	suma = a + b;
	cout<<"La suma es: "<<suma;
	}

if(opcion == 2)
	{cout<<"Ingrese primer : ";
	cin>>a;
	cout<<"Ingrese segundo numero: ";
	cin>>b;
	resta = a - b;
	cout<<"La resta es: "<<resta;
	}

if(opcion == 3)
	{cout<<"Ingrese primer numero: ";
	cin>>a;
	cout<<"Ingrese segundo numero: ";
	cin>>b;
	multiplicacion = a * b;
	cout<<"La multiplicacion es: "<<multiplicacion;
	}

if(opcion == 4)
	{cout<<"Ingrese primer numero: ";
	cin>>a;
	cout<<"Ingrese divisor: ";
	cin>>b;
	division = a / b;
	cout<<"La division es: "<<division;
	}

if (opcion == 5)
    {cout<<"ingrese numero";
    cin>>f;
    
    for(int i=1;i<n;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
}
    cout<<"serie fibonacci es: "; 
    

	}

	

	
	return 0;
}
