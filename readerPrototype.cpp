#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    FILE *arq = fopen("readerPrototype.txt", "rt");
    if (arq == NULL){
        printf("Problems reading the input file\n");
        return;
    }
    else{
        cout<<"Successfully opened!";
        
    }

    
    return 0;
}
