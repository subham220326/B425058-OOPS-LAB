#include <iostream>
using namespace std;
class Song{
    private:
    string title;
    string artist;
    int duration; 
  public:
    Song(string t, string a, int d) { // Parameterized constructor
        title = t;
        artist = a;
        duration = d;
    }
friend void compareSongs(Song, Song); // Friend Function Declaration
};

void compareSongs(Song song1, Song song2) {
    // Implementation for comparing songs
   if(song1.duration > song2.duration) {
        cout << song1.title << " is longer than " << song2.title << endl;
    } else if (song1.duration < song2.duration) {
        cout << song2.title << " is longer than " << song1.title << endl;
    } else {
        cout << song1.title << " and " << song2.title << " have the same duration." << endl;
    }
}
int main(){
    Song song1("Song 1", "Artist 1", 180);
    Song song2("Song 2", "Artist 2", 240);
    compareSongs(song1, song2);
    return 0;
}