/*#include "functions.h"
#include <string>
#include <vector>
using namespace std;

functions::functions() {}

bool functions::findUser(string username, vector<string> v){

    int index = 0;

    auto iter = ::find(v.begin(), v.end(), username);

    if (iter != v.end())
    {
        index = iter - v.begin();
    }
    else {
        index = -1;
    }

    if(index > 0){
        return true;
    }
    else{
        return false;
    }
}
*/
