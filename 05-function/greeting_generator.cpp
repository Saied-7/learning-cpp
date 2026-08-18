//Greeting Generator
#include<iostream>
#include<string>

void greet (std::string name){
    if(name.empty()){
       std::cout<<"Hello ,Guest!\n";
    }else{
        std::cout<<"Hello ,"<<name<<"!\n";
    }
}

int main(){
    std:: string name ;
    std:: cout<<"enter your name :";
    std:: getline(std::cin,name);

    greet(name);

    return 0;
}
