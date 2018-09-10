#include <iostream>

using namespace std;

int main () {
   // Local variable declaration:
   int a = 1, jam = 0, menit = 0, detik = 0;

   cout << "Soal 3 : Jarum berimpit sama dari 00:00:00 s.d. 12:00:00 adalah " << endl;
   // while loop execution
   while( a <= 12 ) {
      jam   = a;
      menit = a*5;
      detik = a*5;

      if(menit == 60 && detik == 60){
        menit = 0;
        detik = 0;
      }else{
        menit = a*5;
        detik = a*5;
      }

      if(jam<10){
            if(menit < 10 && detik < 10){
                cout << "Berimpit ke :  " << a << " pada = 0" << jam << ":0" << menit << ":0" << detik << endl;
            }else{
                cout << "Berimpit ke :  " << a << " pada = 0" << jam << ":" << menit << ":" << detik << endl;
            }
      }else{
            if(menit < 10 && detik < 10){
                cout << "Berimpit ke : " << a << " pada = " << jam << ":0" << menit << ":0" << detik << endl;
            }else{
                cout << "Berimpit ke : " << a << " pada = " << jam << ":" << menit << ":" << detik << endl;
            }
      }
      a++;
   }

   return 0;
}
