#ifndef USER_H
#define USER_H

#include <string>

#include "Auth.h"

class User
{
public:
    User();

    ~User();

    static int globalUserId;

    int userId;

    std::string name;
    Auth* authDetails;
};

#endif