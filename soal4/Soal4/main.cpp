#include <iostream>
using namespace std;

int main(void){
    int A, B, C, Ha, Hb, Head, Foot;
    int Flag=0;
    A=0;

    cout << "Masukan Jumlah Kepala : ";
    cin >> Head;

    cout << "Masukan Jumlah Kaki : ";
    cin >> Foot;

    while(Flag==0 && A < Head/3){
        A++;
        Ha = Head/3;
        Hb = Ha/2;
        A=Hb;
        B=Hb;
        C=Hb;
        if((A+B*2+C*3)==Head && (A*2+B*3+C*4) == Foot){
                Flag=1;
        }
    }

    if(Flag==1){
        cout << "Total  robot = " << (A+B+C) << endl;
        cout << " " << endl;
        cout << "Robot A : " << A << "Robot B : " << B << "Robot C : " << C << endl;
    }else{
        cout << "DATA SALAH" << endl;
    }

    return 0;
}


