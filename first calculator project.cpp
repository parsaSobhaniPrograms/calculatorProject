#include<iostream>

using namespace std;

float addition_func(float a , float b){
	float addition=a+b;
	return addition;
}
float subtraction_func(float a , float b){
	float subtraction=a-b;
	return subtraction;
}
float multiply_func(float a , float b){
	float multiply=a*b;
	return multiply;
}
float division_func(float a , float b){
	float division=a/b;
	return division;
}
int prime_func(int a){
	bool is_prime = true;
	if(a==0 || a==1){
		is_prime=false;
	}
	else{
		for(int i=2 ; i<=a/2; i++){
			if(a%i==0){
				is_prime = false;
				break;
			}
		}
	}
	if(is_prime){
		cout<<"the number you have entered is prime"<<endl<<"---------"<<endl;
	}
	else{
		cout<<"the number you have entered isn't prime"<<endl<<"---------"<<endl;
	}
	return 0;
}
int factorial_func(int a){
	int factorial = 1;
	for(int i=1 ; i<=a ; i++){
		factorial = i*factorial;
	}
	return factorial;
}
int GCD_func(int a , int b){
	int GCD=a%b;
	while(GCD!=0){
		a=b;
		b=GCD;
		GCD=a%b;
	}
	return b;
}
int LCM_func(int a , int b){
	int LCM=(a*b/(GCD_func(a,b)));
	return LCM;
}
int main(){
	bool menu = true;
	while(menu){
		cout<<"menu :"<<endl<<"1.addition"<<endl<<"2.subtraction"<<endl<<"3.multiply"<<endl<<"4.division"<<endl<<"5.prime"<<endl<<"6.factorial"<<endl<<"7.GCD"<<endl<<"8.LCM"<<endl<<"9.exit"<<endl<<endl;
		int n;
		cin>>n;
		if(n<=9 & n>=1){
		if(n==1){
			cout<<"enter the first number :"<<endl;
			float a,b;
			cin>>a;
			cout<<"enter the second number :"<<endl;
			cin>>b;
			cout<<"------------"<<endl<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<addition_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==2){
			cout<<"enter the first number :"<<endl;
			float a,b;
			cin>>a;
			cout<<"enter the second number :"<<endl;
			cin>>b;
			cout<<"------------"<<endl<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<subtraction_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==3){
			cout<<"enter the first number :"<<endl;
			float a,b;
			cin>>a;
			cout<<"enter the second number :"<<endl;
			cin>>b;
			cout<<"------------"<<endl<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<multiply_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==4){
			cout<<"enter the first number :"<<endl;
			float a,b;
			cin>>a;
			cout<<"enter the second number :"<<endl;
			cin>>b;
			cout<<"------------"<<endl<<a<<" "<<"%"<<" "<<b<<" "<<"="<<" "<<division_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==5){
			cout<<"enter the number :"<<endl;
			int a;
			cin>>a;
			prime_func(a);
			cout<<endl;
			system("pause");
			system("cls");
		}
		else if(n==6){
			cout<<"enter the number :"<<endl;
			int a;
			cin>>a;
			cout<<"the factorial of "<<a<<" "<<"is : "<<factorial_func(a)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==7){
			cout<<"enter the first number :"<<endl;
			int a , b;
			cin>>a;
			cout<<"enter the secong number :"<<endl;
			cin>>b;
			cout<<"the GCD of "<<a<<" and "<<b<<" is : "<<GCD_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==8){
			cout<<"enter the first number :"<<endl;
			int a , b;
			cin>>a;
			cout<<"enter the second number :"<<endl;
			cin>>b;
			cout<<LCM_func(a,b)<<endl<<endl;
			system("pause");
			system("cls");
		}
		else if(n==9){
			cout<<"are you sure?"<<endl;
			cout<<"type y if you want to exit the program"<<endl<<"type n if you don't want to exit the program"<<endl;
			for(int z=1 ; z>0 ; z++){
				cout<<"type here : ";
			string x;
			cin>>x;
			if(x=="y"){
				menu = false;
				break;
			}
			else if(x=="n"){
				cout<<"cancled the proccess"<<endl;
				system("pause");
				system("cls");
				break;
			}
			else if(x!="y" & x!="n"){
				cout<<"undefined input"<<endl<<"------------"<<endl;
				system("pause");
			}
		}
}
else{
	cout<<endl<<"please enter a number between 1 and 9 (int)"<<endl<<endl;
	system("pause");
	system("cls");
	continue;
}
}
}
}
