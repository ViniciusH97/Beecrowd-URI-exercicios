#include <iostream>
#include <array>

int main(void){

    std::array<int, 2> dia, hr, min, seg;
    int qdias=0, qhrs=0, qmin=0, qseg=0;
    std::string d, p;

    for(int i = 0; i < 2; i++){
        std::cin>>d>>dia[i]>>hr[i]>>p>>min[i]>>p>>seg[i];

        if(i == 1){
            qdias = dia[1] - dia[0];

            qhrs = hr[1] - hr[0];

            qmin = min[1] - min[0];

            qseg = seg[1] -seg[0];

            if(qseg < 0){
                qseg+=60;
                qmin--;
            }

            if(qmin < 0){
                qmin+=60;
                qhrs--;
            }

            if(qhrs < 0){
                qhrs += 24;
                qdias--;
            }
        }
    }

    std::cout<<qdias<<" dia(s)\n"<<qhrs<<" hora(s)\n"<<qmin<<" minuto(s)\n"<<qseg<<" segundo(s)"<<std::endl;

}