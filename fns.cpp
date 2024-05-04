#include "fns.h"
#include <vector>
#include <string>
using namespace std;

fns::fns() {}

int fns::getIndex(vector<string> v, string un)
{
    auto iter = find(v.begin(), v.end(), un);

    if (iter != v.end())
    {
        int index = iter - v.begin();
        return index;
    }
    else {
        return -1;
    }
}
