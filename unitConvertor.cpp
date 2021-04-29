// Universal Convertor Program Using C++

#include<iostream> //header file 
using namespace std;
void calculator(); //Function declaration 
void kmTom(); //function declaration

int main(){
	string name; //variable to store name 
	int option; //variable to store user option 
	
	
	cout<<"Hi, Welcome to universal convertor \n";
	cout<<"Enter your name : ";
	cin>>name; //Input name
	cout<<"Hello "<<name<<"\n"; //welcome message 
	cout<<"choose your option "<<endl; //endl -> used to print in new line
	
	cout<< "1: calculator"<<endl; //each option 
	cout<< "2: KM to M convertor"<<endl;
	cout<< "3: Fahrenheit to Celsius convertor "<<endl;
	cin>>option; //user will choose a option
	
	switch(option){
		case 1:
			calculator(); //calling calculator  function
			break;
		case 2:
			kmTom(); //calling Killometer to Meter convertor function
			break;
		case 3:
			//write a function to convert farenheit to celcius 
			 
			break;
		default:
			cout<<"Wrong option";
			break;
	}
}

void calculator(){ //calculator program 
	int select;
	int num_1, num_2, answer;
	
	cout<<"choose your option "<<endl;
	cout<< "1: Addition "<<endl;
	cout<< "2: subtraction"<<endl;
	cout<< "3: Multiplication "<<endl;
	cout<< "4: Division "<<endl;
	cin>>select;
	switch(select){
		case 1:
		cout<<" Addition"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 + num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 2:
		cout<<" Subtraction"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 - num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 3:
		cout<<" Multiplication"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 * num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 4:
		cout<<" Division"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 / num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		default:
			break;
	}
}

void kmTom(){ //Kilometre to Meter fucntion 
	float km;
	float meter;
	cout<<"\n Enter value in Kilometre: ";
	cin>>km;
	meter = km * 1000;
	cout<<km<<" KM is equal to "<<meter << " Meter";
}

void mtocm(){
	float m;
	float cm;
	cout<<"\n Enter value in Meter: ";
	cin>>m;
	cm = m * 100;
	cout<<m<<" M is equal to "<<cm << " CM";
}