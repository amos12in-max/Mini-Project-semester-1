#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks for each subject:\n", n);
    for(i = 0; i < n; i++)
    {
    scanf("%d", &marks[i]);
    }

    int highest = marks[0];
    int lowest = marks[0];
    for(i = 1; i < n; i++){
        if(marks[i] > highest)
        {
            highest = marks[i];
        }
        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
        
    }
    printf("Highest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);
    
    return 0;
    


}