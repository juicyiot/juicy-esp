#ifndef WIFICONNECTION_H
#define WIFICONNECTION_H

#include "CredentialsStorage.h"

class WiFiConnection {
public:
	WiFiConnection();
	WiFiConnection(const char *ssid, const char *password);
	bool connect(bool shouldPersistCredentials) const;
	void disconnect(bool shouldClearCredentials);
	bool isConnected() const;
private:
	credentials_t credentials;
	void persistCredentials() const;
	void clearCredentials();
};

#endif
