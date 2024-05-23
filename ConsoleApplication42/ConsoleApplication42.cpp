#include <iostream>
#include <locale.h>
#include <Windows.h>

struct task {
    char quest[1000];//вопросы [256]
    char ans[4][1000];//ответы. 1- всегда правильный. [4][256]
};
struct taskList {
    struct task tasks[100];
    int size;
};

void readf(struct taskList* theme, int th) {
    int n1 = 20;
    int count = 0;
    theme->size = 0;
    char c;
    switch (th)
    {
    case 1:

        FILE * f1;
        fopen_s(&f1, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f1) {
            printf("Файл не найден.\n");
        }
        else {

            for (int i = 0; !feof(f1); i++) {
                fgets(theme->tasks[i].quest, 1000, f1);
                theme->size++;
            }

        }
        fclose(f1);

        //1 ответ (правильный)
        FILE* f01;
        fopen_s(&f01, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f01) {
            for (int i = 0; !feof(f01); i++) {
                fgets(theme->tasks[i].ans[0], 1000, f01);
            }
        }
        fclose(f01);

        //2 ответ
        FILE* f11;
        fopen_s(&f11, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f11) {
            for (int i = 0; !feof(f11); i++) {
                fgets(theme->tasks[i].ans[1], 1000, f11);
            }
        }
        fclose(f11);

        //3 ответ
        FILE* f21;
        fopen_s(&f21, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f21) {
            for (int i = 0; !feof(f21); i++) {
                fgets(theme->tasks[i].ans[2], 1000, f21);
            }
        }
        fclose(f21);

        //4 ответ
        FILE* f31;
        fopen_s(&f31, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f31) {
            for (int i = 0; !feof(f31); i++) {
                fgets(theme->tasks[i].ans[3], 1000, f31);
            }
        }
        fclose(f31);

        break;
    case 2:

        FILE * f2;
        fopen_s(&f2, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f2) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f2);
                theme->size++;
            }
        }
        fclose(f2);

        //1 ответ (правильный)
        FILE* f02;
        fopen_s(&f02, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f02) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f02);
            }
        }
        fclose(f02);

        //2 ответ
        FILE* f12;
        fopen_s(&f12, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f12) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f12);
            }
        }
        fclose(f12);

        //3 ответ
        FILE* f22;
        fopen_s(&f22, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f22) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f22);
            }
        }
        fclose(f22);

        //4 ответ
        FILE* f32;
        fopen_s(&f32, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f32) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f32);
            }
        }
        fclose(f32);

        break;
    case 3:
        getchar();
        FILE * f3;
        fopen_s(&f3, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f3) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f3);
                theme->size++;
            }
        }
        fclose(f3);

        //1 ответ (правильный)
        FILE* f03;
        fopen_s(&f03, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f03) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f03);
            }
        }
        fclose(f03);

        //2 ответ
        FILE* f13;
        fopen_s(&f13, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f13) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f13);
            }
        }
        fclose(f13);

        //3 ответ
        FILE* f23;
        fopen_s(&f23, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f23) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f23);
            }
        }
        fclose(f23);

        //4 ответ
        FILE* f33;
        fopen_s(&f33, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f33) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f33);
            }
        }
        fclose(f33);

        break;
    case 4:

        FILE * f4;
        fopen_s(&f4, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f4) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f4);
                theme->size++;
            }
        }
        fclose(f4);

        //1 ответ (правильный)
        FILE* f04;
        fopen_s(&f04, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f04) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f04);
            }
        }
        fclose(f04);

        //2 ответ
        FILE* f14;
        fopen_s(&f14, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f14) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f14);
            }
        }
        fclose(f14);

        //3 ответ
        FILE* f24;
        fopen_s(&f24, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f24) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f24);
            }
        }
        fclose(f24);

        //4 ответ
        FILE* f34;
        fopen_s(&f34, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f34) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f34);
            }
        }
        fclose(f34);

        break;
    case 5:

        FILE * f5;
        fopen_s(&f5, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f5) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f5);
                theme->size++;
            }
        }
        fclose(f5);

        //1 ответ (правильный)
        FILE* f05;
        fopen_s(&f05, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f05) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f05);
            }
        }
        fclose(f05);

        //2 ответ
        FILE* f15;
        fopen_s(&f15, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f15) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f15);
            }
        }
        fclose(f15);

        //3 ответ
        FILE* f25;
        fopen_s(&f25, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f25) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f25);
            }
        }
        fclose(f25);

        //4 ответ
        FILE* f35;
        fopen_s(&f35, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f35) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f35);
            }
        }
        fclose(f35);

        break;
    case 6:

        FILE * f6;
        fopen_s(&f6, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f6) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f6);
                theme->size++;
            }
        }
        fclose(f6);

        //1 ответ (правильный)
        FILE* f06;
        fopen_s(&f06, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f06) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f06);
            }
        }
        fclose(f06);

        //2 ответ
        FILE* f16;
        fopen_s(&f16, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f16) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f16);
            }
        }
        fclose(f16);

        //3 ответ
        FILE* f26;
        fopen_s(&f26, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f26) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f26);
            }
        }
        fclose(f26);

        //4 ответ
        FILE* f36;
        fopen_s(&f36, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f36) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f36);
            }
        }
        fclose(f36);

        break;
    case 7:

        FILE * f7;
        fopen_s(&f7, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f7) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f7);
                theme->size++;
            }
        }
        fclose(f7);

        //1 ответ (правильный)
        FILE* f07;
        fopen_s(&f07, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f07) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f07);
            }
        }
        fclose(f07);

        //2 ответ
        FILE* f17;
        fopen_s(&f17, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f17) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f17);
            }
        }
        fclose(f17);

        //3 ответ
        FILE* f27;
        fopen_s(&f27, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f27) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f27);
            }
        }
        fclose(f27);

        //4 ответ
        FILE* f37;
        fopen_s(&f37, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f37) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f37);
            }
        }
        fclose(f37);

        break;
    case 8:

        FILE * f8;
        fopen_s(&f8, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "r");
        if (!f8) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].quest, 1000, f8);
                theme->size++;
            }
        }
        fclose(f8);

        //1 ответ (правильный)
        FILE* f08;
        fopen_s(&f08, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "r");
        if (f08) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f08);
            }
        }
        fclose(f08);

        //2 ответ
        FILE* f18;
        fopen_s(&f18, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "r");
        if (f18) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f18);
            }
        }
        fclose(f18);

        //3 ответ
        FILE* f28;
        fopen_s(&f28, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "r");
        if (f28) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f28);
            }
        }
        fclose(f28);

        //4 ответ
        FILE* f38;
        fopen_s(&f38, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "r");
        if (f38) {
            for (int i = 0; i < n1; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f38);
            }
        }
        fclose(f38);

        break;
    }
}



void add_question(struct taskList* theme) {
    struct task* newTask = &theme->tasks[theme->size];

    printf("Введите вопрос: "); getchar();
    gets_s(theme->tasks[theme->size].quest);
    strcat_s(theme->tasks[theme->size - 1].quest, "\n");
    printf("Введите правильный ответ: ");
    gets_s(theme->tasks[theme->size].ans[0]);
    strcat_s(theme->tasks[theme->size - 1].ans[0], "\n");
    printf("Введите 1-ый дополнительный ответ: ");
    gets_s(theme->tasks[theme->size].ans[1]);
    strcat_s(theme->tasks[theme->size - 1].ans[1], "\n");
    printf("Введите 2-ой дополнительный ответ: ");
    gets_s(theme->tasks[theme->size].ans[2]);
    strcat_s(theme->tasks[theme->size - 1].ans[2], "\n");
    printf("Введите 3-ий дополнительный ответ: ");
    gets_s(theme->tasks[theme->size].ans[3]);
    strcat_s(theme->tasks[theme->size - 1].ans[3], "\n");
    theme->size++;
}

void del_question(struct taskList* theme, int th, int num) {
    theme->size -= 1;
    for (int i = num; i < theme->size; i++) {
        theme->tasks[i] = theme->tasks[i + 1];
    }
}

void print_que(struct taskList* theme, int num) {
    printf("Вопрос %d: %s\n", num + 1, theme->tasks[num].quest);
    for (int j = 0; j < 4; j++) {
        printf("%d. %s\n", j + 1, theme->tasks[num].ans[j]);
    }
}

void edit_question(struct taskList* theme, int num) {
    char add_line[3] = "\n";
    int edit;
    do {
        printf("Что вы хотите сделать?\n\n 0 - Редактирование вопроса\n 1 - Редактирование 1-го ответа (ответ должен быть правильным!!!)\n 2 - Редактирование 2-го ответа\n 3 - Редактирование 3-го ответа\n 4 - Редактирование 4-го ответа\n\nДля выхода из режима редактирования вопросов введите 5.\n\nВаш выбор: ");
        scanf_s("%d", &edit);
        getchar();
        switch (edit) {
        case 0:
            printf("Ввод: ");
            gets_s(theme->tasks[num].quest);
            strcat_s(theme->tasks[num].quest, add_line);
            break;
        case 1:
            printf("Ввод: ");
            gets_s(theme->tasks[num].ans[0]);
            strcat_s(theme->tasks[num].ans[0], add_line);
            break;
        case 2:
            printf("Ввод: ");
            gets_s(theme->tasks[num].ans[1]);
            strcat_s(theme->tasks[num].ans[1], add_line);
            break;
        case 3:
            printf("Ввод: ");
            gets_s(theme->tasks[num].ans[2]);
            strcat_s(theme->tasks[num].ans[2], add_line);
            break;
        case 4:
            printf("Ввод: ");
            gets_s(theme->tasks[num].ans[3]);
            strcat_s(theme->tasks[num].ans[3], add_line);
            break;
        case 5: printf("Выход из режима редактирования.\n\n"); break;
        default: printf("Некорректный ввод. Повторите попытку.\n\n"); break;
        }
    } while (edit != 5);
}

void print_task_list(struct taskList* theme) {
    for (int i = 0; i < theme->size-1; i++) {
        printf("Вопрос %d: %s\n", i + 1, theme->tasks[i].quest);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, theme->tasks[i].ans[j]);
        }
    }

        printf("Вопрос %d: %s\n\n", theme->size, theme->tasks[theme->size-1].quest);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n\n", j + 1, theme->tasks[theme->size-1].ans[j]);
        }
}


void write_into_f(struct taskList* theme, int th) {

    switch (th)
    {
    case 1:

        FILE * f1;
        fopen_s(&f1, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f1) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {

                fprintf(f1, "%s", theme->tasks[i].quest);
            }
        }
        fclose(f1);

        //1 ответ (правильный)
        FILE* f01;
        fopen_s(&f01, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f01) {
            for (int i = 0; i < theme->size; i++) {
                fprintf(f01, "%s", theme->tasks[i].ans[0]);
            }
        }
        fclose(f01);

        //2 ответ
        FILE* f11;
        fopen_s(&f11, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f11) {

            for (int i = 0; i < theme->size; i++) {
                fprintf(f11, "%s", theme->tasks[i].ans[1]);
            }

        }
        fclose(f11);

        //3 ответ
        FILE* f21;
        fopen_s(&f21, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f21) {
   
            for (int i = 0; i < theme->size; i++) {
                fprintf(f21, "%s", theme->tasks[i].ans[2]);
            }
        }
        fclose(f21);

        //4 ответ
        FILE* f31;
        fopen_s(&f31, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f31) {
            for (int i = 0; i < theme->size; i++) {
                fprintf(f31, "%s", theme->tasks[i].ans[3]);
            }
        }
        fclose(f31);

        break;
    case 2:

        FILE * f2;
        fopen_s(&f2, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f2) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f2);
            }
        }
        fclose(f2);

        //1 ответ (правильный)
        FILE* f02;
        fopen_s(&f02, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f02) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f02);
            }
        }
        fclose(f02);

        //2 ответ
        FILE* f12;
        fopen_s(&f12, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f12) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f12);
            }
        }
        fclose(f12);

        //3 ответ
        FILE* f22;
        fopen_s(&f22, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f22) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f22);
            }
        }
        fclose(f22);

        //4 ответ
        FILE* f32;
        fopen_s(&f32, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f32) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f32);
            }
        }
        fclose(f32);

        break;
    case 3:

        FILE * f3;
        fopen_s(&f3, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f3) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f3);
            }
        }
        fclose(f3);

        //1 ответ (правильный)
        FILE* f03;
        fopen_s(&f03, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f03) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f03);
            }
        }
        fclose(f03);

        //2 ответ
        FILE* f13;
        fopen_s(&f13, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f13) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f13);
            }
        }
        fclose(f13);

        //3 ответ
        FILE* f23;
        fopen_s(&f23, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f23) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f23);
            }
        }
        fclose(f23);

        //4 ответ
        FILE* f33;
        fopen_s(&f33, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f33) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f33);
            }
        }
        fclose(f33);

        break;
    case 4:

        FILE * f4;
        fopen_s(&f4, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f4) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f4);
            }
        }
        fclose(f4);

        //1 ответ (правильный)
        FILE* f04;
        fopen_s(&f04, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f04) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f04);
            }
        }
        fclose(f04);

        //2 ответ
        FILE* f14;
        fopen_s(&f14, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f14) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f14);
            }
        }
        fclose(f14);

        //3 ответ
        FILE* f24;
        fopen_s(&f24, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f24) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f24);
            }
        }
        fclose(f24);

        //4 ответ
        FILE* f34;
        fopen_s(&f34, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f34) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f34);
            }
        }
        fclose(f34);

        break;
    case 5:

        FILE * f5;
        fopen_s(&f5, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f5) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f5);
            }
        }
        fclose(f5);

        //1 ответ (правильный)
        FILE* f05;
        fopen_s(&f05, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f05) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f05);
            }
        }
        fclose(f05);

        //2 ответ
        FILE* f15;
        fopen_s(&f15, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f15) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f15);
            }
        }
        fclose(f15);

        //3 ответ
        FILE* f25;
        fopen_s(&f25, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f25) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f25);
            }
        }
        fclose(f25);

        //4 ответ
        FILE* f35;
        fopen_s(&f35, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f35) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f35);
            }
        }
        fclose(f35);

        break;
    case 6:

        FILE * f6;
        fopen_s(&f6, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f6) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f6);
            }
        }
        fclose(f6);

        //1 ответ (правильный)
        FILE* f06;
        fopen_s(&f06, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f06) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f06);
            }
        }
        fclose(f06);

        //2 ответ
        FILE* f16;
        fopen_s(&f16, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f16) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f16);
            }
        }
        fclose(f16);

        //3 ответ
        FILE* f26;
        fopen_s(&f26, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f26) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f26);
            }
        }
        fclose(f26);

        //4 ответ
        FILE* f36;
        fopen_s(&f36, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f36) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f36);
            }
        }
        fclose(f36);

        break;
    case 7:

        FILE * f7;
        fopen_s(&f7, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f7) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f7);
            }
        }
        fclose(f7);

        //1 ответ (правильный)
        FILE* f07;
        fopen_s(&f07, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f07) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f07);
            }
        }
        fclose(f07);

        //2 ответ
        FILE* f17;
        fopen_s(&f17, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f17) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f17);
            }
        }
        fclose(f17);

        //3 ответ
        FILE* f27;
        fopen_s(&f27, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f27) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f27);
            }
        }
        fclose(f27);

        //4 ответ
        FILE* f37;
        fopen_s(&f37, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f37) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f37);
            }
        }
        fclose(f37);

        break;
    case 8:

        FILE * f8;
        fopen_s(&f8, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.quest.txt", "w");
        if (!f8) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].quest, 1000, f8);
            }
        }
        fclose(f8);

        //1 ответ (правильный)
        FILE* f08;
        fopen_s(&f08, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans0.txt", "w");
        if (f08) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[0], 1000, f08);
            }
        }
        fclose(f08);

        //2 ответ
        FILE* f18;
        fopen_s(&f18, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans1.txt", "w");
        if (f18) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[1], 1000, f18);
            }
        }
        fclose(f18);

        //3 ответ
        FILE* f28;
        fopen_s(&f28, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans2.txt", "w");
        if (f28) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[2], 1000, f28);
            }
        }
        fclose(f28);

        //4 ответ
        FILE* f38;
        fopen_s(&f38, "C:/Users/ADMIN/source/repos/ConsoleApplication42/ConsoleApplication42/f.ans3.txt", "w");
        if (f38) {
            for (int i = 0; i < theme->size; i++) {
                fgets(theme->tasks[i].ans[3], 1000, f38);
            }
        }
        fclose(f38);

        break;
    }
}

void edit_que() {
    char d;
    int n;
    char th;

    struct taskList database;

    do {
        printf("Что вы хотите сделать?\n\n 1 - Добавление вопроса\n 2 - Удаление вопроса\n 3 - Редактирование вопроса\n\nДля выхода из режима редактирования вопросов введите 0.\n");

        do {
            printf("Ваш выбор: ");
            scanf_s("%c", &d); getchar(); printf("\n");
            if (d < 48 || d > 51) { printf("Некорректный ввод. Повторите попытку.\n"); }
        } while (d < 48 || d > 51);
        d = d - '0';

        if (d != 0) {
            //пока такие темы. потом поменять под нужные
            printf("Темы:\n\n1 - Адрес\n2 - Массив\n3 - Динамическая структура данных\n4 - Файл\n5 - Цикл\n6 - Рекурсия\n7 - Строки\n8 - Структура\n\n");
            do {
                printf("Выберите тему: "); scanf_s("%c", &th); printf("\n");
                if (th < 49 || th > 56) { printf("Некорректный ввод. Повторите ввод.\n");  getchar(); }
            } while (th < 49 || th > 56);
            th = th - '0';


            readf(&database, th);
            print_task_list(&database);
        }

        switch (d) {

            //Добавление вопроса
        case 1:
            /*print_task_list(&database); */
            add_question(&database);
            write_into_f(&database, th);
            printf("\nНовые вопросы:\n");
            print_task_list(&database);
            printf("\n");
            break;

            //Удаление вопроса
        case 2:
            do {
                printf("Введите номер удаляемого вопроса: "); scanf_s("%d", &n); printf("\n"); getchar();
                if (n < 1 || n > database.size) { printf("Такого номера не существует. Повторите попытку.\n"); getchar(); }
            } while (n < 1 || n > database.size);

            del_question(&database, 1, n - 1);
            for (int i = 0; i < database.size; i++) {
                printf("%d, %s", i, database.tasks[i].quest);
            }
            write_into_f(&database, th);
            print_task_list(&database);
            printf("\n");
            break;

            //Редактирование вопроса
        case 3:
            do {
                printf("Введите номер редактируемого вопроса: "); scanf_s("%d", &n); printf("\n");
                if (n < 1 || n > database.size) { printf("Такого номера не существует. Повторите попытку.\n"); getchar(); }
            } while (n < 1 || n > database.size);

            print_que(&database, n - 1);
            edit_question(&database, n - 1);
            write_into_f(&database, th);
            print_que(&database, n - 1);
            print_task_list(&database);
            printf("\n");
            break;
        case 0: printf("Выход.\n"); break;
        }
    } while (d != 0);
}

int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    edit_que();
    return 0;
}

