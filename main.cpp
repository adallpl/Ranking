#include <iostream>
#include <algo.h>
#include <string>
using namespace std;
int main()
{
    // polimorfizm w skrocie
    Action *wsk_baz = new Action;
    wsk_baz -> show();
    Player *wojtek = new Player("Wojtek", 27);
    wsk_baz = wojtek;
    wsk_baz -> show();
    Player *ola = new Player();
    ola -> get_data();
    wsk_baz = ola;
    wsk_baz -> show();
    return 0;
}
