#include <stdio.h>
#include <stdlib.h>

static int compare(const void *a, const void *b)
{
    int left = *(const int *)a;
    int right = *(const int *)b;
    return (left > right) - (left < right);
}

int main(void)
{
    int n, k;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *nums = malloc((size_t)n * sizeof(*nums));
    if (n > 0 && nums == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1) {
        free(nums);
        return 1;
    }

    qsort(nums, (size_t)n, sizeof(*nums), compare);

    int operations = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        long long sum = (long long)nums[left] + nums[right];
        if (sum == k) {
            operations++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    printf("%d\n", operations);
    free(nums);
    return 0;
}