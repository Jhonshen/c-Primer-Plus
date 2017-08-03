#include <iostream>
#include "golf.h"
void setgolf (golf & g, const char * name, int hc);
int setgolf (golf & g);
void handicap (golf & g, int hc);
void showgolf (const golf & g);
int main(int argc, char const *argv[])
{
    golf ann;
    setgolf(ann, "Ann Bird",24);
    handicap(ann, 68);
    showgolf(ann);

    while (1)
    {
        int n;
        golf andy;

        n = setgolf(andy);
  //      showgolf(andy);
        if (n == 0)
            break;

    }
    return 0;
}
