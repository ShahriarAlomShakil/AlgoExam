#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 6; // number of characters
    char chars[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    
    // Simple implementation without priority queue
    // Create nodes array to store frequencies
    int nodes[2*n-1];
    char nodeChars[2*n-1];
    int parent[2*n-1];
    int left[2*n-1];
    int right[2*n-1];
    
    // Initialize
    for(int i = 0; i < 2*n-1; i++) {
        parent[i] = -1;
        left[i] = -1;
        right[i] = -1;
    }
    
    // Copy initial frequencies
    for(int i = 0; i < n; i++) {
        nodes[i] = freq[i];
        nodeChars[i] = chars[i];
    }
    
    cout << "Huffman Coding:\n";
    cout << "Character frequencies:\n";
    for(int i = 0; i < n; i++) {
        cout << chars[i] << ": " << freq[i] << endl;
    }
    
    // Build Huffman tree (simplified approach)
    int nodeCount = n;
    
    for(int step = 0; step < n-1; step++) {
        // Find two minimum frequency nodes
        int min1 = -1, min2 = -1;
        
        for(int i = 0; i < nodeCount; i++) {
            if(parent[i] == -1) { // not yet merged
                if(min1 == -1 || nodes[i] < nodes[min1]) {
                    min2 = min1;
                    min1 = i;
                } else if(min2 == -1 || nodes[i] < nodes[min2]) {
                    min2 = i;
                }
            }
        }
        
        // Create new internal node
        nodes[nodeCount] = nodes[min1] + nodes[min2];
        left[nodeCount] = min1;
        right[nodeCount] = min2;
        parent[min1] = nodeCount;
        parent[min2] = nodeCount;
        
        cout << "Merge nodes with freq " << nodes[min1] 
             << " and " << nodes[min2] << " -> " << nodes[nodeCount] << endl;
        
        nodeCount++;
    }
    
    // Print Huffman codes (simplified - just showing the concept)
    cout << "\nHuffman codes (conceptual):\n";
    for(int i = 0; i < n; i++) {
        cout << chars[i] << ": ";
        // Trace path from leaf to root to get code
        int current = i;
        string code = "";
        while(parent[current] != -1) {
            int p = parent[current];
            if(left[p] == current) {
                code = "0" + code;
            } else {
                code = "1" + code;
            }
            current = p;
        }
        cout << code << endl;
    }
    
    return 0;
}