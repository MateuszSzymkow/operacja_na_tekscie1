#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis="Ala ma kota";
    string szukaj="kot";

    size_t pozycja=napis.find(szukaj);

    if(pozycja!=string :: npos)
        cout<<"Znaleziono na pozycji:  "<<pozycja;

    else
        cout<<"Nie znaleziono";
        //kasuje sie funkcja errase(2,10)
        //wstawianie napisu: napis.insert(11,"Filemona"); cout<<napis;
        //zastepowanie istniejacego tekstu innym: napis.repleace(2,4,"nie ma");
    return 0;
}
