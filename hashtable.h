

struct Node {
	int key;
	int value;
	struct Node* next;
};

typedef struct {
	int size;
	struct Node** array;
} HashTable;


