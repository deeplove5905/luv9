#include <iostream>
using namespace std;

int main()

{

    int Students=10 ;
    int Passes[10]={0,0,0,0,0,0,0,0,0,0,} ;
    int Failures[10]={0,0,0,0,0,0,0,0,0,0,} ;   
    int Grade;
    int PassesStudentNumber=0;  

     for (int Numbers =0; Numbers< Students; ++Numbers) 

    {

     cout<< "Enter the Grade of Student No. " << Numbers+1 <<" : " << endl; 
     cin>>Grade;

        if (Grade > 60)
         {                                 
           Passes[Numbers]=Grade;

        }

        else 
        {                                          

            Failures[Numbers]=Grade;

        }

    }

    for(int l=0; l< 10; ++l)
    {                    

     if (Passes[l] > 0)

        { 

        PassesStudentNumber=PassesStudentNumber+1;      
        cout << "Student No. " << l+1<< " is Passes with "<< Passes[l] <<"Numbers" << endl;
}

      }

     for (int m=0; m< 10; m++)
     {                        

        if (Failures[m] > 0)

        {   
         cout << "Student No." << m+1 << " is Failed  with "<< Failures[m] <<"Numbers" <<endl;

        }

    } 

     if (PassesStudentNumber>=8)                     
    {

    cout <<"!!**----------------------------**!!"<<endl;
    cout <<" Raise Tution of the Passes Students"<<endl; 
    cout <<"!!**------------------------------**!!"<<endl;
}
    return 0;   
}

