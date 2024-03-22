#include <iostream>
#include <vector>

using namespace std;

const int MAX = 9; //스도쿠 한 행 사이즈

bool check_row[MAX][MAX + 1]; //각 행의 숫자 존재 여부 체크
bool check_col[MAX][MAX + 1]; //각 열의 숫자 존재 여부 체크
bool check_3x3[MAX][MAX + 1]; //각 3x3 사각형의 숫자 존재 여부 체크

int get3x3Idx(int row, int col){
	return (row / 3) * 3 + col / 3;
}

bool fillSudoku(int idx, vector<vector<int>> *sudoku) {
    if (idx == MAX * MAX) { //스도쿠 모두 채움 (기저 조건)
        return true;
    }
    int row = idx / MAX;
    int col = idx % MAX;

    if ((*sudoku)[row][col]) { //이미 숫자가 채워진 칸이라면 다음 칸으로 넘어감
        return fillSudoku(idx + 1, sudoku);
    }

    for (int i = 1; i <= MAX; i++) { //1~9까지 넣어보기
		// 행, 열, 3x3 구역 확인
        if (!check_row[row][i] && !check_col[col][i] && !check_3x3[get3x3Idx(row, col)][i]) {
			//체크 배열에 표기
            check_row[row][i] = true;
            check_col[col][i] = true;
            check_3x3[get3x3Idx(row, col)][i] = true;
			//스도쿠 칸 채우기
            (*sudoku)[row][col] = i;

            if (fillSudoku(idx + 1, sudoku)) {
                return true;
            }
						
			//체크 배열 다시 수정
            check_row[row][i] = false;
            check_col[col][i] = false;
            check_3x3[get3x3Idx(row, col)][i] = false;
						//스도쿠 칸 비우기
            (*sudoku)[row][col] = 0;
        }
    }
    return false;
}

vector<vector<int>> solution(vector<vector<int>> sudoku){
    vector<vector<int>> answer(MAX, vector<int>(MAX));
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            answer[i][j] = sudoku[i][j];
            if (sudoku[i][j]) { //스도쿠 상태 보고, check배열들 초기화
                check_row[i][sudoku[i][j]] = true;
                check_col[j][sudoku[i][j]] = true;
                check_3x3[get3x3Idx(i, j)][sudoku[i][j]] = true;
            }
        }
    }
	fillSudoku(0, &answer);
	return answer;
}

int main() {
	vector<vector<int>> sudoku(MAX, vector<int>(MAX));
    //입력
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cin >> sudoku[i][j];
        }
    }

    //연산
    auto output = solution(sudoku);

    //출력
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << output[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}