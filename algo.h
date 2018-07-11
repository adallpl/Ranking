#ifndef ALGO_H
#define ALGO_H
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Player;
class Game;
class Action;
template <class type>
class List
{
private:
    type *pointHead{nullptr};
    int elem{0};
public:
    type *prev_data(type *typee);
    void insert(type *data);
    void show();
    int amount() const;
};
class Action
{
public:
    string name;
    Action *p_type_Next;
    Action(string n = "???");
    void get_data();
    virtual void show();
};
class Player: public Action
{
private:
    int age;
public:
    Player(string n = "No-name", int a = 0);
    void get_data();
    void show();
    Game *game;
};

class Game: public Action
{
  private:

  public:
    Game(string n = "no-name");
    void get_data();
    void show();
};




#endif // ALGO_H
