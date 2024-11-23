#include <stdio.h>//edit lang guys

int main() {
    int category, item;

    printf("Welcome to our Business\n");    
    printf("Menu Categories:\n");
    printf("1. Appetizers\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");
    printf("Enter category number: ");
    scanf("%d", &category);
    
    switch(category) {
        case 1:
            printf("Appetizers:\n");
            printf("1. Salad\n");
            printf("2. Soup\n");
            printf("Enter item number: ");
            scanf("%d", &item);
            switch(item) {
                case 1:
                    printf("You ordered a Salad.\n");
                    break;
                case 2:
                    printf("You ordered a Soup.\n");
                    break;
                default:
                    printf("Invalid appetizer selection.\n");
            }
            break;
        case 2:
            printf("Main Course:\n");
            printf("1. Steak\n");
            printf("2. Fish\n");
            printf("Enter item number: ");
            scanf("%d", &item);
            switch(item) {
                case 1:
                    printf("You ordered a Steak.\n");
                    break;
                case 2:
                    printf("You ordered Fish.\n");
                    break;
                default:
                    printf("Invalid main course selection.\n");
            }
            break;
        case 3:
            printf("Desserts:\n");
            printf("1. Ice Cream\n");
            printf("2. Cake\n");
            printf("Enter item number: ");
            scanf("%d", &item);
            switch(item) {
                case 1:
                    printf("You ordered Ice Cream.\n");
                    break;
                case 2:
                    printf("You ordered Cake.\n");
                    break;
                default:
                    printf("Invalid dessert selection.\n");
            }
            break;
        default:
            printf("Invalid category selection.\n");
    }
    
    return 0;
}
