#include <stdio.h>
#include <string.h>


int main(void) {

    char arr[1000000];
    int i, cnt = 0, len;

    scanf("%[^\n]", arr); // ["%^\n"]�� ���Ͱ� ���ö����� ���ڿ��� �޴´ٴ� ���̴�( ���鵵 ���� )
    len = strlen(arr); // ���� ���� len ������ �־��־���.

    if (len == 1) {   // ���� ���� �ϳ��� �ԷµǾ������� ���� if �� ó���� ���־ 0�� ��µǰ� �� 
        if (arr[i] == ' ') {
            printf("0\n");
            return 0;
        }
    }

    for (i = 1; i < len - 1; i++) {  // ������ ������ �ܾ��� ������ üũ �ϱ� ������ ó���� ���� ������ ���� ��츦 ���� int�� 1 �� �����ϰ� ������ ������ -1 �� ���־� ó���� ���� ������ �������־���.
        if (arr[i] == ' ') {
            cnt++;
        }
    }

    printf("%d", cnt + 1); // ������ ������ �ܾ��� ������ üũ�߱� ������ +1�� ������־���. ( ex  - �ܾ 4���� ������ ������ ���� ) 

    return 0;
}