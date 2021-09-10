//Programa sencillo para subirlo a GitHub
//programa que convierte los segundos en minutos y segundos

#include <iostream>

using namespace std;

int main(){

    int totalSeconds,
        seconds,
        minutes;
    
    seconds = 543;
    minutes = (seconds / 60);
    totalSeconds = (seconds % 60);

    cout << "The Total seconds in minutes and seconds is: " << minutes << "\'\t" << totalSeconds << "\""<< endl;

return 0;
}