#include "test.h"
#include <vector>
#include <string>
using namespace std;

int len(const string &str) {
    int res = 0;
    for (auto c: str) {
        res += 1;
    }
    return res;
}

int test(int n) {
    vector<int> a = {n, 2, 15};
    a.push_back(n);
    return a[0] + len("link");
}
