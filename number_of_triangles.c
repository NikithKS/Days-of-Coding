"""
Number of triangles:

You are given a polygon of N sides with vertices numbered from . Now, exactly  vertices of the polygons are colored black and remaining are colored white. You are required to find the number of triangles denoted by A such that:

    1)The triangle is formed by joining only the white-colored vertices of the polygon.
    2)The triangle shares at least one side with the polygon.

Input format

The first line contains t denoting the number of test cases.
Next t lines contain three space-separated integers N, B1 and B2 where N is the number of sides in the polygon and B1, B2 denote the vertices that are colored black.

Output format:

For each test case, print the answer A representing the number of triangles that can be formed with the given conditions in the problem statement.

Constraints


SAMPLE INPUT
1
6 2 5

SAMPLE OUTPUT
4

"""

// CODE:


#include<stdio.h>
#include<stdlib.h>

int main(void){
  long long int test, s1, s2, noVertices, noSides, adjacent, var, ans;
  scanf("%ld", &test);

  while(test--){
    scanf("%ld", &noVertices);
    scanf("%ld", &s1);
    scanf("%ld", &s2);

    noSides = noVertices;
    var = 1;

    adjacent = abs(s1 - s2);
    if( adjacent < 2 || adjacent == noVertices - 1){
      noSides -= 3;
    }
    else if(adjacent == 2 || adjacent == noVertices - 2){
      noSides -= 4;
    }
    else{
      noSides -= 4;
      var += 1;
    }
    ans = noSides * (noVertices - 5) + var;
    printf("%ld\n", ans);
  }
}
