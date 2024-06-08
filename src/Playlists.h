
#pragma once

#include <iostream>

class Playlist {
private:
    std::string* fSongs;
    size_t fSize;

public:
    Playlist();
    ~Playlist();

    void download();

    std::string operator[](size_t aIndex);
};

