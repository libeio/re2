
#include <stdio.h>
#include <re2/filtered_re2.h>
#include <re2/re2.h>

int main()
{
    {
        bool bl = RE2::PartialMatch("axbyc", "a.*b.*c");
        if (! bl) {
            printf("RE2::PartialMatch failed\n");
            return -1;
        }
    }

    {
        // 符合部分匹配
        int n;
        bool bl = RE2::PartialMatch("foo123bar", "(\\d+)", &n);
        if (! bl) {
            printf("RE2::PartialMatch failed\n");
            return -1;
        }

        printf("匹配值为: %d\n", n);
    }

    printf("====== test meet exception ======\n");

    return 0;
}
