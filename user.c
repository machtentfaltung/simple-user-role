// Copyright © 2024-2025 Matei Pralea <matei@pralea.me>
// SPDX-License-Identifier: MIT OR Apache-2.0

#include "user.h"

User user_new(char* name, int age, char* description) {
    return (User) { .name = name, .age = age, .description = description, .role = USER_ROLE_GUEST };
}

bool user_can_read() {
    return true;
}

bool user_can_write(User* user) {
    if (user->role == USER_ROLE_WRITER || user->role == USER_ROLE_ADMIN) {
        return true;
    } else {
        return false;
    }
}

bool user_can_manage(User* user) {
    if (user->role == USER_ROLE_ADMIN) {
        return true;
    } else {
        return false;
    }
}
