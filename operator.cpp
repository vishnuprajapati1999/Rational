/* this is program for calculate arithmatic problems
of rational numbers
Made by Vishnu Prajapati
Vilnius Kolegija
Date:24/01/2019
*/

#include<iostream> //adding header file
using namespace std; //for using standard function from header files

  
class Complex //defining class named Complex
{ 
 private:
    float num, dem; //private class variable
public: 
    Complex(float r = 0, float i =1) //Constructor for class Complex
	 {
	 num = r;   dem = i; //converting  public class variable to private class variable. 
	 } 
   
  

friend Complex operator + (Complex const &, Complex const &); //declaring friend function inside class
friend Complex operator - (Complex const &, Complex const &);//declaring friend function inside class
friend Complex operator * (Complex const &, Complex const &);//declaring friend function inside class
friend Complex operator / (Complex const &, Complex const &);//declaring friend function inside class
friend Complex operator > (Complex const &, Complex const &);//declaring friend function inside class
}; 
  
  
Complex operator + (Complex const &c1, Complex const &c2) //defining operator overloading function for addition outside of class
{ 	
Complex c3; //define a new object
    c3.num=((c1.num*c2.dem)+(c1.dem*c2.num));//logic for addition
    c3.dem=(c1.dem*c2.dem);

   cout<<"="<<c3.num<<"/"<<c3.dem<<endl;
   cout<<"\n--------------------------------------------------------------------------------------------------\n";
} 
Complex operator - (Complex const &c1, Complex const &c2) //defining operator overloading function outside of class
{ 	
Complex c3; //define a new object
    c3.num=((c1.num*c2.dem)-(c1.dem*c2.num));//logic for subtraction
    c3.dem=(c1.dem*c2.dem);

   cout<<"="<<c3.num<<"/"<<c3.dem<<endl;
    cout<<"\n--------------------------------------------------------------------------------------------------\n";
} 
  Complex operator * (Complex const &c1, Complex const &c2) //defining operator overloading function outside of class
{ 	
Complex c3; //define a new object
    c3.num=((c1.num*c2.num));//logic for multiply
    c3.dem=(c1.dem*c2.dem);

   cout<<"="<<c3.num<<"/"<<c3.dem<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------\n";
} 
Complex operator / (Complex const &c1, Complex const &c2) //defining operator overloading function outside of class
{ 	
Complex c3; //define a new object
    c3.num=((c1.num*c2.dem));//logic for division
    c3.dem=(c1.dem*c2.num);

   cout<<"="<<c3.num<<"/"<<c3.dem<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------\n";
}  
Complex operator > (Complex const &c1, Complex const &c2) //defining operator overloading function outside of class
{ 	float w,r;//member variables
Complex c3; //define a new object
    w=((c1.num/c1.dem));//logic for comparision
    r=(c2.num/c2.dem);
    if(w>r){
    	cout<<c1.num<<"/"<<c1.dem<< " is "<<"greater than"<<c2.num<<"/"<<c2.dem<<endl;
    	 cout<<"\n------------------------------------------------------------------------------------------------\n";
	}
     else if(w<r){
    	cout<<c2.num<<"/"<<c2.dem<< " is "<<"greater than"<<c1.num<<"/"<<c1.dem<<endl;
    	 cout<<"\n------------------------------------------------------------------------------------------------\n";
	}
   else if(w==r){
    	cout<<c1.num<<"/"<<c1.dem<< " is "<<"equal to "<<c2.num<<"/"<<c2.dem<<endl;
    	 cout<<"\n--------------------------------------------------------------------------------------------------\n";
	}
}  
int main() 
{ int choice,a,b,c,d;//main function variables
 
	Complex c3,c1,c2;//objects of class
while(1){
	start:
		cout<<"***********Welcome to Desire Calculator***********"<<endl;//options for calculator
	cout<<"1. for addition"<<endl;
	cout<<"2. for subtraction"<<endl;
	cout<<"3. multiply"<<endl;
	cout<<"4. division"<<endl;
	cout<<"5. compare"<<endl;
	cout<<"6. compare"<<endl;
	cin>>choice;
		switch(choice) {
			case 1://for 1st case
			{
			cout<<"enter fist number:"<<endl;
			cin>>a;
			cout<<"/", cin>>b;
			cout<<endl;
				if(b==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			cout<<"enter second number:"<<endl;
			cin>>c;
			cout<<"/", cin>>d;
			cout<<endl;
				if(d==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			Complex c1(a,b), c2(c,d);//storing variables into object constructor variable 
				c3 = c1 + c2;//use of operator overloading and doing addition of rational numbers
				
				break;
			}
			case 2:
			{	
				cout<<"enter fist number:"<<endl;
			cin>>a;
			cout<<"/", cin>>b;
			cout<<endl;
				if(b==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			cout<<"enter second number:"<<endl;
			cin>>c;
			cout<<"/", cin>>d;
			cout<<endl;
				if(d==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			Complex c1(a,b), c2(c,d);//storing variables into object constructor variable 
				c3 = c1 - c2;//use of operator overloading and doing subtraction of rational numbers
				break;
			}
			case 3:
			{
			
			cout<<"enter fist number:"<<endl;
			cin>>a;
			cout<<"/", cin>>b;
			cout<<endl;
			if(b==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			cout<<"enter second number:"<<endl;
			cin>>c;
			cout<<"/", cin>>d;
			cout<<endl;
				if(d==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			Complex c1(a,b), c2(c,d);//storing variables into object constructor variable 
				c3 = c1 * c2;//use of operator overloading and doing multiply of rational numbers
				
				break;
			}
			case 4:
				{
						cout<<"enter fist number:"<<endl;
			cin>>a;
			cout<<"/", cin>>b;
			cout<<endl;
				if(b==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			cout<<"enter second number:"<<endl;
			cin>>c;
			cout<<"/", cin>>d;
			cout<<endl;
				if(d==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			Complex c1(a,b), c2(c,d);//storing variables into object constructor variable 
				c3 = c1 / c2;//use of operator overloading and doing division of rational numbers
				break;
			}
			case 5:
				{
				
				cout<<"enter fist number:"<<endl;
			cin>>a;
			cout<<"/", cin>>b;
			cout<<endl;
				if(b==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			cout<<"enter second number:"<<endl;
			cin>>c;
			cout<<"/", cin>>d;
			cout<<endl;
				if(d==0){
				cout<<"*****dinominator must not be zero.******";
				goto start;
			}
			Complex c1(a,b), c2(c,d);//storing variables into object constructor variable 
				c3 = c1 > c2;//use of operator overloading and doing comparision of rational numbers
				
				break;
			}
				case 6:
				{
					exit(0);
					break;
				}
}
}
}
    


