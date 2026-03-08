#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-0002-2", "MR.B", {"user2", "passwd2"}},
        {"66-040626-0003-3", "MR.C", {"user3", "passwd3"}},
        {"66-040626-0004-4", "MR.D", {"user4", "passwd4"}},
        {"66-040626-0005-5", "MR.E", {"user5", "passwd5"}}
    };

    char inputUser[64];
    char inputPass[64];
    int found = 0;

    printf("Login: ");
    scanf("%s", inputUser);
    printf("Password: ");
    scanf("%s", inputPass);

    for(int i = 0; i < 5; i++) {
        if (strcmp(inputUser, cs[i].stdACC.loginname) == 0 &&
            strcmp(inputPass, cs[i].stdACC.password) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}
