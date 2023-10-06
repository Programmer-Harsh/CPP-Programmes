#include<iostream>
using namespace std;

// void myfunction(){
//     cout <<"i just got executd"<<endl;
// }
// void my(string fname = "deepak"){
//     cout <<fname<<" sahu \n";
// }
// int main()
// {
//     myfunction();
//     myfunction();
//     myfunction();
//     myfunction();

//     my("ashish");
//     my();
//     my("harsh");
// }




// void fnt(string name,int age){                                                   
//     cout<<name<<" student. "<<age<<" years old\n";
// }

// int main()
// {
//     fnt("harsh",19);
//     fnt("deepak",20);
//     fnt("ashish",20);
//     fnt("javed",19);
// }



// int fctn(int x){
//     return 5+x;                                                     //returns some value
// }

// int main()
// {
//     cout <<fctn(6);
// }



// int function(int x,int y){                                              //add
//     return x+y;
// }
// int main()
// {
//     int z=function(9,9);                                                //using third variable
//     cout <<z<<endl;
//     cout <<function(9,6);                                               //direct print the value

// }



// void function(int num[5]){
//     for (int i=0;i<5;i++){
//         cout <<num[i]<<"\n";
//     }
// }
// int main()
// {
//     int num[5]={33,45,67,89,334}; 
//     function(num);
// }


// int plusfunc(int x, int y){
//     return x+y;        /*instead of defining two functions that should do the same thing,it is better to overload one*/
// }
// double plusfunc(double x,double y){
//     return x+y;
// }
// int main()
// {
//     int num1=plusfunc(8,9);
//     double num2=plusfunc(9.44,9.55);
//     cout <<"Int : "<<num1<<endl;
//     cout <<"double : "<<num2<<endl;
// }


//----------------------------------  recursion--------------------------------

int sum(int k){
    if (k>0){
        return k+sum(k-1);
    }
    else{
        return 0;
    }
}
int main()
{
    int num;
    cout <<"enter the number :  ";
    cin>>num;
    int result =sum(num);
    cout <<result;
}