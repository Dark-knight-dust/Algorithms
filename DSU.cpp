#include<bits/stdc++.h>
using namespace std;

// DSU implementation (Naive approach)

void make(int v) {
	parent[v]=v;
}

int find_set(int v) {
	if (v==parent[v])
		return v;
	return find_set(parent[v]);
}

void union_sets() {
	a=find_set(a);
	b=find_set(b);
	if (a!=b)
		parent[b]=a;
}

int main()
{
	return 0;
}
