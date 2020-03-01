#include <iostream>
#include <unistd.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    cout << "run test" << endl;
    system("Auto.bat");
    while (1) {
        time_t nowTime = time(NULL);
        tm* t_tm = localtime(&nowTime);
        if(7<t_tm->tm_hour < 16){
            if(t_tm->tm_hour < 9 ){
                if(t_tm->tm_hour == 9 && t_tm->tm_min == 1 && t_tm->tm_sec == 0){
                    cout << "It`s time to clock in!" << endl;
                    system("Auto.bat");
                    cout << "\033[40;32m Next run is 15:01:00 \033[0m" << endl;
                }
            } else{
                if(t_tm->tm_hour == 15 && t_tm->tm_min == 1 && t_tm->tm_sec == 0){
                    cout << "It`s time to clock in!" << endl;
                    system("Auto.bat");
                    cout << "\033[40;32m Next run is 09:01:00 \033[0m" << endl;
                }
            }
        } else {
            cout << "\033[40;31m No Clock in is needed!\033[0m" << endl;
            exit(0);
        }



    }


    return 0;
}
