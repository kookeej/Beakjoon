/*
20362번
inu 코드페스티벌 2020 B
유니대전 퀴즈쇼
*/

#include <iostream>
using namespace std;

class Chatting {
	string id;
	string chat;
public:
	Chatting() { 
		id = "";
		chat = "";
	}
	string getId() { return id; }
	string getChat() { return chat; }
	void setId(string id) { this->id = id; }
	void setChat(string chat) { this->chat = chat; }
};

int main()
{
	int n;
	string s;
	string id, chat;
	string answer;
	cin >> n >> s;
	
	Chatting* ch = new Chatting[n];

	for (int i = 0; i < n; i++) {
		cin >> id >> chat;
		if (id == s) {
			//num = i + 1;	//정답자의 순서
			answer = chat;
		}
		ch[i].setId(id);
		ch[i].setChat(chat);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (ch[i].getId() == s) break;
		if (ch[i].getChat() == answer) {
			cnt += 1;
		}
	}

	cout << cnt;
}