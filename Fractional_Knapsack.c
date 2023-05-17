#include <stdio.h>

int main()
{
    int capacity, no_items, cur_weight, item;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &no_items);

    printf("Enter the weight and value of  items :\n");
    for (i = 0; i < no_items; i++)
    { 
        scanf("%d", &weight[i]);
        scanf("%d", &value[i]);
    }

    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];

        if (cur_weight >= 0)
            // printf("Added object %d (%d Rs., %dKg) completely in the bag. Space left: %d.\n", item + 1, value[item], weight[item], cur_weight);
            printf("");
        else
        {
            int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            // printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, value[item], weight[item], item + 1);
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }

    printf("Total knapsack profit is %.2f Rs.\n", total_profit);


    return 0;
}



/*
    TC---->   O(2^N)
    Space--->  O(n) 


Given the weights and profits of N items, in the form of {profit, weight} put these items in a knapsack of capacity W to get the maximum total profit in the knapsack. In Fractional Knapsack, we can break items for maximizing the total value of the knapsack.



*/