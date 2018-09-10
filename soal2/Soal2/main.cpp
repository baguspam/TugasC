#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    //v2 = kecepatan Bedu dan v1n = kecepatan ali
    int v2 = 6, t = 1, tdetik= 0, tmenit=0, tdetik2= 0, tmenit2=0, tdetik3= 0, tmenit3=0;
    double v1n = 2, s = 0, inv =0, s2 = 0;
    std::string strObj, strObj2, strObj3, strObj4;

   while( s < 1000 ) {
        //Ali
        s = v1n+s;
        cout << "Detik ke : " << t << " Ali pada jarak = " << s <<
         " Dan Bedu : " << s2 << endl;
        v1n=v1n+0.1;

        //Bedu
        if(t>9){
            //Ali mendahului
            inv = s-s2;
            if(inv<2 && inv >=0){
            // Create an output string stream
            std::ostringstream streamObj, streamObj2;
            //Add double to stream
            streamObj << s;
            streamObj2 << s2;
            // Get string from output string stream
            strObj = streamObj.str();
            strObj2 = streamObj2.str();
            tmenit=t/60;
            tdetik=t%60;
            }
             //Bedu mendahului
            inv = s2-s;
            if(inv<1 && inv >=0){
            // Create an output string stream
            std::ostringstream streamObj3, streamObj4;
            //Add double to stream
            streamObj3 << s;
            streamObj4 << s2;
            // Get string from output string stream
            strObj3 = streamObj3.str();
            strObj4 = streamObj4.str();
            tmenit2=t/60;
            tdetik2=t%60;
            }

            v2=v2;
            s2=v2;
        }else{
            v2=0;
        }
        v2=v2+6;

        tmenit3=t/60;
        tdetik3=t%60;
        t++;
   }
   cout << "" << endl;

   cout << "Waktu Bedu mendahului Ali = 08:0" << tmenit2<< ":" << tdetik2 <<
   " pada jarak Bedu : " << strObj4 << " dan Ali : " << strObj3 << endl;

   cout << "Waktu Ali mendahului Bedu = 08:0" << tmenit << ":0" << tdetik <<
   " pada jarak Ali : " << strObj << " dan Bedu : " << strObj2 << endl;

    cout << "Waktu Ali mencapai titik B = 08:0" << tmenit3 << ":0" << tdetik3 << endl;

   return 0;
}
