#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    std::vector<int> vetor1;
    std::vector<int> vetor2;
    int valores;

    for(int i=0; i<3; i++)
    {
        std::cin>>valores;
        vetor1.push_back(valores);
        vetor2.push_back(valores);
    }

    std::sort(vetor1.begin(), vetor1.end());

    for(int i : vetor1)
    {
        std::cout<< i << std::endl;
    }
    
    std::cout<<std::endl;

    for(int i : vetor2)
    {
        std::cout<<i<<std::endl;
    }

    return 0;
}