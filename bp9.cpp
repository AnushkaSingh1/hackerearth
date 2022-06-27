#include <iostream>

#include <algorithm>

 

void ShapeCounter(int& n_rows,int& n_colums,std::string& shape,int& shape_counter,int& actual_shape_counter) {   

std::cin >> n_rows >> n_colums;   

for (; n_rows > 0; n_rows--,shape_counter=0) {

        std::cin >> shape;       

 

shape_counter = std::count(shape.begin(), shape.begin()+n_colums, '#');

 

        actual_shape_counter = std::max(shape_counter,actual_shape_counter);        

    }    

}

 

 

void TestCases() {    int test_cases;    int n_rows;    int n_colums;    std::string shape;    int shape_counter = 0;    int actual_shape_counter = 0;

    std::cin >> test_cases;

    for (; test_cases > 0; test_cases--, actual_shape_counter = 0) {       

ShapeCounter(n_rows,n_colums,shape,shape_counter,actual_shape_counter);       

std::cout << actual_shape_counter << std::endl;        

    }

}

 

int main() {   

TestCases();

 

 

}

























You are given a table with  rows and  columns. Each cell is colored with white or black. Considering the shapes created by black cells, what is the maximum border of these shapes? Border of a shape means the maximum number of consecutive black cells in any row or column without any white cell in between.

A shape is a set of connected cells. Two cells are connected if they share an edge. Note that no shape has a hole in it.

Input format

The first line contains  denoting the number of test cases.
The first line of each test case contains integers  denoting the number of rows and columns of the matrix. Here, '#' represents a black cell and '.' represents a white cell. 
Each of the next  lines contains  integers.
Output format

Print the maximum border of the shapes.

Sample Input
10
2 15
.....####......
.....#.........
7 9
...###...
...###...
..#......
.####....
..#......
...#####.
.........
18 11
.#########.
########...
.........#.
####.......
.....#####.
.....##....
....#####..
.....####..
..###......
......#....
....#####..
...####....
##.........
#####......
....#####..
....##.....
.#######...
.#.........
1 15
.....######....
5 11
..#####....
.#######...
......#....
....#####..
...#####...
8 13
.....######..
......##.....
########.....
...#.........
.............
#######......
..######.....
####.........
7 5
.....
..##.
###..
..##.
.....
..#..
.#...
14 2
..
#.
..
#.
..
#.
..
..
#.
..
..
..
#.
..
7 15
.###########...
##############.
...####........
...##########..
.......#.......
.....#########.
.#######.......
12 6
#####.
###...
#.....
##....
###...
......
.##...
..##..
...#..
..#...
#####.
####..
Sample Output
4
5
9
6
7
8
3
1
14
5
Time Limit: 1
Memory Limit: 256
Source Limit:
