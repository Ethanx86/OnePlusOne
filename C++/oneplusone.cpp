#include <iostream>
void stay(){
    int c = 1;
    while(true){
        c++;
    }
}
int main(){
    int i = 1;
    int guess;
    while(true){
        std::cout << i << " + " << i << std::endl;
        std::cin >> guess;
        if(guess != i + i){
            break;
        }
        i = guess;
    }
    std::cout << "Ops, " << i << " + " << i << " = " << i+i << ", not " << guess;
    stay();
    return 0;
}
