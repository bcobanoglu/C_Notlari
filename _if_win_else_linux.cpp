#include <iostream>
#include <time.h>
using namespace std;
#if __WIN32
 #include <Windows.h>
#else
 #include <unistd.h>
#endif

void sleep(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}
int main()
{
    int s=0;
    cout << "Bu program 3 sn de bir ekrana Hi! yazar! :)" << endl;
    do {
        s++;
        printf("%d.",s);
        sleep(3000); //3000 ms
        cout << "Hi!  :)" << endl;
    }while (s<10);
}