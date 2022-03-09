

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
		"명령어안내(H) 종료(X)\r\n";

	const std::string login =
		"** 로그인 명령어(LOGIN [ID])을 사용해주세요\r\n";

	const std::string line =
		"---------------------------------------------------------------\r\n";

	const std::string userList = 
		"------------------------- 사람들 목록 -------------------------\r\n";

	const std::string roomList = 
		"------------------------- 대화방 목록 -------------------------\r\n";

	const std::string roomInfo =
		"------------------------- 대화방 정보 -------------------------\r\n";

	const std::string invite = "** 초대 요청을 했습니다.\r\n";

	const std::string alreadyExistName = "** 이미 존재하는 아이디입니다.\r\n";

	const std::string notExistUser = "** 존재하지 않는 아이디입니다.\r\n";

	const std::string notExistRoom = "** 존재하지 않는 방입니다.\r\n";

	const std::string roomFull = "** 방이 가득찼습니다.\r\n";

	const std::string notFullCommand = "** 커멘드를 다시 확인해주세요.\r\n";

	const std::string notExistCommand = "** 존재하지 않는 커멘트입니다.\r\n";

}
