#pragma once

#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

constexpr int null = -1;

using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode* next) : val(val), next(next) {}
};

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
  TreeNode(int value, TreeNode* left, TreeNode* right)
      : val(value), left(left), right(right) {}
};

template <typename T>
void printVector(const vector<T>& vec) {
  for_each(vec.begin(), vec.end(), [](const auto& val) { cout << val << ","; });
  cout << endl;
}

template <typename T>
void printDeque(const deque<T>& deq) {
  for_each(deq.begin(), deq.end(), [](const auto& val) { cout << val << " "; });
  cout << endl;
}

template <typename T>
void printMat(const vector<vector<T>>& nums) {
  for (const auto& row : nums) {
    for (const auto& elem : row)
      cout << elem << ",";
    cout << "\t";
  }
  cout << endl;
}

ListNode* createList(const vector<int>& vec);

void printList(ListNode* list);

TreeNode* sortedArray2BST(const vector<int>& nums);

TreeNode* construct_binary_tree(const vector<int>& vec);

void print_binary_tree(TreeNode* root);
