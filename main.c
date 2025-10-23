// Simple User Role
// Copyright (C) 2024-2025 Matei Pralea <matei.pralea@proton.me>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <stdio.h>
#include "user.h"

int main(void) {
    User user = user_new("John", 20, "An example");
    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);

    char* role_string;

    switch (user.role) {
        case UR_GUEST:
            role_string = "Guest";
            break;
        case UR_ADMIN:
            role_string = "Admin";
            break;
        case UR_WRITER:
            role_string = "Writer";
            break;
    }

    printf("Role: %s\n", role_string);
    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    printf("Changing the role to ADMIN...\n");
    user.role = UR_ADMIN;

    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    return 0;
}