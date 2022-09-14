#include <stdio.h>
#include <string.h>



int main(void) {
    int no = -1;

    while (no != EXIT) {
        puts("--- 회원정보 관리 프로그램 ---");
        puts("1. 회원정보 등록");
        puts("2. 회원정보 검색");
        puts("3. 회원정보 삭제");
        puts("4. 전체 회원정보 등록");
        puts("0. 프로그램 종료");
        puts("원하시는 메뉴 번호 입력 : ");
        scanf("%d", &no);

        switch (no) {
        case INSERT:
            InsertMember();
            break;
        case SEARCH:
            SearchMember();
            break;
        case DELETE:
            DeleteMember();
            break;
        case PRINT_ALL:
            PrintAllMember();
            break;
        }
    }

    return 0;
}