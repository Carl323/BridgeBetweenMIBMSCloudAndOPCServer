#include "pch.h"

#include "MIBMSCloudSDKForBridge.h"

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(char stringtemp[1024], std::string key)
{
	return handler->_get_Json_value_string(stringtemp, key);
}

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(std::string stringtemp, std::string key)
{
	return handler->_get_Json_value_string(stringtemp, key);
}

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(char stringtemp[1024], std::string key, std::string ROOT)
{
	return handler->_get_Json_value_string(stringtemp, key, ROOT);
}

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(std::string stringtemp, std::string key, std::string UKey)
{
	return handler->_get_Json_value_string(stringtemp, key, UKey);
}

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(char stringtemp[1024], std::string key, std::string ROOT2, std::string ROOT1)
{
	return handler->_get_Json_value_string(stringtemp, key, ROOT2, ROOT1);
}

std::string MIBMSCloudSDKForBridge::JsonTool::_get_Json_value_string(std::string stringtemp, std::string key, std::string ROOT2, std::string ROOT1)
{
	return handler->_get_Json_value_string(stringtemp, key, ROOT2, ROOT1);
}

void MIBMSCloudSDKForBridge::JsonTool::MakeANewSendPreTask()
{
	sendler = new jsonsendler;
}

void MIBMSCloudSDKForBridge::JsonTool::AddKeyAndValue_int(std::string key, int value)
{
	if (sendler != NULL) 
	{
		sendler->AddKeyAndValue_int(key, value);
	}
}

void MIBMSCloudSDKForBridge::JsonTool::AddKeyAndValue_string(std::string key, std::string value)
{
	if (sendler != NULL)
	{
		sendler->AddKeyAndValue_string(key, value);
	}
}

void MIBMSCloudSDKForBridge::JsonTool::AddKeyAndValue_bool(std::string key, bool value)
{
	if (sendler != NULL)
	{
		sendler->AddKeyAndValue_bool(key, value);
	}
}

std::string MIBMSCloudSDKForBridge::JsonTool::OutputJsonString()
{
	return sendler->OutputJsonString();
}

void MIBMSCloudSDKForBridge::JsonTool::EndSendPreTask()
{
	delete sendler;
}



