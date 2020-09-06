#include <stdio.h>
int main(void)
{
	int nums[3],t;
	char str[4];

	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if ( nums[i]  > nums[j])
            {
                t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }
	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		switch (str[i])
		{
		case 'A':
			printf("%d ", nums[0]);
			break;
		case 'B':
			printf("%d ", nums[1]);
			break;
		case 'C':
			printf("%d ", nums[2]);
			break;
		}
	}
	printf("\n");
	return 0;
}