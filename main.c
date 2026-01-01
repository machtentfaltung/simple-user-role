// Copyright © 2024-2026 Matei Pralea <matei@pralea.me>
// SPDX-License-Identifier: MIT OR Apache-2.0

#include <stdio.h>
#include "user.h"

int main(void) {
    User user = user_new("John", 20, "An example");
    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);

    char* role_string;

    switch (user.role) {
        case USER_ROLE_GUEST:
            role_string = "Guest";
            break;
        case USER_ROLE_ADMIN:
            role_string = "Admin";
            break;
        case USER_ROLE_WRITER:
            role_string = "Writer";
            break;
    }

    printf("Role: %s\n", role_string);
    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    printf("Changing the role to ADMIN...\n");
    user.role = USER_ROLE_ADMIN;

    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    return 0;
}
