#include<iostream>//including library files
#include<fstream>//including library files
using namespace std;//for using standard function from header files
int choose; //declaring variable globally
class climate //defining class named climate
 {
	public:
		float humi,wind,mos,air; //declaring member variables publically
		void airtemp() //defining member fuction inside class
		{
			if(choose==1){
			
			cout<<"\tEnter the air temperature between 28 degree celsius to 40"<<endl;
			cin>>air;
		}
			if(choose==2){
			
			cout<<"\tEnter the air temperature between 7 degree celsius to 24"<<endl;
			cin>>air;
		}
			if(choose==3){
			
			cout<<"\tEnter the air temperature between 13 degree celsius to 30"<<endl;
			cin>>air;
		}
		}
		void humidity()  //defining member fuction inside class 
		{
			if(choose==1){
			
			cout<<"\tEnter the humidity between 28 degree celsius to 40"<<endl;
			cin>>humi;
		}
			if(choose==2){
			
			cout<<"\tEnter the humidity  between 7 degree celsius to 24"<<endl;
			cin>>humi;
		}
			if(choose==3){
			
			cout<<"\tEnter the humidity  between 13 degree celsius to 30"<<endl;
			cin>>humi;
		}
			
			
		}
		void windspeed() //defining member fuction inside class
		 {
			if(choose==1){
			
			cout<<"\tEnter the windspeed between 13 mph to 15 "<<endl;
			cin>>wind;
		}
			if(choose==2){
			
			cout<<"\tEnter the windspeed  between 9 mph to 12"<<endl;
			cin>>wind;
		}
			if(choose==3){
			
			cout<<"\tEnter the windspeed between 1 mph to 13"<<endl;
			cin>>wind;
		}
		}
		void moisture() //defining member fuction inside class
		 {
				if(choose==1){
			
			cout<<"\tEnter the moisture between 2 percent to 10 percent "<<endl;
			cin>>mos;
		}
			if(choose==2){
			
			cout<<"\tEnter the moisture  between 7 percent to 25 percent "<<endl;
			cin>>mos;
		}
			if(choose==3){
			
			cout<<"\tEnter the moisture  between 20 percent to 42 percent"<<endl;
			cin>>mos;
		}
			
		}
};
class trees: public climate //defining child class trees which is inherite by parents class climate
 {
	public:
		float lenth,grow,trunk;//declaring member variables of class tress
	
		void height() //defining member fuction inside class trees
		{
			if(choose==1){
			
			if(humi<=40 || air<=40 || wind<=15 || mos<=10){
				lenth=10;
				cout<<"\t\t\tHeight will increase "<<lenth<<" milimiter per week"<<"\n\n"<<endl;
			}
		}
			if(choose==2) {
			
				if(humi<=40 || air<=40 || wind<=15 || mos<=25){
				lenth=12;
				cout<<"\t\t\tHeight will increase "<<lenth<<" milimiter per week"<<"\n\n"<<endl;
			}
		}
			if(choose==3){
			
				if(humi<=40 || air<=40 || wind<=15 || mos<=42){
				lenth=15;
				cout<<"\t\t\tHeight will increase "<<lenth<<" milimiter per week"<<"\n\n"<<endl;
			}
		}
		}
		void growth_rate()//defining member fuction inside class trees
		{
			if(choose==1) {
			
			if(humi<=30 || air<=15 || wind<=20 || mos<=10){
				grow=7.6;
				cout<<"\t\t\tgrowthrate will be "<<grow<<" milimiter per week\n\n"<<endl;
			}
		}
			if(choose==2) {
			
			if(humi<=30 || air<=15 || wind<=20 || mos<=10){
				grow=8.9;
				cout<<"\t\t\tgrowthrate will be "<<grow<<" milimiter per week\n\n"<<endl;
			}
		}	
			if(choose==3) {
			
				if(humi<=30 || air<=15 || wind<=20 || mos<=42){
				grow=9.3;
				cout<<"\t\t\tgrowthrate will be "<<grow<<" milimiter per week\n\n"<<endl;
			}
		}
			
			
		}
		void trunk_size()//defining member fuction inside class trees
		{
			if(choose==1) {
			
			if(humi<=30 || air<=15 || wind<=20 || mos<=10){
				trunk=20;
				cout<<"\t\t\ttrunk size will be "<<trunk<<" centimiter per week\n\n"<<endl;
			}
		}
			if(choose==2){
			
				if(humi<=30 || air<=15 || wind<=20 || mos<=10){
				trunk=22.3;
				cout<<"\t\t\ttrunk size will be "<<trunk<<" centimiter per week\n\n"<<endl;
			}
		}  
			if(choose==3){
			
				if(humi<=30 || air<=15 || wind<=20 || mos<=42){
				trunk=26.7;
				cout<<"\t\t\ttrunk size will be "<<trunk<<" centimiter per week\n\n"<<endl;
			}
		}
		}
	
};
climate summer;//creating object called summer from class climate
climate winter;//creating object called winter from class climate
climate rainy;//creating object called rainy from class climate



trees evergreen;//creating object called evergreen from class trees
			
		


int main()
 {

	while(1) {
		cout<<"1. summer "<<endl;
		cout<<"2. winter "<<endl;
		cout<<"3. rainy "<<endl;
		cout<<"choose one season "<<endl;
		cin>>choose;
		switch(choose){
			case 1:
				summer.airtemp();//calling function airtemp from class climate by summer object
				summer.humidity();//calling function humidity from class climate by summer object
				summer.moisture();//calling function moisture from class climate by summer object
				summer.windspeed();//calling function windspeed from class climate by summer object
				evergreen.height();//calling function height from class trees by evergreen object
				evergreen.growth_rate();//calling function growth_rate from class trees by evergreen object
				evergreen.trunk_size();//calling function trunk_size from class trees by evergreen object
				break;
			case 2:
				winter.airtemp();//calling function airtemp from class climate by winter object
				winter.humidity();//calling function humidity from class climate by winter object
				winter.moisture();//calling function moisture from class climate by winter object
				winter.windspeed();//calling function windspeed from class climate by winter object
				evergreen.height();//calling function height from class trees by evergreen object
				evergreen.growth_rate();//calling function growth_rate from class trees by evergreen object
				evergreen.trunk_size();//calling function trunk_size from class trees by evergreen object
				break;
			case 3:
				rainy.airtemp();//calling function airtemp from class climate by rainy object
				rainy.humidity();//calling function humidity from class climate by rainy object
				rainy.moisture();//calling function moisture from class climate by rainy object
				rainy.windspeed();//calling function windspeed from class climate by rainy object
				evergreen.height();//calling function height from class trees by evergreen object
				evergreen.growth_rate();//calling function growth_rate from class trees by evergreen object
				evergreen.trunk_size();//calling function trunk_size from class trees by evergreen object
				break;
		}
		ofstream outfile;//creating ofstream variable for file handling
		outfile.open("file.txt");//opening file.txt
		outfile<<"length: "<<evergreen.lenth<<endl;//writing file.txt
		outfile<<"trunk size: "<<evergreen.trunk<<endl;//writing file.txt
		outfile<<"trunk size: "<<evergreen.grow<<endl;//writing file.txt
	}
	
	
}
