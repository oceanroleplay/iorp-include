stock SetPlayerPosEx(playerid, Float:x,Float:y,Float:z)
{
	if(funcidx("SetPlayerPosEx") != -1)
	{
		CallRemoteFunction("SetPlayerPosEx", "dfff", playerid, Float:x,Float:y,Float:z);
	}
	else
	{
		print("Undefined Function Called: SetPlayerPosEx");
	}
	return 1;
}