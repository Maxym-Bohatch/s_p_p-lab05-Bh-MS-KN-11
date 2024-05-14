#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CompactDisk {
protected:
    string title;
    int diskSize;
    string diskType;
    string recordingDate;

public:
    CompactDisk(string t, int size, string type, string date)
        : title(t), diskSize(size), diskType(type), recordingDate(date) {}

    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Disk Size: " << diskSize << " MB" << endl;
        cout << "Disk Type: " << diskType << endl;
        cout << "Recording Date: " << recordingDate << endl;
    }
};

class SpecializedCompactDisk : public CompactDisk {
private:
    string artist;
    string genre;

public:
    SpecializedCompactDisk(string t, int size, string type, string date, string artistName, string diskGenre)
        : CompactDisk(t, size, type, date), artist(artistName), genre(diskGenre) {}

    void displayInfo() const {
        CompactDisk::displayInfo();
        cout << "Artist: " << artist << endl;
        cout << "Genre: " << genre << endl;
    }
};

int main() {
    SpecializedCompactDisk cd("Album Name", 700, "CD", "2024-05-14", "Artist Name", "Rock");
    cd.displayInfo();
    return 0;
}
