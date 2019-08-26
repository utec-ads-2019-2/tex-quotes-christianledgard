#include <iostream>
#include <stdio.h>


int main() {

    bool fistTime = true;

    char ch;

    while (scanf("%c", &ch) != EOF)
    {
        if(ch == '"'){
            if(fistTime){
                fistTime = false;
                std::cout<<'`'<<'`';
            }else{
                fistTime = true;
                std::cout<<'\''<<'\'';
            }
        }else{
            std::cout<<ch;
        }
    }

    return 0;
}