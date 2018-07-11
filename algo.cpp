#include "algo.h"

/*  struct Point {
2.      int x;
3.      int y;
4.      Point(int x, int y)
5.          : x(x), y(y)
6.      { }
7.  };
8.
9.  struct Pixel: public Point {
10.      int color;
11.      Pixel(int x, int y, int color)
12.          : Point(x,y), color(color)
13.      { }
14.  };*/

Action::Action(string n) : name(n) {}
void Action::get_data()
{
    cout << "Podaj nazwe akcji: " << endl;
    cin >> name;
}

void Action::show()
{
    cout << "Show() z Action: " << name << endl;
}
Player::Player(string n, int a) : Action(n), age(a) {}
void Player::get_data()
{
    cout << "Podaj swoja nazwe" << endl;
    cin >> name;
    cout << "Podaj swoj wiek" << endl;
    cin >> age;
}
void Player::show()
{
    cout << name << " lat: " << age << endl;
}

Game::Game(string n) : Action(n){}

void Game::get_data()
{
    cout << "Podaj nazwe gry" << endl;
    cin >> name;
}

void Game::show()
{
    cout << name << endl;
}
