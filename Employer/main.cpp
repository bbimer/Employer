#include <iostream>
using namespace std;

class Employer {
public:
	virtual void Print() = 0;
	virtual ~Employer() {}
};

class Presedent : public Employer {
public:
	void Print() override {
		cout << "Presedent::print" << endl;
	}
};

class Manager : public Employer {
public:
	void Print() override {
		cout << "Manager::print" << endl;
	}
};

class Worker : public Employer {
public:
	void Print() override {
		cout << "Worker::print" << endl;
	}
};

void Print(Employer* obj) {
	obj->Print();
}

int main() {
	Presedent prs;
	Manager mgr;
	Worker wrk;

	Print(&prs);
	Print(&mgr);
	Print(&wrk);

	return 0;
}