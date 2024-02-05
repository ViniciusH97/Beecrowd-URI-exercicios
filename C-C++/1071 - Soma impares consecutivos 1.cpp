#include <iostream>

int main(){
    int s = 0;
    int n = 0;
    int x, y;
    std::cin >> x;
    std::cin >> y;

    if (x > y){
        int an, ao;
        if (x % 2 == 0){
            if (y % 2 == 0){
                an = x - 1;
                ao = y + 1;
            }else{
                an = x - 1;
                ao = y + 2;
            }
        }else{
            if (y % 2 == 0){
                an = x - 2;
                ao = y + 1;
            }
            else{
                an = x - 2;
                ao = y + 2;
            }
        }
        n = 1 + (an - ao) / 2;
        s = static_cast<int>((ao + an) * (n / 2.0));
    }
    else if (x < y){
        int an, ao;
        if (y % 2 == 0){
            if (x % 2 == 0){
                an = y - 1;
                ao = x + 1;
            }else{
                an = y - 1;
                ao = x + 2;
            }
        }else{
            if (x % 2 == 0){
                an = y - 2;
                ao = x + 1;
            }else{
                an = y - 2;
                ao = x + 2;
            }
        }
        n = 1 + (an - ao) / 2;
        s = static_cast<int>((ao + an) * (n / 2.0));
    }

    std::cout << s << std::endl;
    return 0;
}