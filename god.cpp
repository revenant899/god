//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int main() {
//    int M, N;
//
//    cout << "¬вед≥ть розм≥р масиву A (M): ";
//    cin >> M;
//    cout << "¬вед≥ть розм≥р масиву B (N): ";
//    cin >> N;
//
//    vector<int> A(M), B(N);
//
//    cout << "¬вед≥ть елементи масиву A:\n";
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "¬вед≥ть елементи масиву B:\n";
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    set<int> result;
//    set<int> elementsInB(B.begin(), B.end());
//
//    for (int i = 0; i < M; ++i) {
//        if (elementsInB.find(A[i]) == elementsInB.end()) {
//            result.insert(A[i]);
//        }
//    }
//
//    cout << "–езультат (елементи масиву A, €ких немаЇ в B, без повторень):\n";
//    for (int elem : result) {
//        cout << elem << " ";
//    }
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int main() {
//    int M, N;
//
//    cout << "¬вед≥ть розм≥р масиву A (M): ";
//    cin >> M;
//    cout << "¬вед≥ть розм≥р масиву B (N): ";
//    cin >> N;
//
//    vector<int> A(M), B(N);
//
//    cout << "¬вед≥ть елементи масиву A:\n";
//    for (int i = 0; i < M; ++i) {
//        cin >> A[i];
//    }
//
//    cout << "¬вед≥ть елементи масиву B:\n";
//    for (int i = 0; i < N; ++i) {
//        cin >> B[i];
//    }
//
//    set<int> result;
//    set<int> elementsInA(A.begin(), A.end());
//    set<int> elementsInB(B.begin(), B.end());
//
//    for (int elem : elementsInA) {
//        if (elementsInB.find(elem) == elementsInB.end()) {
//            result.insert(elem);
//        }
//    }
//
//    for (int elem : elementsInB) {
//        if (elementsInA.find(elem) == elementsInA.end()) {
//            result.insert(elem);
//        }
//    }
//
//    cout << "–езультат (елементи, €к≥ не Ї сп≥льними дл€ A ≥ B, без повторень):\n";
//    for (int elem : result) {
//        cout << elem << " ";
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
