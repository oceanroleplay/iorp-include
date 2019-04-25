stock GetPlayerNameEx(playerid) return CallRemoteFunction("GetPlayerNameEx", "d", playerid);
stock GetPlayerAdminLevel(playerid) return CallRemoteFunction("GetPlayerAdminLevel", "d", playerid);
stock ShowPlayerDialogEx(playerid, dialogid, offsetid, style, caption[], info[], button1[], button2[], extraid = -1, payload[]) return CallRemoteFunction("ShowPlayerDialogEx", "ddddssssds", playerid, dialogid, offsetid, style, caption, info, button1, button2, extraid, payload);
stock ObtainDialogID();
forward OnDialogResponseEx(playerid, dialogid, offsetid, response, listitem, inputtext[], extraid, payload[]);
