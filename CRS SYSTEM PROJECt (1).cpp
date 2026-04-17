#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string choice,car,brand,username,model;
int rentday,year,day,carnum,rentfee,pass;
double password=1234;
void choose() {
    cout <<endl<<"====== Choose what you want to do ======"<<endl;
    cout <<"1: RENT CAR "<<endl;
    cout<<"2: VIEW AVAIALABL CARS "<<endl;
    cout<<"3: RETURN CAR "<<endl;
    cout<<"press any other key to EXIT "<<endl;
    cin >>choice;
    cout<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    if(choice=="1") {
        cout << "	========= RENT CARS ========= "<<endl;
        cout <<"1: CHOOSE a car  "<<endl;
        cout<<". press any other key to EXIT "<<endl;
        cout<<endl;
        cin >>choice;
        cout<<endl;
        if(choice=="1") {
            cout<<" 	***** choose a car ******"<<endl;
            cout <<"1:	BMW i5 Sedan"<<endl;
            cout<<"2:	Mercedes-benz g wagon"<<endl;
            cout<<"3:	Bentley bentayga v8"<<endl;
            cout<<"4:	Cadillac Escalade"<<endl;
            cout<<"5:	Rolls-Royce phantom 8"<<endl;
            cout<<"	press any other key to exit"<<endl;
            cin >>choice;
            cout<<"you choose car:"<<choice;
            cout<<endl<<" for how much day is the rent"<<endl;
            cin>>day;
            cout<<endl<<"Calculating rent. Please wait......"<<endl;
            if(choice== "1"||choice=="1")
                rentfee=day*500;
            if(choice== "2" ||choice=="2")
                rentfee=day*600;
            if(choice == "3" ||choice=="3")
                rentfee=day*700;
            if(choice == "4" ||choice=="4")
                rentfee=day*800;
            if(choice == "5" ||choice=="5")
                rentfee=day*900;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout <<endl<< "                    Car Rental - Customer Invoice                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "  | car No. :"<<"----------------------|"<<setw(10)<<"AA00001"<<"|"<<endl;
            cout << "  | Customer Name:"<<"-----------------|"<<setw(10)<<username<<"|"<<endl;
            cout << "  | Car Model :"<<"--------------------|"<<setw(10)<<choice<<"|"<<endl;
            cout << "  | Number of days :"<<"---------------|"<<setw(10)<<day<<"|"<<endl;
            cout << "  | rent fee per day:"<<"--------------|"<<setw(10)<<rentfee/day<<"|"<<endl;
            cout << "  | Your Rental Amount is :"<<"--------|"<<setw(10)<<rentfee<<"|"<<endl;
            cout << "  ___________________________________________"<<endl;
            cout <<"\n";
            cout << "  | Total Rental Amount is :"<<"-------|"<<setw(10)<<rentfee<<"|"<<endl;
            cout << "  ___________________________________________"<<endl<<endl;
            cout<<endl<<"do you want to rent the car"<<endl;
            cout<<"1:  YES"<<endl;
            cout<<" enter other key to EXIT"<<endl;
            cin>>choice;
            if(choice=="1") {
                cout<<"you have succesfully rented the car"<<endl<<endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"======**** THANKS FOR CHOOSING US******======"<<endl;
                cout<<"======***** we are glade to help******======"<<endl;
            }
        }
        else if(choice=="");
        {   choose();
        }
    }
    else if(choice=="2") {
        cout << "	========= available cars ========= "<<endl;
        cout <<"1:	BMW i5 Sedan"<<endl;
        cout<<"2:	Mercedes-benz g wagon"<<endl;
        cout<<"3:	Bentley bentayga v8"<<endl;
        cout<<"4:	Cadillac Escalade"<<endl;
        cout<<"5:	Rolls-Royce phantom 8"<<endl;
        cout<<"	press any other key to EXIT"<<endl;
        cout<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cin >>choice;
        if(choice=="1") {
            cout<<"                    ~~~car details~~~";
            cout <<endl<< "                    ***BMW I5 Sedan***                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "| brand:"<<"----------------------|"<<"BMW"<<"|"<<endl;
            cout << "| Car Model:"<<"-----------------|"<<"BMW i5 Sedan"<<"|"<<endl;
            cout << "| Modification year:"<<"----------|"<<"2024"<<"|"<<endl;
            cout << "| power source:"<<"---------------|"<<"electric"<<"|"<<endl;
            cout << "| speed:"<<"----------------------|"<<"230 km/h"<<"|"<<endl;
            cout << "| rent of car per day:"<<"-------------------|"<<"500"<<"|"<<endl;
            cout << "____________________________________________"<<endl;
        }
        else if(choice=="2") {
            cout<<"                    ~~~car details~~~";
            cout <<endl<< "                    ***Mercedes-benz g wagon***                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "| brand:"<<"----------------------|"<<"Mercededes"<<"|"<<endl;
            cout << "| Car Model:"<<"---------------|"<<"Mercedes-benz g wagon"<<"|"<<endl;
            cout << "| Modification year:"<<"----------|"<<"2019"<<"|"<<endl;
            cout << "| power source:"<<"---------------|"<<"petrol"<<"|"<<endl;
            cout << "| speed:"<<"----------------------|"<<"220 km/h"<<"|"<<endl;
            cout << "| rent of car per day:"<<"------------------|"<<"600"<<"|"<<endl;
            cout << "____________________________________________"<<endl;
        }
        else if(choice=="3") {
            cout<<"                   ~~~car details~~~";
            cout <<endl<< "          ***Bentley bentayga v8***                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "| brand:"<<"----------------------|"<<"BENTLY"<<"|"<<endl;
            cout << "| Car Model:"<<"-----------------|"<<"Bentley bentayga v8"<<"|"<<endl;
            cout << "| Modification year:"<<"----------|"<<"2020"<<"|"<<endl;
            cout << "| power source:"<<"---------------|"<<"petrol"<<"|"<<endl;
            cout << "| speed:"<<"----------------------|"<<"290 km/h"<<"|"<<endl;
            cout << "| rent of car per day:"<<"-------------------|"<<"700"<<"|"<<endl;
            cout << "____________________________________________"<<endl;
        }
        else if(choice=="4") {
            cout<<"                    ~~~car details~~~";
            cout <<endl<< "           ***Cadillac Escalade***                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "| brand:"<<"----------------------|"<<"CADILLAC"<<"|"<<endl;
            cout << "| Car Model:"<<"-----------------|"<<"Cadillac Escalade"<<"|"<<endl;
            cout << "| Modification year:"<<"----------|"<<"2024"<<"|"<<endl;
            cout << "| power source:"<<"---------------|"<<"gasoline"<<"|"<<endl;
            cout << "| speed:"<<"----------------------|"<<"201 km/h"<<"|"<<endl;
            cout << "| rent of car per day:"<<"-------------------|"<<"800"<<"|"<<endl;
            cout << "_____________________________________________"<<endl;
        }
        else if(choice=="5") {
            cout<<"                    ~~~car details~~~";
            cout <<endl<< "            ***Rolls-Royce phantom 8***                  "<<endl;
            cout << "/////////////////////////////////////////////////"<<endl;
            cout << "| brand:"<<"----------------------|"<<"ROLLS-ROYCE"<<"|"<<endl;
            cout << "| Car Model:"<<"---------------|"<<"Rolls-Royce phantom 8"<<"|"<<endl;
            cout << "| Modification year:"<<"----------|"<<"2018"<<"|"<<endl;
            cout << "| power source:"<<"--------------|"<<"petrol"<<"|"<<endl;
            cout << "| speed:"<<"---------------------|"<<"250km/h"<<"|"<<endl;
            cout << "| rent of car per day:"<<"----------------------|"<<"900"<<"|"<<endl;
            cout << "____________________________________________"<<endl;
        }
        else (choice==" ");
        {   choose();
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    else if (choice=="3") {
        cout << " 	========= RETURN CAR ========= "<<endl;
        cout<<" enter the car u rented"<<endl;
        cin>>car;
        if (car=="1") {
            cout<<" for how much day was the car stayed with u"<<endl;
            cin>>day;
            cout<<"MR. "<<username<<" the car u rented was BMW i5 Sedan"<<endl<<"your total rent fee is: "<<day*500<<endl;
            cout<<"enter the password to return"<<"\t";
            cin>>pass;
            if(pass==password) {
                cout<<"car return has done succsusfully"<<endl;
            }
            else if(pass!=password) {
                cout<<"invalid password try again"<<endl;
            }
        }
        if (car=="2") {
            cout<<" for how much day was the car stayed with u"<<endl;
            cin>>day;
            cout<<"MR. "<<username<<" the car u rented was Mercedes-benz g wagon"<<endl<<"your total rent fee is: "<<day*600<<endl;
            cout<<"enter the password to return"<<"\t";
            cin>>pass;
            if(pass==password) {
                cout<<"car return has done succsusfully"<<endl;
            }
            else if(pass!=password) {
                cout<<"invalid password try again"<<endl;
            }
        }
        if (car=="3") {
            cout<<" for how much day was the car stayed with u"<<endl;
            cin>>day;
            cout<<"MR. "<<username<<" the car u rented was Bentley bentayga v8"<<endl<<"your total rent fee is: "<<day*700<<endl;
            cout<<"enter the password to return"<<"\t";
            cin>>pass;
            if(pass==password) {
                cout<<"car return has done succsusfully"<<endl;
            }
            else if(pass!=password) {
                cout<<"invalid password try again";
            }
        }
        if (car=="4") {
            cout<<" for how much day was the car stayed with u"<<endl;
            cin>>day;
            cout<<"MR. "<<username<<" the car u rented was Cadillac Escalade"<<endl<<"your total rent fee is: "<<day*800<<endl;
            cout<<"enter the password to return"<<"\t";
            cin>>pass;
            if(pass==password) {
                cout<<"car return has done succsusfully"<<endl;
            }
            else if(pass!=password) {
                cout<<"invalid password try again"<<endl;
            }
        }
        if (car=="5") {
            cout<<" for how much day was the car stayed with u"<<endl;
            cin>>day;
            cout<<"MR. "<<username<<" the car u rented was Rolls-Royce phantom 8"<<endl<<"your total rent fee is: "<<day*900<<endl;
            cout<<"enter the password to return"<<"\t";
            cin>>pass;
            if(pass==password) {
                cout<<"car return has done succsusfully"<<endl;
            }
            else if(pass!=password) {
                cout<<"invalid password try again"<<endl;
            }
        }
    }
    else(choice==" ");
    {
        choose();
    }
}

int main() {

    cout<<"=====***WELLCOM TO EFK CAR RENTAL SERVICES***====="<<endl;
    int login();
    cout<<"	~~~~~~~~~~~~~ login ~~~~~~~~~~`"<<endl;
    cout << "Please Enter your Name: ";
    cin >> username;
    cout<<endl<<"MR.  "<<username<<"  welcome to EFK rental services"<<endl;
    cout<<endl;
    choose();
    for (int i=0; i>=0; i++);
}
