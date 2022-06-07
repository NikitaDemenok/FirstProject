#include <iostream>

using namespace std;

struct leaf {
    int value;
    leaf* left;
    leaf* right;
};

leaf* adding(int value) {
    leaf* newleaf = new leaf();
    newleaf->value = value;
    newleaf->left = NULL;
    newleaf->right = NULL;
    return newleaf;
}

leaf* vvod(leaf* root, int value) {
    if (root == NULL)
        root = adding(value);
    else
    {
        if (value <= root->value)
            root->left = vvod(root->left, value);
        else
            root->right = vvod(root->right, value);
    }
    return root;
}

int findmin(leaf* root, int minim) {
    int min1;
    if (root != NULL)
    {
        if (root->value < minim) {
            minim = root->value;
        }
        min1 = findmin(root->left, minim);
        if (min1 < minim)
            minim = min1;
        min1 = findmin(root->right, minim);
        if (min1 < minim)
            minim = min1;
    }
    return minim;
}

int findmax(leaf* root, int maxi) {
    int max1;
    if (root != NULL)
    {
        if (root->value > maxi) {
            maxi = root->value;
        }
        max1 = findmax(root->left, maxi);
        if (max1 > maxi)
            maxi = max1;
        max1 = findmax(root->right, maxi);
        if (max1 > maxi)
            maxi = max1;
    }
    return maxi;
}

void findleaf(leaf* root, int minim) {
    if (root == NULL) return;
    else {
        if (root->value == minim)
            cout << root->value << " ";
        findleaf(root->left, minim);
        findleaf(root->right, minim);
    }
}

int main() {
    leaf* root = NULL;
    root = vvod (root, 8);
    root = vvod (root, 9);
    root = vvod (root, 4);
    root = vvod (root, 7);
    root = vvod (root, 11);
    root = vvod (root, 5);
    root = vvod (root, 10);
    root = vvod (root, 6);
    int minim = root->value;
    minim = findmin(root->left, minim);
    int maxi = root->value;
    maxi = findmax(root->right, maxi);
    for (minim; minim <= maxi; minim++)
        findleaf(root, minim);
}
