class List{
private:
	typedef struct Node{
		   int data;
		   Node* next;
	}* NodePtr;
	NodePtr m_nodePtrHead;
	NodePtr m_nodePtrCurr;
	NodePtr m_nodePtrTemp;
public:
	List();
	~List();
	void AddNode(int _addData);
	void DeleteNode(int _delData);
	void PrintList();
};