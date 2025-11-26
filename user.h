// Copyright © 2024-2025 Matei Pralea <matei@pralea.me>
// SPDX-License-Identifier: MIT OR Apache-2.0

enum UserRole {
    USER_ROLE_ADMIN,
    USER_ROLE_WRITER,
    USER_ROLE_GUEST,
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
