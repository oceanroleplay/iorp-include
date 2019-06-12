stock Alexa(playerid, const query[], const response[], size = sizeof response); { return 1 }
stock Math(const query[], const response[], size = sizeof response); { return 1 }
stock IsStringContainWords(const string[], const words[]); { return 1 }
stock Google(const query[], const response[], size = sizeof response); { return 1 }
stock SortString(const input[], const response[], size = sizeof response); { return 1 }
stock GetWord(const string[], position = 0, const response[], size = sizeof response); { return 1 }
stock GetSubString(const string[], const word[], const response[], size = sizeof response); { return 1 }
stock Translate(const input[], const lang_code[], const Output[], size); { return 1 }
stock ResetChatSpam(playerid) { return 1 }
stock OnSpeedHackDetected(playerid) { return 1 }
stock ResetOriginalPos(playerid) { return 1 }
stock CallResetTeleportBit(playerid) { return 1 }
stock GetPlayerTeleportKickStatus(playerid) { return 1 }
stock SetPlayerTeleportKickStatus(playerid, bool:status) { return 1 }
stock OnPlayerTeleport(playerid, Float:distance) { return 1 }
stock SaveVehiclePosition(vehicleid) { return 1 }
stock ResetHackCounter(playerid) { return 1 }
stock OnAntiCheatVehicleWarp(playerid, vehicleid) { return 1 }
stock OnAntiCheatVehicleWarpInto(playerid, vehicleid) { return 1 }
stock OnPlayerInvalidBulletShot(playerid, reason) { return 1 }
stock OnVehicleFlyHack(playerid, Float:distance) { return 1 }
stock OnIncomingPacket(playerid, packetid, BitStream:bs) { return 1 }
stock OnIncomingRPC(playerid, rpcid, BitStream:bs) { return 1 }
stock OnVehicleDeathRequest(vehicleid, killerid) { return 1 }
stock CheckVehicleHealthHack() { return 1 }
stock ResetVehicleEx(vehicleid) { return 1 }
stock OnPlayerVehicleRepair(playerid) { return 1 }
stock OnSetVehicleToRespawnEx(vehicleid) { return 1 }
stock SetVehicleToRespawnEx(vehicleid) { return 1 }
stock freezeEx(playerid, time) { return 1 }
stock freeze(playerid) { return 1 }
stock unfreeze(playerid) { return 1 }
stock OnPlayerfreezed(playerid) { return 1 }
stock OnPlayerUnfreezed(playerid) { return 1 }
stock ResetHealthBitCall(playerid) { return 1 }
stock ResetArmourBitCall(playerid) { return 1 }
stock TogglePlayerSpectatingEx(playerid,bool: toggle) { return 1 }
stock OnTogglePRSpectatingEx(playerid, bool:toggle) { return 1 }
stock SetPlayerPosEx(playerid, Float:x, Float:y, Float:z) { return 1 }
stock OnSetPlayerPosEx(playerid, Float:x, Float:y, Float:z) { return 1 }
stock SetPlayerPosFindZEx(playerid, Float:x, Float:y, Float:z) { return 1 }
stock OnSetPlayerPosFindZEx(playerid, Float:x, Float:y, Float:z) { return 1 }
stock PutPlayerInVehicleEx(playerid, vehicleid, seatid) { return 1 }
stock OnPutPlayerInVehicleEx(playerid, vehicleid, seatid) { return 1 }
stock SetPlayerInteriorEx(playerid, interiorid) { return 1 }
stock OnSetPlayerInteriorEx(playerid, interiorid) { return 1 }
stock SetPlayerVirtualWorldEx(playerid, worldid) { return 1 }
stock OnSetPlayerVWEx(playerid, worldid) { return 1 }
stock SetPlayerSkinEx(playerid, skinid) { return 1 }
stock OnSetPlayerSkin(playerid, skinid) { return 1 }
stock OnTeleportVehicleEx(vehicleid, x, y, z, angle, worldid, interiorid) { return 1 }
stock OnSetVehiclePosEx(vehicleid, Float:x, Float:y, Float:z) { return 1 }
stock OnPlayerSkinChange(playerid, newskin, oldskin) { return 1 }
stock OnPlayerVirtualWorld(playerid, newvirtualworld, oldvirtualworld) { return 1 }
stock Player_COD_Data_Update(playerid) { return 1 }
stock Player_COD_Data_Init(playerid) { return 1 }
stock COD_SpawnInMenu(playerid) { return 1 }
stock COD_PlayerInfoTDUpdate() { return 1 }
stock CSS_Respawn() { return 1 }
stock CSS_Bomb(Float:X, Float:Y, Float:Z, type, Float:Radius) { return 1 }
stock CSS_Defuse_Bomb() { return 1 }
stock OnPlayerEventJoin(playerid, eventid) { return 1 }
stock OnPlayerEventLeave(playerid, eventid) { return 1 }
stock Fallout_Start_Event() { return 1 }
stock FalloutStarting() { return 1 }
stock CheckPlayer() { return 1 }
stock FallingPlat() { return 1 }
stock PUBG_Player_Data_Update(playerid) { return 1 }
stock PUBG_Player_Data_Init(playerid) { return 1 }
stock PUBG_UpdatePlayerTD() { return 1 }
stock MapShrinkActivate() { return 1 }
stock PUBG_DestroyPlane(plane_obj) { return 1 }
stock PUBG_DestroyVehicles() { return 1 }
stock PUBG_DestroyPickups() { return 1 }
stock IsPlayerInMatchArea() { return 1 }
stock EventStartCall() { return 1 }
stock busroutestoptimer(playerid) { return 1 }
stock PJobInfo(playerid) { return 1 }
stock HidePJobInfo(playerid) { return 1 }
stock LoadLumberJackTrees() { return 1 }
stock LoadLumberJackBuyers() { return 1 }
stock LJJS_CutTree(playerid) { return 1 }
stock LJJS_RespawnTree(id) { return 1 }
stock LJJS_RemoveLog(id) { return 1 }
stock Vein_Generate() { return 1 }
stock Player_Mine(playerid) { return 1 }
stock Ore_Destroy(id) { return 1 }
stock OnPlayerShowTaxiDialog(playerid) { return 1 }
stock OnPlayerFinishedRace(playerid) { return 1 }
stock OnPlayerExitCar(playerid) { return 1 }
stock FillTrash(id) { return 1 }
stock DownRollerBase() { return 1 }
stock DownObserver_Base() { return 1 }
stock DownCaida_Base() { return 1 }
stock StopBull() { return 1 }
stock spawnVehiculeWithPlayerInto(playerid, vehicle_num, Float:x, Float:y, Float:z, Float:angle, Float:variationZ) { return 1 }
stock moveObject(objectid, Float:posx, Float:posy, Float:posz, Float:speed) { return 1 }
stock destroyMissile() { return 1 }
stock checkPlayerInZone(playerid) { return 1 }
stock createMissile() { return 1 }
stock explodeMissile() { return 1 }
stock launchMissile() { return 1 }
stock startCountdown() { return 1 }
stock load_actors() { return 1 }
stock Check() { return 1 }
stock update_player_zone_mark() { return 1 }
stock OnAutoDriveEnable(Path:pathid, playerid, start_time) { return 1 }
stock AutoDrive(playerid) { return 1 }
stock LoadBankers() { return 1 }
stock LoadATMs() { return 1 }
stock OnBankAccountCreated(playerid, pass[]) { return 1 }
stock OnBankAccountLogin(playerid, id) { return 1 }
stock OnBankAccountDeposit(playerid, amount) { return 1 }
stock OnBankAccountWithdraw(playerid, amount) { return 1 }
stock OnBankAccountTransfer(playerid, id, amount) { return 1 }
stock OnBankAccountTransferDone(playerid, id, amount) { return 1 }
stock OnBankAccountPassChange(playerid, newpass[]) { return 1 }
stock OnBankAccountDeleted(playerid, id, amount) { return 1 }
stock OnBankAccountAdminEdit(playerid) { return 1 }
stock ATM_Regen(id) { return 1 }
stock Player_Beta_Tester_Init(playerid) { return 1 }
stock Excitement(playerid,bitchid) { return 1 }
stock isPlayerInArea() { return 1 }
stock syncActors() { return 1 }
stock BusinessTimer() { return 1 }
stock LoadBusinesses() { return 1 }
stock OnBusinessCreated(businessid) { return 1 }
stock BusinessSaleMoney(playerid) { return 1 }
stock OnPermChange(playerid) { return 1 }
stock OnPermRemoved(playerid) { return 1 }
stock PlayerWins(playerid) { return 1 }
stock GameOwers(playerid) { return 1 }
stock Load_Clan() { return 1 }
stock Load_Clan_Rank() { return 1 }
stock Load_Clan_Skin() { return 1 }
stock Load_Clan_Weapon() { return 1 }
stock Load_Vehicle_Clan_Data() { return 1 }
stock Clan_Player_Init(playerid) { return 1 }
stock LoadPlayerProgress2(playerid) { return 1 }
stock ResetCorpSys(playerid) { return 1 }
stock crusher_OpenDoors() { return 1 }
stock DCC_OnChannelMessage(DCC_Channel:channel, DCC_User:author, const message[]) { return 1 }
stock OnDCCommandPerformed(args[], success) { return 1 }
stock reboot() { return 1 }
stock kick(playerid) { return 1 }
stock kickall(playerid) { return 1 }
stock Player_DJ_Data_Init(playerid) { return 1 }
stock DJRemixPlayList() { return 1 }
stock DJAutoPlayList(PlayListID) { return 1 }
stock LoadDealers() { return 1 }
stock Player_SaveDrugs(playerid) { return 1 }
stock Player_Init(playerid) { return 1 }
stock UpdateDealerDrugs(dealerid) { return 1 }
stock RemoveDealerDrugs(dealerid) { return 1 }
stock PlantGrowth(id) { return 1 }
stock PlantRot(id) { return 1 }
stock RegenHealth(playerid, amount) { return 1 }
stock RemoveEffects(playerid) { return 1 }
stock Acp_OnResponse(playerid, page, response, listitem, const inputtext[]) { return 1 }
stock Acp_OnInit(playerid, page) { return 1 }
stock Ascp_OnResponse(playerid, page, response, listitem, const inputtext[]) { return 1 }
stock Ascp_OnInit(playerid, page) { return 1 }
stock PlayerData_Data_Init(playerid) { return 1 }
stock OnDialogResponseEx(playerid, dialogid, offsetid, response, listitem, const inputtext[], extraid, const payload[]) { return 1 }
stock Hcp_OnResponse(playerid, docid, response) { return 1 }
stock load_objectsystem() { return 1 }
stock Pcp_OnResponse(playerid, page, response, listitem, const inputtext[]) { return 1 }
stock Pcp_OnInit(playerid, page) { return 1 }
stock Scp_OnResponse(playerid, page, response, listitem, const inputtext[]) { return 1 }
stock Scp_OnInit(playerid, page) { return 1 }
stock Ucp_OnResponse(playerid, page, response, listitem, const inputtext[]) { return 1 }
stock Ucp_OnInit(playerid, page) { return 1 }
stock LoadEntrance() { return 1 }
stock Load_Police_Faction_Objects() { return 1 }
stock Load_Faction() { return 1 }
stock Load_Faction_Rank() { return 1 }
stock Load_Faction_Skin() { return 1 }
stock Load_Faction_Weapon() { return 1 }
stock Load_Vehicle_Faction_Data() { return 1 }
stock Faction_Player_Init(playerid) { return 1 }
stock load_food_system() { return 1 }
stock RemoveObject(playerid) { return 1 }
stock FootballAnimation(playerid) { return 1 }
stock GoalCount() { return 1 }
stock FootbalTime() { return 1 }
stock ConsumeFuel() { return 1 }
stock Refuel(playerid, vehicleid) { return 1 }
stock load_autogates() { return 1 }
stock GateSystemCheck() { return 1 }
stock Hitmarket_LoadPlayerData(playerid) { return 1 }
stock Hitmarket_HasBounty(playerid) { return 1 }
stock PurgeExpiredHits() { return 1 }
stock ResetAndSaveHouses() { return 1 }
stock LoadHouses() { return 1 }
stock LoadFurnitures() { return 1 }
stock GiveHouseKeys(playerid) { return 1 }
stock HouseSaleMoney(playerid) { return 1 }
stock invisible_update() { return 1 }
stock IsPlayerHaveingDlTest(playerid) { return 1 }
stock IsPlayerHaveLightLicense(playerid) { return 1 }
stock IsPlayerHaveHeavyLicense(playerid) { return 1 }
stock IsPlayerHaveTwoWheelerLicense(playerid) { return 1 }
stock IsPlayerHaveHeliCopterLicense(playerid) { return 1 }
stock IsPlayerHavePlaneLicense(playerid) { return 1 }
stock IsPlayerHaveBoatLicense(playerid) { return 1 }
stock Player_Driving_Data_Init(playerid) { return 1 }
stock Player_Driving_Data_Update(playerid) { return 1 }
stock ResetDLStatus(playerid) { return 1 }
stock ResetLocation(playerid) { return 1 }
stock GetPlayerCash(playerid) { return 1 }
stock GivePlayerCash(playerid, money) { return 1 }
stock SetPlayerCash(playerid, money) { return 1 }
stock ResetPlayerCash(playerid) { return 1 }
stock GetPlayerLastHealth(playerid) { return 1 }
stock SetPlayerLastHealth(playerid, data) { return 1 }
stock GetPlayerLastArmour(playerid) { return 1 }
stock SetPlayerLastArmour(playerid, data) { return 1 }
stock GetPlayerAutoSpawn(playerid) { return 1 }
stock SetPlayerAutoSpawn(playerid, data) { return 1 }
stock GetPlayerAdminLevel(playerid) { return 1 }
stock SetPlayerAdminLevel(playerid, data) { return 1 }
stock GetPlayerVIPLevel(playerid) { return 1 }
stock SetPlayerVIPLevel(playerid, data) { return 1 }
stock GetPlayerWantedLevelEx(playerid) { return 1 }
stock SetPlayerWantedLevelEx(playerid, data) { return 1 }
stock GetPlayerInteriorID(playerid) { return 1 }
stock SetPlayerInteriorID(playerid, data) { return 1 }
stock GetPlayerVirtualWorldID(playerid) { return 1 }
stock SetPlayerVirtualWorldID(playerid, data) { return 1 }
stock IsPlayerMasterAdmin(playerid) { return 1 }
stock SetPlayerMasterAdmin(playerid, bool:data) { return 1 }
stock IsPlayerBanned(playerid) { return 1 }
stock SetPlayerBanStatus(playerid, bool:data) { return 1 }
stock UpdatePlayerDB(playerid) { return 1 }
stock OnPlayerDataCheck(playerid, corrupt_check) { return 1 }
stock OnPlayerLogin(playerid) { return 1 }
stock OnPlayerRegister(playerid) { return 1 }
stock CallOnFirstSpawn(playerid) { return 1 }
stock OnFirstSpawn(playerid) { return 1 }
stock opc_login_check(playerid) { return 1 }
stock HTTP_OnLookupResponse(playerid, response, data[]) { return 1 }
stock OnPlayerKilled(playerid, killerid, weaponid) { return 1 }
stock Lottery(playerid) { return 1 }
stock ShowRandomNumbers(playerid) { return 1 }
stock HideError(playerid) { return 1 }
stock Elevator_Boost(floorid) { return 1 }
stock Elevator_TurnToIdle() { return 1 }
stock LoadDefaulMapIcons() { return 1 }
stock elevator() { return 1 }
stock Bus_NPC_Connect() { return 1 }
stock __OnPlayerPSYSTimerUpdate(playerid) { return 1 }
stock OnPlayerPause(playerid) { return 1 }
stock OnPlayerResume(playerid, pausedtime) { return 1 }
stock EndCallBecauseWait(playerid) { return 1 }
stock S3TragaperrasGO(playerid) { return 1 }
stock S3TragaperrasEND(playerid) { return 1 }
stock GalaxyS3PhoneStart(playerid) { return 1 }
stock UpdateTime() { return 1 }
stock Player_Patch_Status_Init(playerid, const pName[]) { return 1 }
stock OnPatchStatusUpdate_Hud(playerid) { return 1 }
stock OnPatchStatusUpdate_LSP(playerid) { return 1 }
stock OnPlayerEditObject(playerid, playerobject, objectid, response, Float:fX, Float:fY, Float:fZ, Float:fRotX, Float:fRotY, Float:fRotZ) { return 1 }
stock countdownTimer(race, count) { return 1 }
stock exitVehTimer(playerid) { return 1 }
stock raceEndingTimer(race) { return 1 }
stock respawnUnfreeze(playerid) { return 1 }
stock removeText(playerid) { return 1 }
stock OnRacePathCalculated(Path:pathid, slot) { return 1 }
stock RanMessage() { return 1 }
stock load_randmessage() { return 1 }
stock LoadRegister_Data() { return 1 }
stock CashReg_Reset(id, smokeid) { return 1 }
stock CashReg_Rob(playerid) { return 1 }
stock SetPlayerRPMode(playerid, bool:status) { return 1 }
stock EnablePlayerRPMode(playerid) { return 1 }
stock DisablePlayerRPMode(playerid) { return 1 }
stock ResetRPMode(playerid) { return 1 }
stock Safe_Lock(id) { return 1 }
stock LoadSafe_Data() { return 1 }
stock scoresystem(playerid) { return 1 }
stock load_shop_systems() { return 1 }
stock OnClothesLoad(playerid) { return 1 }
stock OnFinishPurchase(playerid, index) { return 1 }
stock OnRemoveFromSlot(playerid, slot) { return 1 }
stock svetstart(playerid) { return 1 }
stock dimstart(playerid) { return 1 }
stock startone(playerid) { return 1 }
stock startonex(playerid) { return 1 }
stock destroyFlare(playerid) { return 1 }
stock vms_car_repair(playerid) { return 1 }
stock OnSnakeUpdate() { return 1 }
stock ShipTimer() { return 1 }
stock CloseDoor1() { return 1 }
stock CloseDoor2() { return 1 }
stock CloseDoor3() { return 1 }
stock SprayTag_Dialog(iPlayerID, iType) { return 1 }
stock SprayTag(playerid, type) { return 1 }
stock SprayTag_Load(extraid, type) { return 1 }
stock SprayTag_QueryCreate(playerid, iIndex) { return 1 }
stock Load_Static_vehicles() { return 1 }
stock Update_Static_Vehicle(Id) { return 1 }
stock DestroyVehicleEx(vehicleid) { return 1 }
stock FlyPlane(id, Float: x, Float: y, Float: z, angle) { return 1 }
stock MakeDrop(id, Float: x, Float: y, Float: z) { return 1 }
stock RemoveDrop(id) { return 1 }
stock TragaperrasGO(playerid) { return 1 }
stock TragaperrasEND(playerid) { return 1 }
stock LoaderAnimation(playerid) { return 1 }
stock StartWin8(playerid) { return 1 }
stock LoaderAnimation2(playerid) { return 1 }
stock Win8GO(playerid) { return 1 }
stock tablet_UpdateTime(playerid) { return 1 }
stock tablet_UpdateTime2(playerid) { return 1 }
stock TaserGetUp(playerid) { return 1 }
stock ChargeUp(playerid) { return 1 }
stock nexttic(pplayer1,pplayer2) { return 1 }
stock HP_TIme_Line() { return 1 }
stock respawnunoccupiedvehicle() { return 1 }
stock VSASUpdate(playerid) { return 1 }
stock LoadxVehicles() { return 1 }
stock BidBitir(sender, alan) { return 1 }
stock LoadCarKeys(playerid) { return 1 }
stock WalkAnim(playerid) { return 1 }
stock OnPlayerGiveWantedLevel(playerid, const reason[]) { return 1 }
stock OnPlayerWantedLevelReset(playerid) { return 1 }
stock Player_Wanted_Data_Init(playerid) { return 1 }
stock UpdatePlayersWantedLevel() { return 1 }
stock OnPlayerJailed(playerid) { return 1 }
stock OnPlayerUnJailed(playerid) { return 1 }
stock RemoveLastWantedLevel(playerid) { return 1 }
stock OnAlexaCommand(playerid, const cmd[], const text[]) { return 1 }
stock bool:IsTimePassedForPlayer(playerid, const Function_Name[], seconds) { return 1 }
stock ResetChatSpamTimer(playerid) { return 1 }
stock GetPlayerSpeedHackKickStatus(playerid) { return 1 }
stock SetPlayerSpeedHackKickStatus(playerid, bool:status) { return 1 }
stock IsPlayerFalling(playerid)           { return 1 }
stock ActivateResetOriginalPos(playerid) { return 1 }
stock DeactivateResetOriginalPos(playerid) { return 1 }
stock ResetTeleportBit(playerid, time) { return 1 }
stock SetVehicleOriginalPos(vehicleid) { return 1 }
stock AttachTrailerToVehicleEx(trailerid, vehicleid) { return 1 }
stock DetachTrailerFromVehicleEx(vehicleid) { return 1 }
stock BS_ReadGiveOrTake(BitStream:bs, data[PR_OnGiveTake]) { return 1 }
stock BS_ReadEnterVehicle(BitStream:bs, data[PR_EnterVehicle]) { return 1 }
stock BS_ReadExitVehicle(BitStream:bs, data[PR_ExitVehicle]) { return 1 }
stock BS_ReadOnPlayerEditAttachedObj(BitStream:bs, data[PR_OnPlayerEditAttachedObject]) { return 1 }
stock BS_ReadSendDialogResponse(BitStream:bs, data[PR_SendDialogResponse]) { return 1 }
stock Float:GetVehicleAntiHealthEx(vehicleid) { return 1 }
stock Float:GetVehicleHealthEx(vehicleid) { return 1 }
stock SetVehicleHealthEx(vehicleid, Float:vhealth) { return 1 }
stock IsPlayerFreezed(playerid) { return 1 }
stock GivePlayerWeaponEx(playerid,weaponid,ammo) { return 1 }
stock ResetPlayerWeaponsEx(playerid) { return 1 }
stock IsPlayerHaveWeapon(playerid, weaponid) { return 1 }
stock SetPlayerHealthEx(playerid, Float:sHealth) { return 1 }
stock GetPlayerHealthEx(playerid) { return 1 }
stock ResetHealthBit(playerid) { return 1 }
stock SetPlayerArmourEx(playerid, Float:varmour) { return 1 }
stock GetPlayerArmourEx(playerid) { return 1 }
stock ResetArmourBit(playerid) { return 1 }
stock TeleportVehicleEx(vehicleid,Float:x,Float:y,Float:z,Float:angle, worldid = -1, interiorid = -1) { return 1 }
stock SetVehiclePosEx(vehicleid, Float:x, Float:y, Float:z) { return 1 }
stock SendClientMessageEx(playerid, color, const message[], bool:translate = true) { return 1 }
stock bool:GetPlayerSpectatingStatus(playerid) { return 1 }
stock COD_GetPlayerScore(playerid) { return 1 }
stock COD_SetPlayerScore(playerid, data) { return 1 }
stock COD_GetPlayerDeaths(playerid) { return 1 }
stock COD_SetPlayerDeaths(playerid, data) { return 1 }
stock COD_GetPlayerKills(playerid) { return 1 }
stock COD_SetPlayerKills(playerid, data) { return 1 }
stock bool:COD_IsTeamValid(teamid) { return 1 }
stock COD_GetTeamColor(teamid) { return 1 }
stock COD_GetTeamName(teamid) { return 1 }
stock COD_GetRankName(rankid) { return 1 }
stock COD_GetRankRequireScore(rankid) { return 1 }
stock COD_GetTotalPlayerInTeam(teamid) { return 1 }
stock COD_SetPlayerTeam(playerid, teamid) { return 1 }
stock COD_GetPlayerRank(playerid) { return 1 }
stock COD_SetPlayerRank(playerid, rankid) { return 1 }
stock COD_GetPlayerTeam(playerid) { return 1 }
stock COD_ShowZonesToPlayer(playerid) { return 1 }
stock COD_HideZonesToPlayer(playerid) { return 1 }
stock COD_PlayerInfoTDCreate(playerid) { return 1 }
stock COD_PlayerInfoTDDestroy(playerid) { return 1 }
stock COD_PlayerInfoTDShow(playerid) { return 1 }
stock COD_PlayerInfoTDHide(playerid) { return 1 }
stock bool:COD_HasPlayerFlag(playerid) { return 1 }
stock COD_GetPlayerFlag(playerid) { return 1 }
stock COD_SetPlayerFlag(playerid, data) { return 1 }
stock COD_CODZ_CreateFlag(zoneid) { return 1 }
stock COD_CODZ_GetZoneColor(zoneid) { return 1 }
stock COD_CODZ_SetZoneTeam(zoneid, teamid) { return 1 }
stock COD_CODZ_GetZoneTeam(zoneid) { return 1 }
stock COD_CODZ_GetZoneName(zoneid) { return 1 }
stock COD_CODZ_ZoneSpawn(playerid, const inputtext[]) { return 1 }
stock COD_CODZ_UpdateZonesForAll() { return 1 }
stock COD_CODZ_ShowZonesToPlayer(playerid) { return 1 }
stock COD_CODZ_HideZonesToPlayer(playerid) { return 1 }
stock CSS_Spawn_CT(playerid) { return 1 }
stock CSS_Spawn_TR(playerid) { return 1 }
stock CSS_SetPDeathstatus(playerid, bool:status) { return 1 }
stock CSS_GetPDeathstatus(playerid) { return 1 }
stock CSS_GetPCountCT() { return 1 }
stock CSS_GetPCountT() { return 1 }
stock CSS_IsTeamBalanced() { return 1 }
stock CSS_GetTPAliveCountCT() { return 1 }
stock CSS_GetTPAliveCountT() { return 1 }
stock CSS_TeamWinCT() { return 1 }
stock CSS_TeamWinT() { return 1 }
stock CSS_IsBombPlanted() { return 1 }
stock bool:GetPlayerEventVSpawnAuth(playerid) { return 1 }
stock SetPlayerEventVSpawnAuth(playerid, bool:status) { return 1 }
stock GetPlayerEventID(playerid) { return 1 }
stock IsPlayerInEvent(playerid) { return 1 }
stock SetPlayerEventID(playerid, event_id) { return 1 }
stock IsEventIdValid(event_id) { return 1 }
stock GetEventName(event_id) { return 1 }
stock GetEventStatus(event_id) { return 1 }
stock join_event(playerid, event_id) { return 1 }
stock leave_event(playerid) { return 1 }
stock events_cmd(playerid) { return 1 }
stock ev_cmd(playerid, const Vehicle[], VehicleID, ColorOne, ColorTwo) { return 1 }
stock SendEventMessage(playerid, eventid, const message[]) { return 1 }
stock SendEventMessageAll(eventid, const message[]) { return 1 }
stock PurgePlatform() { return 1 }
stock Platforms() { return 1 }
stock PUBG_GetRandomLocation(&Float:x, &Float:y, &Float:z) { return 1 }
stock PUBG_GetPlayerKills(playerid) { return 1 }
stock PUBG_SetPlayerKills(playerid, data) { return 1 }
stock PUBG_GetPlayerDeaths(playerid) { return 1 }
stock PUBG_SetPlayerDeaths(playerid, data) { return 1 }
stock PUBG_GetPlayerPlayed(playerid) { return 1 }
stock PUBG_SetPlayerPlayed(playerid, data) { return 1 }
stock PUBG_GetPlayerWins(playerid) { return 1 }
stock PUBG_SetPlayerWins(playerid, data) { return 1 }
stock PUBG_IsPlayerInPlane(playerid) { return 1 }
stock PUBG_SetPlayerInPlaneStatus(playerid, bool:data) { return 1 }
stock PUBG_IsPlayerInMatch(playerid) { return 1 }
stock PUBG_SetPlayerInMatchStatus(playerid, bool:data) { return 1 }
stock PUBG_GetTotalAlive() { return 1 }
stock PUBG_PlayerInfoTDCreate(playerid) { return 1 }
stock LobberySpawn(playerid) { return 1 }
stock PUBG_PlayerInfoTDDestroy(playerid) { return 1 }
stock PUBG_PlayerInfoTDShow(playerid) { return 1 }
stock PUBG_PlayerInfoTDHide(playerid) { return 1 }
stock PUBG_EventStart() { return 1 }
stock PUBG_EventEnd() { return 1 }
stock PUBG_WarnForMapArea() { return 1 }
stock PUBG_SpawnVehicles() { return 1 }
stock PUBG_SpawnPickups() { return 1 }
stock skyfall_cmd(playerid) { return 1 }
stock show_event_locations(playerid) { return 1 }
stock lumberjack_admin_panel(playerid) { return 1 }
stock GetPlayerPoint(playerid) { return 1 }
stock IsTaxiCar(vehicleid) { return 1 }
stock GetPriceTaxi(playerid) { return 1 }
stock GetPriceTaxiEx(playerid) { return 1 }
stock GetPlayerCarDriver(playerid) { return 1 }
stock GetPlayerCarPass(playerid) { return 1 }
stock lsfunfair_cmd(playerid) { return 1 }
stock actor_admin_panel(playerid) { return 1 }
stock actor_quick_action_cmd(playerid) { return 1 }
stock AMSS_Show(playerid) { return 1 }
stock AMSS_Hide(playerid) { return 1 }
stock GetPlayerUsingAnimationStatus(playerid) { return 1 }
stock SetPlayerUsingAnimationStatus(playerid, bool:status) { return 1 }
stock ANS_StopLoopingAnim(playerid) { return 1 }
stock ANS_PreloadAnimLib(playerid, const animlib[]) { return 1 }
stock IsInLowRider(playerid) { return 1 }
stock Anim_Commands(playerid) { return 1 }
stock weapsys_GetWeaponModel(weaponid) { return 1 }
stock Float:atan2VehicleZ(Float:Xb,Float:Yb,Float:Xe,Float:Ye) { return 1 }
stock PullVehicleIntoDirection(vehicleid, Float:x, Float:y, Float:z, Float:speed) { return 1 }
stock autodrive_cmd(playerid) { return 1 }
stock autodrivedspeed_cmd(playerid, Float:speed) { return 1 }
stock autodrivestop_cmd(playerid) { return 1 }
stock autodrive_menu(playerid) { return 1 }
stock GetPlayerRepairAuth(playerid) { return 1 }
stock SetPlayerRepairAuth(playerid, bool:status) { return 1 }
stock GetPlayerAutoRepairAuth(playerid) { return 1 }
stock SetPlayerAutoRepairAuth(playerid, bool:status) { return 1 }
stock bank_cmd(playerid) { return 1 }
stock atm_cmd(playerid) { return 1 }
stock bank_acp(playerid) { return 1 }
stock GetPlayerBetaTesterStatus(playerid) { return 1 }
stock SetPlayerBetaTesterStatus(playerid, bool:status) { return 1 }
stock SetPlayerBetaTester(playerid, bool:status) { return 1 }
stock static JHPreloadAnimLib(playerid) { return 1 }
stock TogglePlayerMovieMod(playerid,mod) { return 1 }
stock business_cmd(playerid) { return 1 }
stock CreateDynamicObjectCamp(Float:x,Float:y,Float:z,Float:a)  { return 1 }
stock DestroyDynamicObjectCamp() { return 1 }
stock putcamp_cmd(playerid) { return 1 }
stock removecamp_cmd(playerid) { return 1 }
stock info_casino(playerid) { return 1 }
stock td_casino(playerid) { return 1 }
stock casinoplay_cmd(playerid) { return 1 }
stock GetVehicleClan(vehicleid) { return 1 }
stock ShowClanLockerMenu(playerid, clanid) { return 1 }
stock Update_Player_Clan_Data(playerid) { return 1 }
stock Remove_Player_Clan(playerid, PId) { return 1 }
stock Clan_ShowZonesToPlayer(playerid) { return 1 }
stock Clan_HideZonesToPlayer(playerid) { return 1 }
stock GetPlayerClan(playerid) { return 1 }
stock GetPlayerClanRank(playerid) { return 1 }
stock SetPlayerClan(playerid, clanid, rankid) { return 1 }
stock GetClanColor(fId) { return 1 }
stock GetPlayerClanStatus(playerid) { return 1 }
stock SetPlayerClanStatus(playerid, bool:status) { return 1 }
stock GetPlayerClanRequestID(playerid) { return 1 }
stock SetPlayerClanRequestID(playerid, clanid) { return 1 }
stock GetPlayersReqForClanCount(clanid) { return 1 }
stock GetClanLeader(Id) { return 1 }
stock GetClanLeaderId(fID) { return 1 }
stock GetClanMemberCount(Id) { return 1 }
stock GetClanName(Id) { return 1 }
stock GetClanId(Id) { return 1 }
stock GetClanWage(Id) { return 1 }
stock GetClanRankName(fId, rId) { return 1 }
stock clans_cmd(playerid) { return 1 }
stock clanpu_cmd(playerid) { return 1 }
stock SetClanWeaponbySlotID(playerid) { return 1 }
stock SetClanRankNameByRankID(playerid) { return 1 }
stock SetClanSkinbySlotID(playerid) { return 1 }
stock Computer_ReturnPlayerZone(playerid) { return 1 }
stock Computer_IsPlayerInZone(playerid, zoneid)  { return 1 }
stock Computer_GetPlayerZone(playerid) { return 1 }
stock loadcomputers() { return 1 }
stock destroy( playerid, const params[] ) { return 1 }
stock reditc( playerid,const params[] ) { return 1 }
stock rgotoc( playerid,const params[] ) { return 1 }
stock getco( playerid, const params[] ) { return 1 }
stock buycom( playerid) { return 1 }
stock editcomplace(playerid) { return 1 }
stock sellcom(playerid) { return 1 }
stock rsellcom(playerid) { return 1 }
stock removecomputer(playerid) { return 1 }
stock gpscom(playerid) { return 1 }
stock lockunlock(playerid) { return 1 }
stock removecom(comid) { return 1 }
stock CreateComputer( playerid, Float:x, Float:y, Float:z, Float:a ) { return 1 }
stock StarComp(playerid) { return 1 }
stock createclabel(i) { return 1 }
stock refleshclabel(i) { return 1 }
stock shutdown(playerid) { return 1 }
stock Computer_UpdateTime(i) { return 1 }
stock showSuperBall(playerid)  { return 1 }
stock hideSuperBall(playerid)  { return 1 }
stock showmusic(playerid)  { return 1 }
stock hidemusic(playerid)  { return 1 }
stock showonglet(playerid)  { return 1 }
stock shownotif(playerid)  { return 1 }
stock hidenotif(playerid)  { return 1 }
stock showfbd(playerid)  { return 1 }
stock showerd(playerid) { return 1 }
stock hideerd(playerid) { return 1 }
stock hidefbd(playerid)  { return 1 }
stock hideonglet(playerid)  { return 1 }
stock showlang(playerid)  { return 1 }
stock hidelang(playerid)  { return 1 }
stock showmenu(playerid)  { return 1 }
stock Computer_showzmenu(playerid) { return 1 }
stock showpgzmenu(playerid)  { return 1 }
stock hidepgzmenu(playerid)  { return 1 }
stock hidezmenu(playerid)  { return 1 }
stock hidemenu(playerid)  { return 1 }
stock showdatafonddec(playerid)  { return 1 }
stock hidedatafonddec(playerid)  { return 1 }
stock showfonddec(playerid)  { return 1 }
stock hidefonddec(playerid)  { return 1 }
stock showbarre(playerid)  { return 1 }
stock hidebarre(playerid)  { return 1 }
stock showwinico(playerid)  { return 1 }
stock hidewinico(playerid)  { return 1 }
stock showmap(playerid)  { return 1 }
stock showZombies(playerid)  { return 1 }
stock hideZombies(playerid)  { return 1 }
stock hidemap(playerid)  { return 1 }
stock spmusic(playerid)  { return 1 }
stock setPlay(playerid)  { return 1 }
stock SetStop(playerid)  { return 1 }
stock musicplace(playerid) { return 1 }
stock editmpos(playerid,pos) { return 1 }
stock showpbarre(playerid) { return 1 }
stock showpball(playerid) { return 1 }
stock hidepbarre(playerid) { return 1 }
stock destroybarre(playerid) { return 1 }
stock refleshballbar(playerid) { return 1 }
stock createpb(playerid)  { return 1 }
stock movepbarre(playerid,Float:X,Float:Y)  { return 1 }
stock ShowAllPlayer(playerid) { return 1 }
stock ShowMsgPlayer(playerid) { return 1 }
stock SM(playerid,const msg[])  { return 1 }
stock rconlist(playerid)  { return 1 }
stock getid(const params[])  { return 1 }
stock barrelang(playerid, langue) { return 1 }
stock tarjm(playerid, langue) { return 1 }
stock onlineerror(playerid) { return 1 }
stock UpdateTextDrawKiller(playerid) { return 1 }
stock crusher_IsVehicleWanted(vehicleid) { return 1 }
stock ObtainScriptDebugID(const FunctionName[]) { return 1 }
stock RemoveScriptDebugID(id) { return 1 }
stock GetTotalScriptDebugID() { return 1 }
stock GetTotalFreeScriptDebugID() { return 1 }
stock GetTotalObtainedScriptDebugID() { return 1 }
stock bool:IsValidScriptDebugID(id) { return 1 }
stock bool:IsValidDebugID(debug_id) { return 1 }
stock bool:GetPlayerDebugStatus(playerid, debug_id) { return 1 }
stock SetPlayerDebugStatus(playerid, debug_id, bool:status) { return 1 }
stock SendDebugMessage(debug_id, const message[]) { return 1 }
stock cmd_debug_menu(playerid) { return 1 }
stock SendDCM(const message[]) { return 1 }
stock Discord_ALog(const message[]) { return 1 }
stock Discord_Log(const message[]) { return 1 }
stock Discord_WIIS(const message[]) { return 1 }
stock Discord_RPLOG(const message[]) { return 1 }
stock IsPlayerDJ(playerid) { return 1 }
stock SetPlayerDJStatus(playerid, bool:status) { return 1 }
stock SetPlayerAsDJ(playerid, bool:status) { return 1 }
stock GetPlayerTTSstatus(playerid) { return 1 }
stock SetPlayerTTSstatus(playerid, bool:status) { return 1 }
stock GetPlayerMP3status(playerid) { return 1 }
stock SetPlayerMP3status(playerid, bool:status) { return 1 }
stock GetPlayListSongName(SongID) { return 1 }
stock GetPlayListSongCreator(SongID) { return 1 }
stock GetPlayListName(PlayListID) { return 1 }
stock GetPlayListCreatorName(PlayListID) { return 1 }
stock View_PlayList(playerid, paged = 0) { return 1 }
stock View_PlayList_Songs(playerid, PlayListID, paged = 0) { return 1 }
stock Open_DJ_Panel(playerid) { return 1 }
stock ProxDetector(Float: radius = 30.0, playerid, const text[], col1 = 0xFFFFFFFF, col2 = 0xCCCCCCFF, col3 = 0x999999FF, col4 = 0x666666FF, col5 = 0x333333FF) { return 1 }
stock GDS_RemovePlayerWeapon(playerid, weaponid) { return 1 }
stock dropgunsystem_admin_panel(playerid) { return 1 }
stock usedrugs_cmd(playerid, amount) { return 1 }
stock givedrugs_cmd(playerid, id, amount) { return 1 }
stock selldrugs_cmd(playerid, id, price) { return 1 }
stock drug_dealer_cmd(playerid) { return 1 }
stock drug_plant_cmd(playerid, const params[]) { return 1 }
stock drug_acp(playerid) { return 1 }
stock iorp_drug_menu(playerid) { return 1 }
stock Acp_Init(playerid, page = 0) { return 1 }
stock Acp_AddCommand(playerid, const command[], bool:top = false) { return 1 }
stock Ascp_Init(playerid, page = 0) { return 1 }
stock Ascp_AddCommand(playerid, const command[], bool:top = false) { return 1 }
stock Credit_GetFreeID(page, const Script[], const Author[]) { return 1 }
stock Credit_RemoveID(id) { return 1 }
stock Credit_TotalID() { return 1 }
stock Credit_GetTotalFreeID() { return 1 }
stock Credit_GetTotalUsedID() { return 1 }
stock bool:Credit_IsValidID(id) { return 1 }
stock Credits_Init(playerid, page = 0) { return 1 }
stock Database_Add_Bool(const column[]) { return 1 }
stock Database_Add_Int(const column[]) { return 1 }
stock Database_Add_Float(const column[]) { return 1 }
stock Database_Add_String(const column[], size = 50) { return 1 }
stock bool:Database_Get_Bool(playerid, const column[]) { return 1 }
stock Database_Get_Int(playerid, const column[]) { return 1 }
stock Float:Database_Get_Float(playerid, const column[]) { return 1 }
stock Database_Get_String(playerid, const column[]) { return 1 }
stock Database_Update_Bool(playerid, const column[], bool:data) { return 1 }
stock Database_Update_Int(playerid, const column[], data) { return 1 }
stock Database_Update_Float(playerid, const column[], Float:data) { return 1 }
stock Database_Update_String(playerid, const column[], const data[]) { return 1 }
stock Dialog_GetFreeID() { return 1 }
stock Dialog_RemoveID(id) { return 1 }
stock Dialog_TotalID() { return 1 }
stock Dialog_GetTotalFreeID() { return 1 }
stock Dialog_GetTotalUsedID() { return 1 }
stock bool:Dialog_IsValidID(id) { return 1 }
stock ShowPlayerDialogEx(playerid, dialogid, offsetid, style, const caption[], const info[], const button1[], const button2[], extraid = -1, const payload[] = \"null\") { return 1 }
stock Doc_GetFreeID() { return 1 }
stock Doc_RemoveID(id) { return 1 }
stock Doc_TotalID() { return 1 }
stock Doc_GetTotalFreeID() { return 1 }
stock Doc_GetTotalUsedID() { return 1 }
stock bool:Doc_IsValidID(id) { return 1 }
stock Hcp_AddDoc(page, docid, const DocTitle[], const DocData[]) { return 1 }
stock Hcp_ViewDoc(playerid, docid) { return 1 }
stock Hcp_Init(playerid, page = 0) { return 1 }
stock reload_dynamicobj() { return 1 }
stock dynamicobject_admin_panel(playerid) { return 1 }
stock Pcp_Init(playerid, page = 0) { return 1 }
stock Pcp_AddCommand(playerid, const command[], bool:top = false) { return 1 }
stock Scp_Init(playerid, page = 0) { return 1 }
stock Scp_AddCommand(playerid, const command[], bool:top = false) { return 1 }
stock Ucp_Init(playerid, page = 0) { return 1 }
stock Ucp_AddCommand(playerid, const command[], bool:top = false) { return 1 }
stock GetPlayerUCPStatus(playerid) { return 1 }
stock SetPlayerUCPStatus(playerid, bool:status) { return 1 }
stock User_Panel(playerid) { return 1 }
stock User_PanelMenu(playerid) { return 1 }
stock Entrance_Update(entranceID) { return 1 }
stock entrance_admin_panel(playerid) { return 1 }
stock sapdobject_cmd(playerid) { return 1 }
stock GetVehicleFaction(vehicleid) { return 1 }
stock ShowFactionLockerMenu(playerid, factionid) { return 1 }
stock Update_Player_Faction_Data(playerid) { return 1 }
stock Remove_Player_Faction(playerid, PId) { return 1 }
stock Faction_ShowZonesToPlayer(playerid) { return 1 }
stock Faction_HideZonesToPlayer(playerid) { return 1 }
stock GetPlayerFaction(playerid) { return 1 }
stock GetPlayerFactionRank(playerid) { return 1 }
stock SetPlayerFaction(playerid, factionid, rankid) { return 1 }
stock GetFactionColor(fId) { return 1 }
stock GetPlayerFactionStatus(playerid) { return 1 }
stock SetPlayerFactionStatus(playerid, bool:status) { return 1 }
stock GetPlayerFactionRequestID(playerid) { return 1 }
stock SetPlayerFactionRequestID(playerid, factionid) { return 1 }
stock GetPlayersReqForFactionCount(factionid) { return 1 }
stock GetFactionLeader(Id) { return 1 }
stock GetFactionLeaderId(fID) { return 1 }
stock GetFactionMemberCount(Id) { return 1 }
stock GetFactionName(Id) { return 1 }
stock GetFactionId(Id) { return 1 }
stock GetFactionWage(Id) { return 1 }
stock GetFactionRankName(fId, rId) { return 1 }
stock factions_cmd(playerid) { return 1 }
stock factionpu_cmd(playerid) { return 1 }
stock SetFactionWeaponbySlotID(playerid) { return 1 }
stock SetFactionRankNameByRankID(playerid) { return 1 }
stock SetFactionSkinbySlotID(playerid) { return 1 }
stock bool:IsValidRelation(relationid) { return 1 }
stock CMD_FamilyDialog(playerid) { return 1 }
stock GetMoveDirectionFromKeys(ud, lr) { return 1 }
stock MoveCamera(playerid) { return 1 }
stock SetFlyModePos(playerid, Float:x, Float:y, Float:z) { return 1 }
stock GetFlyModePos(playerid, &Float:x, &Float:y, &Float:z) { return 1 }
stock GetNextCameraPosition(move_mode, const Float:CP[3], const Float:FV[3], &Float:X, &Float:Y, &Float:Z) { return 1 }
stock CancelFlyMode(playerid) { return 1 }
stock StartFlyMode(playerid) { return 1 }
stock GetXYInFrontOfActor(actorid, &Float:x, &Float:y, Float:distance) { return 1 }
stock food_system_admin_panel(playerid) { return 1 }
stock save_food_act_cmd(playerid) { return 1 }
stock IsPlayerNearFood(playerid) { return 1 }
stock order_food_cmd(playerid) { return 1 }
stock FootballMessage(color, const string[]) { return 1 }
stock IsObjectInTheArea(objectid, Float:minx, Float:miny, Float:maxx, Float:maxy) { return 1 }
stock LoopingAnim(playerid, const animlib[], const animname[], Float:vSpeed, looping, lockx, locky, lockz, lp) { return 1 }
stock StopLoopingAnim(playerid) { return 1 }
stock cmd_football(playerid) { return 1 }
stock GetPlayerFuelAuth(playerid) { return 1 }
stock SetPlayerFuelAuth(playerid, bool:status) { return 1 }
stock GetPlayerAutoFuelAuth(playerid) { return 1 }
stock SetPlayerAutoFuelAuth(playerid, bool:status) { return 1 }
stock refuel_cmd(playerid) { return 1 }
stock SetVehicleFuelEx(vehicleid, fuel) { return 1 }
stock Float:GetVehicleFuelEx(vehicleid) { return 1 }
stock Fuel_System_ACP(playerid) { return 1 }
stock gate_cmd(playerid) { return 1 }
stock auto_gate_admin_panel(playerid) { return 1 }
stock gps_cmd(playerid) { return 1 }
stock hit_OnPlayerDeath(playerid, killerid) { return 1 }
stock LoadHouseKeys(playerid) { return 1 }
stock GetZoneName(Float: x, Float: y, Float: z) { return 1 }
stock GetCityName(Float: x, Float: y, Float: z) { return 1 }
stock RemovePlayerWeapon(playerid, weapon) { return 1 }
stock GetXYInFrontOfPlayer(playerid, &Float:x, &Float:y, Float:distance) { return 1 }
stock GetXYInBackOfPlayer(playerid, &Float:x, &Float:y, Float:distance) { return 1 }
stock SendToHouse(playerid, id) { return 1 }
stock ShowHouseMenu(playerid) { return 1 }
stock ResetHouse(id) { return 1 }
stock SaveHouse(id) { return 1 }
stock UpdateHouseLabel(id) { return 1 }
stock OwnedHouses(playerid) { return 1 }
stock house_cmd(playerid) { return 1 }
stock SetPlayerInvicStatus(playerid, bool:status) { return 1 }
stock GetPlayerInvicStatus(playerid) { return 1 }
stock IsPlayerActivedInvisibleMode(playerid) { return 1 }
stock SetPlayerInvisibleMode(playerid, bool:status) { return 1 }
stock makeplayerinvisible_cmd(adminid, playerid) { return 1 }
stock dltest_cmd(playerid) { return 1 }
stock IsPlayerInFlyableVehicle(playerid) { return 1 }
stock ShowLifeGuide(playerid, intro_id = 0) { return 1 }
stock GetPlayerID(playerid) { return 1 }
stock SetPlayerID(playerid, data) { return 1 }
stock GetPlayerUsername(playerid) { return 1 }
stock SetPlayerUsername(playerid, const name[MAX_PLAYER_NAME]) { return 1 }
stock GetPlayerPassword(playerid) { return 1 }
stock SetPlayerPassword(playerid, const data[65]) { return 1 }
stock GetPlayerSalt(playerid) { return 1 }
stock SetPlayerSalt(playerid, const data[11]) { return 1 }
stock GetPlayerKills(playerid) { return 1 }
stock SetPlayerKills(playerid, data) { return 1 }
stock GetPlayerDeaths(playerid) { return 1 }
stock SetPlayerDeaths(playerid, data) { return 1 }
stock GetPlayerPlayedTime(playerid) { return 1 }
stock SetPlayerPlayedTime(playerid, data) { return 1 }
stock GetPlayerPauseTime(playerid) { return 1 }
stock SetPlayerPauseTime(playerid, data) { return 1 }
stock Float:GetPlayerLastPosX(playerid) { return 1 }
stock SetPlayerLastPosX(playerid, Float:data) { return 1 }
stock Float:GetPlayerLastPosY(playerid) { return 1 }
stock SetPlayerLastPosY(playerid, Float:data) { return 1 }
stock Float:GetPlayerLastPosZ(playerid) { return 1 }
stock SetPlayerLastPosZ(playerid, Float:data) { return 1 }
stock Float:GetPlayerLastPosAngle(playerid) { return 1 }
stock SetPlayerLastPosAngle(playerid, Float:data) { return 1 }
stock GetPlayerPasswordFails(playerid) { return 1 }
stock SetPlayerPasswordFails(playerid, data) { return 1 }
stock Cache:GetPlayerPlayer_Cache(playerid) { return 1 }
stock SetPlayerPlayer_Cache(playerid, Cache:data) { return 1 }
stock IsPlayerLoggedIn(playerid) { return 1 }
stock GetPlayerLoginStatus(playerid) { return 1 }
stock SetPlayerLoginStatus(playerid, bool:data) { return 1 }
stock GetPlayerSpawnStatus(playerid) { return 1 }
stock SetPlayerSpawnStatus(playerid, bool:data) { return 1 }
stock GetPlayerDeathStatus(playerid) { return 1 }
stock SetPlayerDeathStatus(playerid, bool:data) { return 1 }
stock GetPlayerUpdateTimerID(playerid) { return 1 }
stock SetPlayerUpdateTimerID(playerid, data) { return 1 }
stock GetPlayerScoreTimerID(playerid) { return 1 }
stock SetPlayerScoreTimerID(playerid, data) { return 1 }
stock bool:GetPlayerFirstSpawnStatus(playerid) { return 1 }
stock SetPlayerFirstSpawnStatus(playerid, bool:status) { return 1 }
stock GetPlayerCountry(playerid) { return 1 }
stock GetPlayerRegion(playerid) { return 1 }
stock GetPlayerCity(playerid) { return 1 }
stock GetPlayerISP(playerid) { return 1 }
stock GetPlayerTimezone(playerid) { return 1 }
stock GetPlayerZipcode(playerid) { return 1 }
stock changepassword_cmd(playerid, const newpass[]) { return 1 }
stock logout_cmd(playerid) { return 1 }
stock autospawn_cmd(playerid) { return 1 }
stock MasterAdmin_cmd(playerid) { return 1 }
stock GetPlayerMutedStatus(playerid) { return 1 }
stock SetPlayerMutedStatus(playerid, bool:status) { return 1 }
stock mute_cmd(playerid, pID, bool:status) { return 1 }
stock change_skin(playerid) { return 1 }
stock cmd_lottery(playerid)                                          { return 1 }
stock Lottery_GetFreeSlot(playerid)                                                           { return 1 }
stock FindSlot(playerid, lotter_number)                                                      { return 1 }
stock CreatePlayerTextDraws(playerid)                                                 { return 1 }
stock CreateGlobalTextDraws() { return 1 }
stock HideTDForPlayer(playerid) { return 1 }
stock Elevator_Initialize() { return 1 }
stock Elevator_Destroy() { return 1 }
stock Elevator_OpenDoors() { return 1 }
stock Elevator_CloseDoors() { return 1 }
stock Floor_OpenDoors(floorid) { return 1 }
stock Floor_CloseDoors(floorid) { return 1 }
stock Elevator_MoveToFloor(floorid) { return 1 }
stock RemoveFirstQueueFloor() { return 1 }
stock AddFloorToQueue(floorid) { return 1 }
stock ResetElevatorQueue() { return 1 }
stock IsFloorInQueue(floorid) { return 1 }
stock ReadNextFloorInQueue() { return 1 }
stock DidPlayerRequestElevator(playerid) { return 1 }
stock ShowElevatorDialog(playerid) { return 1 }
stock CallElevator(playerid, floorid) { return 1 }
stock Float:GetElevatorZCoordForFloor(floorid) { return 1 }
stock Float:GetDoorsZCoordForFloor(floorid) { return 1 }
stock mapicon_admin_panel(playerid) { return 1 }
stock mill_mount_lift_cmd(playerid) { return 1 }
stock cmd_minigames(playerid) { return 1 }
stock MLM_GetMessages(const message[], const array[][], lines = sizeof(array), line_size = sizeof(array[])) { return 1 }
stock MLM_ShiftStartPos(const message[], pos, bool:is_packed, size = sizeof(message)) { return 1 }
stock MLM_ShiftEndPos(const message[], pos, bool:is_packed) { return 1 }
stock MLM_MakeString(dest[], const size = sizeof(dest), const src[], const bool:is_packed, &last_color, const length, const line, &spos, &epos, const prefix[], const prefix_length, const postfix[], const postfix_length) { return 1 }
stock nametagson_cmd(playerid) { return 1 }
stock nametagsoff_cmd(playerid) { return 1 }
stock nametags_system_panel(playerid) { return 1 }
stock Start_Train_Engine(vehicleid) { return 1 }
stock bool:IsPlayerPaused(playerid)  { return 1 }
stock GetPlayerPausedTime(playerid)  { return 1 }
stock NumberUsed(playerid) { return 1 }
stock GetPlayerPhoneNumber(playerid) { return 1 }
stock GalaxyS3Phone(playerid,current) { return 1 }
stock GalaxyS3PhoneStarting(playerid,current) { return 1 }
stock GetMonth(Month) { return 1 }
stock GetYearFormat00(Year) { return 1 }
stock ActualizarWEATHER() { return 1 }
stock ReturnPlayerZone(playerid) { return 1 }
stock phonesys_IsPlayerInZone(playerid, zoneid)  { return 1 }
stock GetPlayerZone(playerid) { return 1 }
stock sel_phone_cmd(playerid) { return 1 }
stock mynumber_phone_cmd(playerid) { return 1 }
stock phone_cmd(playerid) { return 1 }
stock answer_phone_cmd(playerid) { return 1 }
stock hangup_phone_cmd(playerid) { return 1 }
stock GetPatchStatus_Hud(playerid) { return 1 }
stock SetPatchStatus_Hud(playerid, bool:status) { return 1 }
stock GetPatchStatus_LSP(playerid) { return 1 }
stock SetPatchStatus_LSP(playerid, bool:status) { return 1 }
stock player_patch_cmd(playerid) { return 1 }
stock GetPlayerPMstatus(playerid) { return 1 }
stock SetPlayerPMstatus(playerid, bool:status) { return 1 }
stock GetPlayerLastPMID(playerid) { return 1 }
stock SetPlayerLastPMID(playerid, recieverid) { return 1 }
stock nopm_cmd(playerid) { return 1 }
stock pm_cmd(playerid, receiverid, const message[]) { return 1 }
stock reply_cmd(playerid, const message[]) { return 1 }
stock bool:IsValidAccount(const Account[]) { return 1 }
stock bool:IsAccountDisabled(const Account[]) { return 1 }
stock GetAccountAdminLevel(const Account[]) { return 1 }
stock GetAccountVIPLevel(const Account[]) { return 1 }
stock bool:GetAccountMasterAdminStatus(const Account[]) { return 1 }
stock cmd_profile_action(playerid, const Account[]) { return 1 }
stock quick_action_cmd(playerid) { return 1 }
stock race_OnPlayerUpdateEx(playerid) { return 1 }
stock getFirstEmptyCPSlot(race) { return 1 }
stock updateContestantList(race) { return 1 }
stock createRace(playerid, slot) { return 1 }
stock spawnInRace(playerid, race, spot = -1) { return 1 }
stock calculateNextRacePart(slot, curCPSlot, MapNode:lastNode, bool: firstcalculation = false) { return 1 }
stock irs_race_system_show(playerid, const cmdtext[]) { return 1 }
stock iorp_race_menu(playerid) { return 1 }
stock hintmessages_cmd(playerid) { return 1 }
stock register_hacking_system_panel(playerid) { return 1 }
stock GetPlayerRPMode(playerid) { return 1 }
stock safe_hacking_system_panel(playerid) { return 1 }
stock CreateArt3(const ArtObject[][], type, Float:SA_PosX, Float:SA_PosY, Float:SA_PosZ, Float:SA_RotX, Float:SA_RotY, Float:SA_RotZ, Float:DrawDistance = 300.0) { return 1 }
stock CreateDynamicArt3(const ArtObject[][], type, Float:SA_PosX, Float:SA_PosY, Float:SA_PosZ, Float:SA_RotX, Float:SA_RotY, Float:SA_RotZ, worldid = -1, interiorid = -1, playerid = -1, Float:StreamDistance = 200.0, Float:DrawDistance = 300.0 ) { return 1 }
stock CreateArtInternal3(const ArtObject[][], type, dynamic, Float:SA_PosX, Float:SA_PosY, Float:SA_PosZ, Float:SA_RotX, Float:SA_RotY, Float:SA_RotZ, worldid = -1, interiorid = -1, playerid = -1, Float:StreamDistance = 200.0, Float:DrawDistance = 300.0 ) { return 1 }
stock DestroyArt3Internal(ArtID) { return 1 }
stock DestroyArt3(ArtID) { return 1 }
stock DestroyDynamicArt3(ArtID) { return 1 }
stock GetScoreTimerStatus(playerid) { return 1 }
stock ScoreTimerDisable(playerid) { return 1 }
stock ScoreTimerEnable(playerid) { return 1 }
stock SS_Update_Shop_Data(id) { return 1 }
stock SS_Drop_Shop_Data(id) { return 1 }
stock shop_system_acp(playerid) { return 1 }
stock SS_Open_Update_Menu(playerid, id) { return 1 }
stock SS_OpenShop(playerid, id) { return 1 }
stock LoadPlayerClothes(playerid) { return 1 }
stock GetFreeSlot(playerid) { return 1 }
stock OnBuyClothes(playerid, index, cmodel, bone, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ) { return 1 }
stock ClothesEditDialog(playerid, index) { return 1 }
stock ShowClothesDialog(playerid, fromslot) { return 1 }
stock SavePlayerClothes(playerid) { return 1 }
stock UpdatePlayerToy(playerid, slot) { return 1 }
stock EditClothing(playerid, index) { return 1 }
stock ReplaceClothing(playerid, index) { return 1 }
stock PlaceClothing(playerid, index) { return 1 }
stock DisplayClothing(playerid) { return 1 }
stock ShowDialog(playerid, dialogid, style, const caption[], const info[], const button1[], const button2[], status) { return 1 }
stock GetModelName(cmodel) { return 1 }
stock RemoveFromSlot(playerid, slot) { return 1 }
stock ResetClothes(playerid) { return 1 }
stock GetName(playerid) { return 1 }
stock SyntaxMSG(playerid, const message[]) { return 1 }
stock GetBoneName(boneid) { return 1 }
stock bool:ETShop_GetPhoneStatus(playerid) { return 1 }
stock ETShop_SetPhoneStatus(playerid, bool:data) { return 1 }
stock bool:ETShop_GetTabletStatus(playerid) { return 1 }
stock ETShop_SetTabletStatus(playerid, bool:data) { return 1 }
stock etshop_cmd(playerid) { return 1 }
stock blow_pyrotechnic_cmd(playerid) { return 1 }
stock OpenRepairMenu(playerid) { return 1 }
stock OpenModMenu(playerid) { return 1 }
stock iorp_dealership_shop_menu(playerid) { return 1 }
stock weapons_shop_menu(playerid)  { return 1 }
stock start_snake_cmd(playerid) { return 1 }
stock start_spectate(playerid, targetid) { return 1 }
stock stop_spectate(playerid) { return 1 }
stock SprayTag_Create(playerid, iIndex) { return 1 }
stock SprayTag_Spawn(playerid, iIndex) { return 1 }
stock SprayTag_Save(playerid, iIndex) { return 1 }
stock SprayTag_Clear(playerid, iIndex) { return 1 }
stock HexToInt(const string[]) { return 1 }
stock cmd_tags(playerid) { return 1 }
stock GetPlayerStaticVehicleID(playerid) { return 1 }
stock GetStaticVehicleID(vehicleid) { return 1 }
stock GetStaticVehicleFactionID(Id) { return 1 }
stock staticvehicle_admin_panel(playerid) { return 1 }
stock drop_cmd(playerid) { return 1 }
stock ShowTabletForPlayer(playerid) { return 1 }
stock HideTabletForPlayer(playerid) { return 1 }
stock ShowUserLogTablet(playerid) { return 1 }
stock HideUserLogTablet(playerid) { return 1 }
stock ShowStartMenuTablet(playerid) { return 1 }
stock HideStartMenuTablet(playerid) { return 1 }
stock ShowPagForItems(playerid) { return 1 }
stock HidePagForItems(playerid) { return 1 }
stock ShowEscritorioForPlayer(playerid) { return 1 }
stock HideEscritorioForPlayer(playerid) { return 1 }
stock ShowPhotosForPlayer(playerid) { return 1 }
stock HidePhotosForPlayer(playerid) { return 1 }
stock ShowClockForPlayer(playerid) { return 1 }
stock HideClockForPlayer(playerid) { return 1 }
stock ShowTabletMusicPlayer(playerid) { return 1 }
stock HideTabletMusicPlayer(playerid) { return 1 }
stock CameraMode(playerid,type) { return 1 }
stock ShowTabletMap(playerid) { return 1 }
stock HideTabletMap(playerid) { return 1 }
stock ShowGames(playerid) { return 1 }
stock HideGames(playerid) { return 1 }
stock ShowSlotMachine(playerid) { return 1 }
stock HideSlotMachine(playerid) { return 1 }
stock ShowTabletWeather(playerid) { return 1 }
stock HideTabletWeather(playerid) { return 1 }
stock ShowPage(playerid,page) { return 1 }
stock IsNumeric(const string[]) { return 1 }
stock tablet_cmd(playerid) { return 1 }
stock taser_cmd(playerid) { return 1 }
stock GetPlayerTPAuth(playerid) { return 1 }
stock SetPlayerTPAuth(playerid, bool:status) { return 1 }
stock accept_ttt_cmd(playerid) { return 1 }
stock starttictac(pplayer1,pplayer2) { return 1 }
stock tickbox(playerid,boxid) { return 1 }
stock CreateTicTD(playerid) { return 1 }
stock cmd_tictacktoe(playerid) { return 1 }
stock CreateHPTL() { return 1 }
stock HideHPTL(playerid) { return 1 }
stock ShowHPTL(playerid) { return 1 }
stock DestroyHPTL() { return 1 }
stock uTranslate(const string[], const lang[]) { return 1 }
stock eTranslate(const string[], const lang[]) { return 1 }
stock GetPlayerNativeLang(playerid) { return 1 }
stock SetPlayerNativeLang(playerid, const lang[]) { return 1 }
stock EnableIncomingTranslation(playerid, const lang[]) { return 1 }
stock DisableIncomingTranslation(playerid) { return 1 }
stock bool:GetPlayerInTranslationStatus(playerid) { return 1 }
stock GetPlayerInTranslationLang(playerid) { return 1 }
stock EnableOutgoingTranslation(playerid, const lang[]) { return 1 }
stock DisableOutgoingTranslation(playerid) { return 1 }
stock bool:GetPlayerOutTranslationStatus(playerid) { return 1 }
stock bool:GetPlayerTranslationOMStatus(playerid) { return 1 }
stock SetPlayerTranslationOMStatus(playerid, bool:status) { return 1 }
stock GetPlayerOutTranslationLang(playerid) { return 1 }
stock Lang_Data() { return 1 }
stock ult_panel(playerid) { return 1 }
stock CreateVSAS(playerid) { return 1 }
stock HideVSAS(playerid) { return 1 }
stock ShowVSAS(playerid) { return 1 }
stock DestroyVSAS(playerid) { return 1 }
stock vm_cmd(playerid) { return 1 }
stock vunlock_cmd(playerid) { return 1 }
stock switch_engine(playerid) { return 1 }
stock switch_alarm(playerid) { return 1 }
stock switch_doors(playerid) { return 1 }
stock switch_bonnet(playerid) { return 1 }
stock switch_boot(playerid) { return 1 }
stock switch_windows(playerid) { return 1 }
stock switch_lights(playerid) { return 1 }
stock SaveVehicleMod(xid) { return 1 }
stock LoadVehicleMod(xid) { return 1 }
stock LoadxVehicleKeys(playerid) { return 1 }
stock GetVehiclexID(vehicleid) { return 1 }
stock GetVehiclexIDFromPlate(const plate[]) { return 1 }
stock CreatePlate() { return 1 }
stock IsVehicleFlipped(vehicleid) { return 1 }
stock GetPlayerxVehicleCount(playerid) { return 1 }
stock GetPlayerInGarageVehicleCount(playerid) { return 1 }
stock GetVehicleModelIDFromName(const vname[]) { return 1 }
stock GetPlayerIDFromName(const name[]) { return 1 }
stock xStrcmp(const str1[], const str2[]) { return 1 }
stock split(const src[], dest[][], const delimiter) { return 1 }
stock Isim(playerid) { return 1 }
stock park_cmd(playerid) { return 1 }
stock vmenu_cmd(playerid) { return 1 }
stock dealership_admin_panel(playerid) { return 1 }
stock SetPlayerWalkingStyle(playerid, style) { return 1 }
stock GetPlayerWalkingStyle(playerid) { return 1 }
stock player_styles_cmd(playerid) { return 1 }
stock IsPlayerInJail(playerid) { return 1 }
stock SetPlayerJailStatus(playerid, bool:status) { return 1 }
stock UpdatePlayerJailData(playerid) { return 1 }
stock GivePlayerWantedLevel(playerid, const reason[]) { return 1 }
stock ResetPlayerWantedLevel(playerid) { return 1 }
stock GetPlayerTotalWantedLevel(playerid) { return 1 }
stock GetPlayerWantedLevelStar(playerid) { return 1 }
stock GetTotalWantedPlayers() { return 1 }
stock AdminJail(playerid, stars, const Reason[]) { return 1 }
stock SendPlayerInJail(playerid) { return 1 }
stock SendPlayerToLSPD(playerid) { return 1 }
stock wantedlist_cmd(playerid) { return 1 }
stock View_Wanted_Database(playerid, targetid, total_crime = 0, paged = 0) { return 1 }
stock JailPlayer(playerid) { return 1 }
stock UnJailPlayer(playerid) { return 1 }
stock GetPlayerACPStatus(playerid) { return 1 }
stock SetPlayerACPStatus(playerid, bool:status) { return 1 }
stock admin_command_menu(playerid) { return 1 }
stock admin_command_panel(playerid) { return 1 }
stock acp_player_manage(playerid, extraid) { return 1 }
stock clean_screen(playerid) { return 1 }
stock fix_screen(playerid) { return 1 }
stock IntToHex(n) { return 1 }
stock IsIpConnected(playerid) { return 1 }
stock IsIpOfNoneAdminConnected(playerid) { return 1 }
stock GetPlayerNameEx(playerid) { return 1 }
stock convertNumber(value) { return 1 }
stock GetVehicleSpeedEx(playerid) { return 1 }
stock bool:IsArrayContainNumber(const array[], number, size = sizeof array) { return 1 }
stock RandomNumberFromArray(const array[], size = sizeof array) { return 1 }
stock GetWeaponNameEx(weaponid) { return 1 }
stock GetNextWordFromString(const string[], const word[], pos = 0) { return 1 }
stock GetOnlinePlayerCount() { return 1 }
stock bool:IsPlayerInArea(playerid, Float:MinX, Float:MinY, Float:MaxX, Float:MaxY) { return 1 }
stock bool:IsXYInArea(Float:x, Float:y, Float:MinX, Float:MinY, Float:MaxX, Float:MaxY) { return 1 }
stock Float:frandom(Float:min, Float:max, dp = 2) { return 1 }
stock GetRandomPosAtLocation(Float:distance, Float:X, Float:Y, Float:Z, &Float:x, &Float:y, &Float:z) { return 1 }
stock GetRandomPosInArea(Float:MinX, Float:MinY, Float:MaxX, Float:MaxY, &Float:x, &Float:y) { return 1 }
stock Float:GetAngleBetweenPoints(Float:x, Float:y, Float:X, Float:Y) { return 1 }
