# Subset-Sum
An established group of scientists are working on finding solution to NP hard problems. They claim Subset Sum as an NP-hard problem. The problem is to determine whether there exists a subset of a given set S whose sum is a given number K. 

You are a computer engineer and you claim to solve this problem given that all numbers in the set are non-negative. Given a set S of size N of non-negative integers, find whether there exists a subset whose sum is K.

Input
First line of input contains T, the number of test cases. T test cases follow. 

Each test case contains 2 lines. First line contains two integers N and K. Next line contains N space separated non-negative integers (each less than 100000).

0 < T < 1000

0 < N < 1000

0 < K < 1000




Output
Output T lines, one for each test case. Every line should be either 0 or 1 depending on whether such a subset exists or not.

Example
Input:
2
5 10
3 4 6 1 9
3 2
1 3 4

Output:
1
0

                
nikkaramesinis	exec time	0.19	mem 240.9M	language C++14
https://www.codechef.com/problems/TF01
