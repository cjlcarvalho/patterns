#ifndef GAMEFRAMEWORK_H
#define GAMEFRAMEWORK_H

#include <map>
#include <string>

class IGameComponent;

using namespace std;

class GameFramework
{
public:
    GameFramework();
    ~GameFramework();
    bool registerComponent(string name, IGameComponent *component);
    IGameComponent *retrieveComponent(string name);

private:
    map<string, IGameComponent *> m_components;
};

#endif // GAMEFRAMEWORK_H
