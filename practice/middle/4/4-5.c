//ヒット（数字も位置もあっている）アンドブロー（正解に含まれるものの位置があっていない）の判定
//s:プレイヤーが入力した値。no:コンピュータが生成した値
void judge(const char a[], const int no[], int *hit, int *blow){
    *hit = *blow = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(a[i] == '0' + no[j]){ //数字が一致
                if(i == j)
                    (*hit)++; //ヒット(位置も一致)
                else
                    (*blow)++; //ブロー(位置が不一致)
            }
        }
    }
}