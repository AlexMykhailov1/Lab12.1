// Lab12.1.cpp
// �������� ���������
// ���������� � �������� �������� ������� ��������� �����
// ������ 24


#include <iostream>

using namespace std;

struct Elem {
	Elem* link1,
		* link2;
	int info;
};

int main() {
	Elem* p;

	p = new Elem; // 1) �������� 1-�� ������� �� ����������� �������� � �� �����
	p->info = 1; // 2) �������� ���. ���� 1-�� �������� �������� 1
	p->link1 = new Elem; // 3) �������� 4-�� ������� �� ���������� �������� 1-�� ���� 1-�� �������� �� �����
	p->link2 = new Elem; // 4) �������� 3 ������� �� ���������� �������� 2-�� ���� 1-�� �������� �� �����
	p->link1->info = 4; // 5) �������� ���. ���� 4-�� �������� �������� 4
	p->link1->link1 = p->link2; // 6) ���������� �������� 1-�� ���� 4-�� �������� �� 3 �������
	p->link1->link2 = p; // 7) ���������� �������� 2-�� ���� 4-�� �������� �� 1 �������
	p->link2->info = 3; // 8) �������� ���. ���� 3-�� �������� �������� 3
	p->link2->link1 = new Elem; // 9) �������� 2-�� ������� �� ���������� �������� 1-�� ���� 3-�� �������� �� �����
	p->link2->link2 = p->link1; // 10) ���������� �������� 2-�� ���� 3-�� �������� �� 4-�� �������
	p->link2->link1->info = 2; // 11) �������� ���. ���� 2-�� �������� �������� 2
	p->link2->link1->link1 = p; // 12) ���������� �������� 1-�� ���� 2-�� �������� �� 1-�� �������
	p->link2->link1->link2 = p->link2; // 13) ���������� �������� 2-�� ���� 2-�� �������� �� 3 �������
	
	delete p->link2->link1; // 14) �������� 2 �������
	delete p->link2; // 15) �������� 3 �������
	delete p->link1; // 16) �������� 4 �������
	delete p; // 17) �������� 1 �������

	return 0;
}
