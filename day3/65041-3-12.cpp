#include <stdio.h>
// #include <conio.h>
// #include <math.h>
// #include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
// #include <string.h>
// #include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
typedef pair<ll,ll> pl;
// #define INFint numeric_limits<int>::max()
// #define INFfloat numeric_limits<float>::infinity()
#define st first
#define nd second
const int MX = 2e9 + 7;
const int LM = INT_MAX;
const int TM = 1e6 + 2;
const int TT = 1e5 + 3;
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ll UI = 1e15;
#define loop(n) for (int i = 0; i < n; i++)
#define mbr(n,m) get<m>(n)
void getString(char *question, char *answer) {
	char buffer[256];
	printf("%s ", question);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", answer);
}
void getInt(char *question, int *answer) {
	printf("%s ", question);
	scanf("%d", answer);
}

int main() {
    int first, last, i, week, day;
    getInt("Starting day:", &first);
    getInt("Day in month:", &last);
    for (int month = 0; month < 3; month++) {
        if (month) {
            first = day;
            if (first == 8) first = 0;
            cout << endl;
        } i = 1;
        for (week = 1; week < first; week++) printf("%4s", " ");
        for (week = first; week <= 7; week++) printf("%4d", i++);
        while (i <= last) {
            cout << endl; day = 1;
            for (week = 0; week < 7; week++)
                if (i<= last) {
                        printf("%4d", i++);
                        day++;
                }
        }
    }
}
