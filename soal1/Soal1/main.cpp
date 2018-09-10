#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int v2 = 5, t = 1, tdetik= 0, tmenit=0;
    double v1n = 2, s = 0, inv =0, s2 = 1000, inv2 = 0;
    std::string strObj, strObj2;

   while( s < 1000 ) {
        //Ali
        s = v1n+s;
        cout << "Detik ke : " << t << " Ali pada jarak = "<< s <<
         " Dan Bedu : " << s2 << endl;
         inv = s2-s;
         if(inv<5 && inv >=0){
            // Create an output string stream
            std::ostringstream streamObj, streamObj2;
            //Add double to stream
            streamObj << s;
            streamObj2 << s2;
            // Get string from output string stream
            strObj = streamObj.str();
            strObj2 = streamObj2.str();
            inv2 = inv;
            tmenit=t/60;
            tdetik=t%60;
         }
        v1n=v1n+0.1;

        //Bedu
        if(t>8){
            v2=v2;
            s2=1000-v2;
        }else{
            v2=-5;
        }
        v2=v2+5;

        t++;
   }
   cout << "" << endl;
   cout << "Waktu temu terdekat Ali dan Bedu = 08:0" << tmenit << ":" << tdetik << endl;
   cout << "Jarak temu terdekat Ali : " << strObj << " dan Bedu : " << strObj2 << " dengan selisih : " << inv2 << endl;
   return 0;
}
