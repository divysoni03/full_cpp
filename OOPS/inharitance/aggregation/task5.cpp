// 5. Music Streaming Service:
//    Create a music streaming service where each platform hosts multiple playlists, and each playlist contains multiple songs. Implement classes for Platform, Playlist, and Song. The Platform class should aggregate Playlist objects, and each Playlist object should aggregate Song objects. Implement functionalities to add new songs to playlists, search for songs by artist or genre, and display all playlists available on a platform.

#include<iostream>
using namespace std;

class Song{};

class Playlist{};

class Platform{
    private:
        string name;
        int current_playlist,MAX_PLAYLIST;
        Playlist* playlists;
    public: 
        Platform(){
            this->name = "";
            this->current_playlist = 0;
            this->MAX_PLAYLIST = 1;
            // playlists = new Playlist[MAX_PLAYLIST];
            playlists = calloc(MAX_PLAYLIST,sizeof(Playlist));
        }
        Platform(string name,int MAX_PLAYLIST){
            this->name = name;
            this->MAX_PLAYLIST = MAX_PLAYLIST;
            this->current_playlist = 0;
            
        }
};

int main(){

    return 0;
}