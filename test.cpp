#include "test.h"
#include <vector>
#include <string>
#include <iostream>
#include <thread>
using namespace std;

namespace test
{
class SurfaceFlingerTest {
public:
    SurfaceFlingerTest() {
        TRACE();
    }
    ~SurfaceFlingerTest() {
        TRACE();
    }
    static int testing() {
        TRACE();
        return random() + 9;
    }
};
} // namespace test

extern "C" void printText(int n, const std::string &str)  {
  sleep(1);
  std::string msg = std::to_string(n) + " : " + str;
//   std::cout << msg  << std::endl;
  INFO("%s", msg.c_str());
}
 
int threadmain() {
  std::vector<std::string> s = {
      "Educative.blog",
      "Educative",
      "courses",
      "are great"
  };
  std::vector<std::thread> threads;
 
  for (int i = 0; i < s.size(); i++) {
    threads.push_back(std::thread(printText, i, s[i]));
  }
 
  for (auto &th : threads) {
    th.join();
  }
  return 0;
}

int len(const string &str) {
    int res = 0;
    for (auto c: str) {
        res += 1;
    }
    return res;
}

int tester(int n) {
    INFO("press any key to continue");
    // getchar();
    auto name = typeid(&test::SurfaceFlingerTest::testing).name();
    INFO("name %s", name);

    threadmain();
    printText(15, "good");

    vector<int> a = {n, 2, 15};
    a.push_back(n);
    test::SurfaceFlingerTest tt;
    return a[0] + len("link") + tt.testing();
}
