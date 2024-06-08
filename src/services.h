
#pragma once

#include <iostream>
#include "Playlists.h"

class Services {
private:
    bool fLoggedIn;
    std::string fToken;
    Playlist* fPlaylists;

protected:
    bool isLoggedIn() { return fLoggedIn; };
    std::string* Token() { return &fToken; }

    virtual void saveToken() = 0;

public:
    Services();
    virtual ~Services() = 0;

    Playlist** Playlists() { return &fPlaylists; }

    virtual void login() = 0;
    virtual void logout() = 0;

    virtual void sync() = 0;
    virtual void download() = 0;
};

