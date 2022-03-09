

#pragma once
#include <string>

enum class EMsgEvent
{
	OnChat,
	UserList,
	RoomList,
	Invalid
};

namespace Message
{
	const std::string basic =
		"��ɾ�ȳ�(H) ����(X)\r\n";

	const std::string login =
		"** �α��� ��ɾ�(LOGIN [ID])�� ������ּ���\r\n";

	const std::string line =
		"---------------------------------------------------------------\r\n";

	const std::string userList = 
		"------------------------- ����� ��� -------------------------\r\n";

	const std::string roomList = 
		"------------------------- ��ȭ�� ��� -------------------------\r\n";

	const std::string roomInfo =
		"------------------------- ��ȭ�� ���� -------------------------\r\n";

	const std::string invite = "** �ʴ� ��û�� �߽��ϴ�.\r\n";

	const std::string alreadyExistName = "** �̹� �����ϴ� ���̵��Դϴ�.\r\n";

	const std::string notExistUser = "** �������� �ʴ� ���̵��Դϴ�.\r\n";

	const std::string notExistRoom = "** �������� �ʴ� ���Դϴ�.\r\n";

	const std::string roomFull = "** ���� ����á���ϴ�.\r\n";

	const std::string notFullCommand = "** Ŀ��带 �ٽ� Ȯ�����ּ���.\r\n";

	const std::string notExistCommand = "** �������� �ʴ� Ŀ��Ʈ�Դϴ�.\r\n";

}
