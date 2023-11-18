#include <iostream>
using namespace std;

int main() {
    const int transmissionSpeed = 960; // Characters per second
    const int bytesInMB = 1024 * 1024; // Bytes in a megabyte
    const int fileSizeInBytes = 419430400; // Size of the file in bytes (400MB)

    double fileSizeInMB = fileSizeInBytes / static_cast<double>(bytesInMB);

    double timeInSeconds = fileSizeInBytes / static_cast<double>(transmissionSpeed);

    int hours = static_cast<int>(timeInSeconds / 3600);
    int minutes = static_cast<int>((timeInSeconds - (hours * 3600)) / 60);
    int seconds = static_cast<int>(timeInSeconds - (hours * 3600) - (minutes * 60));

    cout << "File Size: " << fileSizeInMB << " MB" << endl;
    cout << "Time to transmit: ";
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}
