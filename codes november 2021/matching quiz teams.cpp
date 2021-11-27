// a bridged problm

// 2*n students -> ngroups      (x,y)   d1+d2+d3++dn is minimized


// approaches


//total number of comninatons 2nc2   


// 2n c 2  *n + 2n-2c2 *n-1 


#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
int N;

double dist[20][20], memo[1 << 16]; // 1 << 16 is 2^16, recall that max N = 8
double matching(int bit_mask) {

if (memo[bit_mask] > -0.5) // see that we initialize the array with -1 in the main function
return memo[bit_mask];

if (bit_mask == (1 << 2 * N) - 1) // all are matched

return memo[bit_mask] = 0;

double matching_value = 32767 * 32767; // initialize with large value

for (int p1 = 0; p1 < 2 * N; p1++)
if (!(bit_mask & (1 << p1))) { // if this bit is off
for (int p2 = p1 + 1; p2 < 2 * N; p2++)
if (!(bit_mask & (1 << p2))) // if this different bit is also off
matching_value = min(matching_value,
dist[p1][p2] + matching(bit_mask | (1 << p1) | (1 << p2)));
break; // this ’break’ is necessary. do you understand why?
} // hint: it helps reducing time complexity from O((2N)^2 * 2^(2N)) to O((2N) * 2^(2N))


return memo[bit_mask] = matching_value;
}

// test main

int main() {

char line[1000], name[1000];
int i, j, caseNo = 1, x[20], y[20];

// freopen("10911.txt", "r", stdin); // one way to simplify testing

while (sscanf(gets(line), "%d", &N), N) {
for (i = 0; i < 2 * N; i++)
sscanf(gets(line), "%s %d %d", &name, &x[i], &y[i]);
for (i = 0; i < 2 * N; i++) // build pairwise distance table
for (j = 0; j < 2 * N; j++)

dist[i][j] = sqrt((double)(x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));

// using DP to solve matching on general graph

memset(memo, -1, sizeof memo);

printf("Case %d: %.2lf\n", caseNo++, matching(0));

}
return 0;
}


//Read the followiung problemns
/*

10360 Rat Attack Complete Search or Dynamic Programming Section 3.1 or 3.4
10341 Solve It Section 3.2
11292 Dragon of Loowater Section 3.3
11450 Wedding Shopping Section 3.4
11635 Hotel Booking Section 4.3 + 4.5
11506 Angry Programmer Section 4.8
10243 Fire! Fire!! Fire!!! Section 4.9.1
10717 Mint Section 5.3.2
11512 GATTACA Section 6.4
10065 Useless Tile Packers Section 7.3
*/
