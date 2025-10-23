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

#include "user.h"

User user_new(char* name, int age, char* description) {
    return (User) { .name = name, .age = age, .description = description, .role = UR_GUEST };
}

bool user_can_read() {
    return true;
}

bool user_can_write(User* user) {
    if (user->role == UR_WRITER || user->role == UR_ADMIN) {
        return true;
    } else {
        return false;
    }
}

bool user_can_manage(User* user) {
    if (user->role == UR_ADMIN) {
        return true;
    } else {
        return false;
    }
}