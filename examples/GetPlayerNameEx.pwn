#include <a_samp>

public OnPlayerConnect(playerid)
{
    new string[50];
    format(string, sizeof string, "s", GetPlayerNameEx(playerid));
    SendClientMessage(playerid, -1, string);
    return 1;
}
