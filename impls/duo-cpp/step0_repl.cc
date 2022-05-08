#include <string>
#include <stdio.h>
#include <iostream>

std::string READ(const std::string& input) {
    return input;
}

std::string EVAL(const std::string& input) {
    return input;
}

std::string PRINT(const std::string& input) {
    return input;
}

std::string rep(const std::string& input) {
    return READ(EVAL(PRINT(input)));
}


int main(int args, char *argv[]) {
    std::string input;
    
    while (true) {
        std::cout<<"user> ";
        if (!std::getline(std::cin,input)) break;
        std::cout<<rep(input)<<std::endl;
    }
}