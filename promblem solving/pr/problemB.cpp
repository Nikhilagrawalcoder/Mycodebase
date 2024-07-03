#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

int cnt = 0;

// /**
//  * 
//  * @param root      Root Node
//  * @param k         Minimum difference in height of subtrees for uneven node
//  * @return          Number of uneven nodes
//  */
int helper(Node* root, int k) {
    if (root == nullptr) return 0;
    int lh = helper(root->left, k);
    int rh = helper(root->right, k);
    if (abs(lh - rh) >= k) cnt++;
    return max(lh, rh) + 1;
}

int countUneven(Node* root, int k) {
    cnt = 0;
    helper(root, k);
    return cnt;
}

Node* createTree(vector<int>& a, int i) {
    if (i >= a.size() || a[i] == -1) return nullptr;
    Node* newnode = new Node(a[i]);
    newnode->left = createTree(a, 2 * i + 1);
    newnode->right = createTree(a, 2 * i + 2);
    return newnode;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Node* root = createTree(a, 0);
    cout << countUneven(root, k) << endl;

    return 0;
}
