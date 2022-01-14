#pragma once

using namespace System;
#include "JsonHandler.h"

namespace MIBMSCloudSDKForBridge {
	public ref class JsonTool
	{
	public:
		// TODO: 在此处为此类添加方法。
		jsonhandler* handler = new jsonhandler;
		jsonsendler* sendler = NULL;
		std::string _get_Json_value_string(char stringtemp[1024], std::string key);
		std::string _get_Json_value_string(std::string stringtemp, std::string key);
		std::string _get_Json_value_string(char stringtemp[1024], std::string key, std::string ROOT);
		std::string _get_Json_value_string(std::string stringtemp, std::string key, std::string UKey);
		std::string _get_Json_value_string(char stringtemp[1024], std::string key, std::string ROOT2, std::string ROOT1);
		std::string _get_Json_value_string(std::string stringtemp, std::string key, std::string ROOT2, std::string ROOT1);

		void MakeANewSendPreTask();
		void AddKeyAndValue_int(std::string key, int value);
		void AddKeyAndValue_string(std::string key, std::string value);
		void AddKeyAndValue_bool(std::string key, bool value);
		std::string OutputJsonString();
		void EndSendPreTask();

	};
}
