#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR ************ \n" ;

    std::cout <<" Enter ( +,-,*,/) : ";
    std::cin>> op;

    std::cout <<" Enter number 1 :";
    std::cin>>num1 ;
    std::cout <<" Enter number 2 :";
    std::cin>>num2 ;

    switch(op){
        case '+':
            result =num1+num2;
            std::cout << num1 << " + " << num2 << " = " << result << "\n";
            break;
        case '-':
            result =num1-num2;
            std::cout <<num1 <<"-"<<num2 <<"="<<result<<"\n";
            break;
        case '*':
            result =num1*num2;
            std::cout <<num1 <<"*"<<num2 <<"="<<result<<"\n";
            break;
        case '/':
            if(num2=0){
                std::cout << "number 2 is zero, please enter a valid number\n";
                std::cout << " Enter number 2 :";
                std::cin>>num2 ;
            
            result =num1/num2;
            std::cout <<num1 <<"/"<<num2 <<"="<<result<<"\n";
            break;}
            default:
            std::cout << "Invalid operator! Please enter a valid operator.\n";
            break;

    


    }




    std::cout << "*************************************** ";

    
    






   
    
    

    return 0;   
}
