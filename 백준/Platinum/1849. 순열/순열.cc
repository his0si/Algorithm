#include <iostream>
#include <vector>

using namespace std;

vector<int> Tree, Arr;

//구간 합을 빠르게 구하기 위해 세그먼트 트리 알고리즘 사용
void initTree(int Node, int Begin, int End) { //초기화 트리
    if (Begin == End) {
        Tree[Node] = 1;
        return;
    }

    int Mid = (Begin + End) / 2;

    initTree(Node * 2, Begin, Mid);
    initTree(Node * 2 + 1, Mid + 1, End);
    Tree[Node] = Tree[Node * 2] + Tree[Node * 2 + 1];
}

int findIndex(int Node, int Begin, int End, int Count) {

    if (Begin == End) 
        return Begin;

    int Mid = (Begin + End) / 2;

    if (Count < Tree[Node * 2]) 
        return findIndex(Node * 2, Begin, Mid, Count);

    else 
        return findIndex(Node * 2 + 1, Mid + 1, End, Count - Tree[Node * 2]);
}

void updateTree(int Node, int Begin, int End, int Index) {
    if (Index < Begin || Index > End) 
        return;
    if (Begin == End) {
        Tree[Node] = 0;
        return;
    }
    int Mid = (Begin + End) / 2;

    updateTree(Node * 2, Begin, Mid, Index);
    updateTree(Node * 2 + 1, Mid + 1, End, Index);

    Tree[Node] = Tree[Node * 2] + Tree[Node * 2 + 1];
}

int main() {

    int N, Count, Index;
    cin >> N;

    Tree.resize(N * 4 + 1, 0); // Tree 벡터를 크기와 함께 0으로 초기화
    Arr.resize(N + 1);
    initTree(1, 1, N);

    for (int i = 1; i <= N; i++) {
        cin >> Count;
        Index = findIndex(1, 1, N, Count);
        Arr[Index] = i;
        updateTree(1, 1, N, Index);
    }

    for (int i = 1; i <= N; i++)
        cout << Arr[i] << " ";

    return 0;
}