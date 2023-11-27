#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} Time;

int main() {
    Time time1, time2;

    printf("Nhap vao moc thoi gian thu nhat:\n");
    printf("Gio?: ");
    scanf("%d", &time1.hour);
    printf("Phut: ");
    scanf("%d", &time1.minute);
    printf("Giay: ");
    scanf("%d", &time1.second);

    printf("Nhap vao moc thoi gian thu hai:\n");
    printf("Gio?: ");
    scanf("%d", &time2.hour);
    printf("Phut: ");
    scanf("%d", &time2.minute);
    printf("Giay: ");
    scanf("%d", &time2.second);

    printf("\nMoc thoi gian thu nhat: %02d:%02d:%02d\n", time1.hour, time1.minute, time1.second);
    printf("Moc thoi gian thu hai: %02d:%02d:%02d\n", time2.hour, time2.minute, time2.second);

    return 0;
}
