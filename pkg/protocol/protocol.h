#pragma once

//------IO-------//
enum msgType{
  MSG_COMMAND,
  MSG_SUCCESS,
  MSG_TEXT,
  MSG_ERROR,
  MSG_BAD_REQUEST,
};

enum cmdType{
  CMD_LOGIN,
  CMD_SIGNUP,
  CMD_LOOK,
  CMD_TAKE,
  CMD_ANSWER,
  CMD_USE,
  CMD_OBJS,
  CMD_DROP,
  CMD_END,
  CMD_RROOMS,
  CMD_RROOM,
  CMD_WIN
};
