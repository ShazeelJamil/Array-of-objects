#include<iostream>
using namespace std;
 class employee{
     int id;
     int DeskNumber;
     public:
        void setid(void){
            cout<<"Enter the id of employee."<<endl;
            cin>>id;
     }
     void getid(){
         cout<<"The id of employee is "<<id<<endl;
     }
 };
 int main(){
    //  employee sheeda, majja, gammma, perveen, shadaan;
    employee Store[5]; //This is how we can make  array of objects.
    for (int i = 0; i < 5; i++)
    {
         Store[i].setid();
         Store[i].getid();

     }
    
return 0;
     
 }