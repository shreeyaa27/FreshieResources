#include<simplecpp>
void sortWords(char words[][100], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int k = 0;
            while (words[i][k] == words[j][k]) {
                ++k;
            }
            if (words[i][k] > words[j][k]) {
                char temp[100];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

main_program {
    int N;
    cin >> N;

    char words[N][100];
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }

    sortWords(words, N);

    cout << "\nSorted words in lexicographic order:\n";
    for (int i = 0; i < N; ++i) {
        cout << words[i] << endl;
    }
}


