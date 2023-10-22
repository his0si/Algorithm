#include <stdio.h>
#include <string.h>

#define MAX_LEN 51

typedef struct {
    char data[MAX_LEN];
    int top;
} StackType;

void init_stack(StackType *s) {
    s->top = -1;
}

int is_empty(StackType *s) {
    return (s->top == -1);
}

int is_full(StackType *s) {
    return (s->top == (MAX_LEN - 1));
}

void push(StackType *s, char item) {
    if (is_full(s)) {
        fprintf(stderr, "Stack is full.\n");
        return;
    }
    s->data[++(s->top)] = item;
}

char pop(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "Stack is empty.\n");
        return 0;
    }
    return s->data[(s->top)--];
}

int check_matching(const char *in) {
    StackType s;
    char ch, open_ch;
    int i, n = strlen(in);
    init_stack(&s);

    for (i = 0; i < n; i++) {
        ch = in[i];
        switch (ch) {
        case '(':
            push(&s, ch);
            break;
        case ')':
            if (is_empty(&s))
                return 0;
            open_ch = pop(&s);
            if (open_ch != '(')
                return 0;
            break;
        default:
            break;
        }
    }

    if (!is_empty(&s))
        return 0;

    return 1;
}

int main(void) {
    int T;
    char str[MAX_LEN];

    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        scanf("%s", str); 
        if (check_matching(str) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
