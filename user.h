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

enum UserRole {
    UR_ADMIN,
    UR_WRITER,
    UR_GUEST
};

typedef struct {
    char* name;
    int age;
    char* description;
    enum UserRole role;
} User;

User user_new(char* name, int age, char* description);
bool user_can_read();
bool user_can_write(User* user);
bool user_can_manage(User* user);