#include <iostream>
#include <queue>
using namespace std;

class Graph {
public:
	Graph(int n);
	~Graph();
	void addEdge(int src, int tar);
	void BFTraversal();
	void DFTraversal();
	void printVertices();
	void printEdges();
private:
	int vertexCount;
	int edgeCount;
	bool** adjMat;
	void BFS(int n, bool marked[]);
	void DFS(int n, bool marked[]);
};

Graph::Graph(int n=0) {
	vertexCount = n;
	edgeCount = 0;

	if(n == 0)
		adjMat = 0;
	else {
		adjMat = new bool* [n];
		for(int i=0; i < n; i++)
			adjMat[i] = new bool [n];

		for(int i=0; i < n; i++)
			for(int j=0; j < n; j++)
				adjMat[i][j] = 0;
	}
}

Graph::~Graph() {
	for(int i=0; i < vertexCount; i++)
		delete [] adjMat[i];

	delete [] adjMat;
}

void Graph::addEdge(int src, int tar) {
	if(src < 0 || tar < 0 || src > vertexCount-1 || tar > vertexCount-1)
		cout << "Invalid vertex index! No edge has been added." << endl;
	else if(src == tar)
		cout << "No self loop! No edge has been added." << endl;
	else if (adjMat[src][tar] == 1)
		cout << "This edge already exists. No edge has been added." << endl;
	else {
		adjMat[src][tar] = 1;
		edgeCount++;
	}
}

void Graph::BFTraversal() {
bool *marked = new bool[vertexCount];
    for (int counter = 0; counter < vertexCount; ++counter)
        marked[counter] = false;
    for(int counter = 0; counter < vertexCount; ++counter){
        if(!marked[counter])
        BFS(counter,marked);
    }
    cout << endl;
}

void Graph::BFS(int n, bool marked[]) {
  queue<int> q;
    marked[n] = true;
    q.push(n);

    while(!q.empty()){
        n = q.front();
        cout << n << " ";
        q.pop();

    for(int counter = 0; counter < vertexCount; ++counter){
        if(!marked[counter] && adjMat[n][counter] == 1){
            marked[counter] = true;
            q.push(counter);
        }
    }
    }
}

void Graph::DFTraversal() {
 bool *marked = new bool[vertexCount];
    for (int counter = 0; counter < vertexCount; ++counter)
        marked[counter] =  false;
    for(int counter = 0; counter < vertexCount; ++counter){
        if(!marked[counter])
            DFS(counter, marked);
    }
}

void Graph::DFS(int n, bool marked[]) {
marked[n] = true;
    cout << n << " ";

    for( int counter = 0; counter < vertexCount; ++counter)
        if(!marked[counter] && adjMat[n][counter] == 1)
            DFS(counter,marked);
}

void Graph::printVertices() {
	cout << "This directed graph has " << vertexCount << " vertex (vertices), ";
	cout << "indexed from 0 to " << vertexCount-1 << endl;
}

void Graph::printEdges() {
	cout << "This directed graph has " << edgeCount << " edge(s):" << endl;
	for(int counter=0; counter < vertexCount; counter++)
		for(int i=0; i < vertexCount; i++)
			if(adjMat[counter][i])
				cout << "(" << counter << "," << i << ")" << endl;
}

int main() {
	cout << "Constructing a directed graph..." << endl;
	cout << "Please enter the number of vertices in this graph: ";
	int n = 0;
	cin >> n;
	Graph G(n);

	while(1) {
		cout << "Adding an directed edge..." << endl;
		cout << "Trying to add an edge (-1,-1) indicates the end of adding edges and prints outputs." << endl;
		cout << "Please enter the vertex index of the source of the edge to be added: ";
		int a;
		cin >> a;
		cout << "Please enter the vertex index of the target of the edge to be added: ";
		int b;
		cin >> b;
		if( a == -1 && b == -1)
			break;
		else
			G.addEdge(a,b);
	}

	cout << "A directed graph has been constructed:" << endl;
	G.printVertices();
	G.printEdges();

	cout << "Breadth-First Traversal: ";
	G.BFTraversal();
	cout << "Depth-First Traversal: ";
	G.DFTraversal();
	return 0;
}
