#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// DataNode structure
// จำ
typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;
 
typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;
// จำ
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
    newNode->data = (char*)malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}
 //จำ
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList *list = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}
 
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer != NULL) {
        // จำ
        printf("%s", pointer->data);
        if (pointer->next != NULL) printf(" -> ");
        pointer = pointer->next;
    }
    printf("\n");
}
 
void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* newNode = createDataNode(data);
    if (list->count == 0) {
        // จำ
        list->head = newNode;
    } else {
        // จำ
        DataNode* current = list->head;
        while (current->next != NULL) current = current->next;
        current->next = newNode;
    }
    list->count++;
}
 
void insert_front(SinglyLinkedList* list, char* data) {
    // จำ
    DataNode* newNode = createDataNode(data);
    newNode->next = list->head;
    list->head = newNode;
    list->count++;
}
 
// void delete(SinglyLinkedList* list, char* data) {
//     DataNode* current = list->head;
//     DataNode* previous = NULL;
//     while (current != NULL && strcmp(current->data, data) != 0) {
//         previous = current;
//         current = current->next;
//     }
//     if (current == NULL) {
//         printf("Cannot delete, %s does not exist.\n", data);
//         return;
//     }
//     if (current == list->head) list->head = current->next;
//     else previous->next = current->next;
//     free(current->data);
//     free(current);
//     list->count--;
// }
 
int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}