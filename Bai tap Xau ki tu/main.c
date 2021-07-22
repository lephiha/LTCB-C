#include <stdio.h>
#include <stdlib.h>

// Đếm ký tự:


//int main()
//{
//  char s[100];
//  printf("Nhap s: ");
//	scanf("%s", &s);
//	int len = 0;
//	while (s[len] != '\0') {
//		len++;
//	}
//    printf("\nSo tu co trong cau la: \n");
//    printf("%d", len);
//    return 0;
//}

// Xâu đối xứng:

int main() {
    char s[100];
    printf("Nhap s: ");
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - i - 1]) {
            printf("\nDay la chuoi khong doi xung!\n");
            return 0;
        }
    }
    printf("\nDay la chuoi doi xung!\n");
    return 0;
}

