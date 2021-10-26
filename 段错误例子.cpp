#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <chrono>
using namespace std;

int b = 11;
int c = 12;
int a = 121212;
int veriona = 0;

void aa()
{
    while (1)
    {
        a = 10;
        cout << "aa: " << a << endl;
        // std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
void bb()
{
    while (1)
    {
        a = 11;
        cout << "aa: " << a << endl;
        //std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
int main()
{
    // //1.内存越界
    // vector<int> t(5, 2);
    // cout << t[100000] << endl;

    // //2.空指针
    // shared_ptr<int> p;
    // *p = 10;

    // // 3.两次释放内存
    // int *pp = new int(10);
    // cout << "pp " << *pp << endl;
    // free(pp);
    // //free(pp);

    // thread t1(aa);
    // thread t2(bb);
    // t1.join();
    // t2.join();

    return 0;
}
