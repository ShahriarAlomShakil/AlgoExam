#include <iostream>
using namespace std;

int heap[1000];
int heapSize = 0;

void heapifyUp(int i) {
    while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
        // Swap with parent
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;
        
        i = (i - 1) / 2;
    }
}

void heapifyDown(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < heapSize && heap[left] > heap[largest])
        largest = left;
    
    if (right < heapSize && heap[right] > heap[largest])
        largest = right;
    
    if (largest != i) {
        // Swap
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        
        heapifyDown(largest);
    }
}

void insert(int value) {
    heap[heapSize] = value;
    heapifyUp(heapSize);
    heapSize++;
    cout << "Inserted: " << value << endl;
}

int extractMax() {
    if (heapSize == 0) {
        cout << "Heap is empty!" << endl;
        return -1;
    }
    
    int max = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize--;
    heapifyDown(0);
    
    return max;
}

void printHeap() {
    cout << "Heap: ";
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;
    
    while (true) {
        cout << "\n1. Insert\n2. Extract Max\n3. Print Heap\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                break;
            case 2:
                value = extractMax();
                if (value != -1)
                    cout << "Extracted max: " << value << endl;
                break;
            case 3:
                printHeap();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}
