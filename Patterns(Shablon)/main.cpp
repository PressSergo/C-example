#include <iostream>
#include "ServerStream/TypeServer.h"

int main() {
    LocalServer shool = LocalServer("School");
    EthernetServer www = EthernetServer("Russia");
    LocalServer home = LocalServer("Hoome");


    shool.Action();
    www.Action();
    home.Action();
    return 0;
}