#include <bits/stdc++.h>
// #include<stdio.h>
using namespace std;

int main()
{

    FILE *fp = fopen("test_file.txt", "w");
    int a = 10;
    float b = 20.101;
    fprintf(fp, "this is new file\n");
    cout << "this is master branch file" << endl;
    fprintf(fp, "this is new file in test branch\n");
    fprintf(fp, "%d\n", a);
    fprintf(fp, "%f\n", b);
    fprintf(fp, "closed merge conflicts\n");
    fclose(fp);
    cout << "successfully modified the file" << endl;

    cout << endl;
    return 0;
}