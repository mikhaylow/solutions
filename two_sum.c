#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{
    int nums[] = {8, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 0;

    int *result = twoSum(nums, numsSize, target, &returnSize);

    printf("input: ");

    for (size_t i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\ntarget: %d\noutput: %d %d\n", target, result[0], result[1]);

    free(result);
    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = malloc(2 * sizeof(int));
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    for (size_t i = 0; i < numsSize - 1; i++)
    {
        for (size_t j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}