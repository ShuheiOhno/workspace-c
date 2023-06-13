//入力された文字列の妥当性チェック
int check(const char s[]){
    if (strlen(s) != 4){
        return 1; //文字列の長さが4ではない
    }
    for (int i = 0; i < 4; i++){
        if (!isdigit(s[i]))
            return 2; //数字以外の文字が含まれている
        for (int j = 0; j < i; j++){
            if (s[i] == s[j]){
                return 3; //同一の数字が含まれている
            }
        }
    }
    return 0; //文字列は妥当
}