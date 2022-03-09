

#pragma once
#include <string>
#include "Containers/UnrealString.h"

namespace Message
{
	const FString basic = L"명령어안내(H) 종료(X)";

	const FString login = L"** 로그인 명령어(LOGIN [ID])을 사용해주세요";

	const FString line = L"---------------------------------------------------------------";

	const FString userList = L"------------------------- 사람들 목록 -------------------------";

	const FString roomList = L"------------------------- 대화방 목록 -------------------------";

	const FString roomInfo = L"------------------------- 대화방 정보 -------------------------";

	const FString invite = L"** 초대 요청을 했습니다.";

	const FString alreadyExistName = L"** 이미 존재하는 아이디입니다.";
	//

	const FString notExistUser = L"** 존재하지 않는 아이디입니다.";

	const FString notExistRoom = L"** 존재하지 않는 방입니다.";

	const FString roomFull = L"** 방이 가득찼습니다.";

	const FString notFullCommand = L"** 커멘드를 다시 확인해주세요.";

	const FString notExistCommand = L"** 존재하지 않는 커멘트입니다.";

}
