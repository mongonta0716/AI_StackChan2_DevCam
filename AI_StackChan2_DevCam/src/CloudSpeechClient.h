#ifndef _CLOUDSPEECHCLIENT_H
#define _CLOUDSPEECHCLIENT_H
#include <WiFiClientSecure.h>
#include "Audio.h"

enum Authentication {
  USE_ACCESSTOKEN,
  USE_APIKEY
};

class CloudSpeechClient {
  WiFiClientSecure client;
  void PrintHttpBody2(Audio* audio);
  String key;
//  Authentication authentication;
protected:
  String language_code;
public:
  CloudSpeechClient(const char* root_ca, const char* api_key);
  ~CloudSpeechClient();
  String Transcribe(Audio* audio);
  String getLanguage_code() { return language_code; };
};

#endif // _CLOUDSPEECHCLIENT_H

