// rea decompile_all
// name: FUN_00716f48
// address: 0x716f48
// body: available
// range: 0x716f48-0x71795d inclusive
// range: 0x717996-0x717a2d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x716f76 (push 0x717a2e followed by fs-segment stack chaining); handler 0x717a2e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00716f48(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar1 = PTR_DAT_00782280;
  local_20 = &stack0xfffffffc;
  local_10 = 0x15;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_00717a2e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x716f83;
  cVar4 = FUN_00716a84(L"\\Software\\Game Maker\\Version 8.2\\Preferences");
  if (cVar4 == '\0') {
    local_2c = 0x716fa7;
    FUN_00407eb8(&DAT_0079a9a8,L"\\Software\\Game Maker\\Version 8\\Preferences");
  }
  else {
    local_2c = 0x716f96;
    FUN_00407eb8(&DAT_0079a9a8,L"\\Software\\Game Maker\\Version 8.2\\Preferences");
  }
  local_2c = 0x716fac;
  FUN_00404788();
  local_2c = 0x716fb9;
  FUN_00407f0c(&local_8,L"\\Software\\Game Maker");
  DAT_0079a990 = 0;
  local_2c = 0x716fca;
  iVar5 = FUN_004047b0(900000000);
  local_2c = 0x716fdc;
  DAT_0079a7f8 = FUN_00716dd0(&DAT_00717b4c,iVar5 + 100000000);
  local_2c = 0x716ff0;
  FUN_00716e80(L"Recent0",0,&local_c);
  local_2c = 0x716ffa;
  FUN_00407eb8(&DAT_0079a7fc,local_c);
  local_2c = 0x717009;
  FUN_00716e80(L"Recent1",0,&local_10);
  local_2c = 0x717014;
  FUN_00407eb8(&DAT_0079a800,local_10);
  local_2c = 0x717023;
  FUN_00716e80(L"Recent2",0,&stack0xffffffec);
  local_2c = 0x71702e;
  FUN_00407eb8(&DAT_0079a804,unaff_EBX);
  local_2c = 0x71703d;
  FUN_00716e80(L"Recent3",0,&stack0xffffffe8);
  local_2c = 0x717048;
  FUN_00407eb8(&DAT_0079a808,unaff_ESI);
  local_2c = 0x717057;
  FUN_00716e80(L"Recent4",0,&stack0xffffffe4);
  local_2c = 0x717062;
  FUN_00407eb8(&DAT_0079a80c,unaff_EDI);
  local_2c = 0x717071;
  FUN_00716e80(L"Recent5",0,&local_20);
  local_2c = 0x71707c;
  FUN_00407eb8(&DAT_0079a810,local_20);
  local_2c = 0x71708b;
  FUN_00716e80(L"Recent6",0,&local_24);
  local_2c = 0x717096;
  FUN_00407eb8(&DAT_0079a814,local_24);
  local_2c = 0x7170a5;
  FUN_00716e80(L"Recent7",0,&local_28);
  local_2c = 0x7170b0;
  FUN_00407eb8(&DAT_0079a818,local_28);
  local_2c = 0x7170bc;
  DAT_0079a81c = FUN_00716d20(L"ShowRecent",1);
  local_2c = 0x7170cd;
  DAT_0079a824 = FUN_00716d20(L"LoadLast",0);
  local_2c = 0x7170de;
  DAT_0079a825 = FUN_00716d20(L"Backup",1);
  local_2c = 0x7170f2;
  DAT_0079a828 = FUN_00716dd0(L"MaxBackup",1);
  local_2c = 0x717103;
  DAT_0079a82c = FUN_00716d20(L"ShowProgress",1);
  local_2c = 0x717114;
  DAT_0079a82d = FUN_00716d20(L"RemoveTemp",1);
  local_2c = 0x717125;
  DAT_0079a82e = FUN_00716d20(L"HideWait",1);
  local_2c = 0x717136;
  DAT_0079a82f = FUN_00716d20(L"Warning",0);
  local_2c = 0x717147;
  DAT_0079a830 = FUN_00716d20(L"ActionHints",1);
  local_2c = 0x717158;
  DAT_0079a831 = FUN_00716d20(L"RemoveOutside",1);
  local_2c = 0x717169;
  DAT_0079a832 = FUN_00716d20(L"RememberRoomSettings",0);
  local_2c = 0x71717a;
  DAT_0079a833 = FUN_00716d20(L"RoomGridOnOffDefault",1);
  local_2c = 0x71718b;
  DAT_0079a834 = FUN_00716d20(L"FillRoomWithBackground",1);
  local_2c = 0x71719c;
  DAT_0079a838 = FUN_00716dd0(L"RoomBackgroundFullColourDefault",0);
  local_2c = 0x7171ad;
  DAT_0079a83c = FUN_00716d20(L"SpriteOrigin",1);
  local_2c = 0x7171bc;
  FUN_00520290(*(undefined4 *)puVar1,&local_34);
  local_2c = 0x7171c7;
  FUN_0041735c(local_34,&local_30);
  local_2c = 0x7171d4;
  FUN_004082dc(&local_30,L"Sounds");
  local_2c = 0x7171e4;
  FUN_00716e80(L"SoundDir",local_30,&local_2c);
  uVar2 = local_2c;
  local_2c = 0x7171f1;
  FUN_00407eb8(&DAT_0079a840,uVar2);
  local_2c = 0x7171fb;
  FUN_00520290(*(undefined4 *)puVar1,&local_40);
  local_2c = 0x717206;
  FUN_0041735c(local_40,&local_3c);
  local_2c = 0x717213;
  FUN_004082dc(&local_3c,L"Sprites");
  local_2c = 0x717223;
  FUN_00716e80(L"SpriteDir",local_3c,&local_38);
  local_2c = 0x717230;
  FUN_00407eb8(&DAT_0079a844,local_38);
  local_2c = 0x71723a;
  FUN_00520290(*(undefined4 *)puVar1,&local_4c);
  local_2c = 0x717245;
  FUN_0041735c(local_4c,&local_48);
  local_2c = 0x717252;
  FUN_004082dc(&local_48,L"Backgrounds");
  local_2c = 0x717262;
  FUN_00716e80(L"BackgroundDir",local_48,&local_44);
  local_2c = 0x71726f;
  FUN_00407eb8(&DAT_0079a848,local_44);
  local_2c = 0x717279;
  FUN_00520290(*(undefined4 *)puVar1,&local_58);
  local_2c = 0x717284;
  FUN_0041735c(local_58,&local_54);
  local_2c = 0x717291;
  FUN_004082dc(&local_54,L"Examples");
  local_2c = 0x7172a1;
  FUN_00716e80(L"GameDir",local_54,&local_50);
  local_2c = 0x7172ae;
  FUN_00407eb8(&DAT_0079a84c,local_50);
  local_2c = 0x7172b8;
  FUN_00520290(*(undefined4 *)puVar1,&local_64);
  local_2c = 0x7172c3;
  FUN_0041735c(local_64,&local_60);
  local_2c = 0x7172d0;
  FUN_004082dc(&local_60,L"Scripts");
  local_2c = 0x7172e0;
  FUN_00716e80(L"ScriptDir",local_60,&local_5c);
  local_2c = 0x7172ed;
  FUN_00407eb8(&DAT_0079a850,local_5c);
  local_2c = 0x7172f7;
  FUN_00520290(*(undefined4 *)puVar1,&local_70);
  local_2c = 0x717302;
  FUN_0041735c(local_70,&local_6c);
  local_2c = 0x71730f;
  FUN_004082dc(&local_6c,L"Tiles");
  local_2c = 0x71731f;
  FUN_00716e80(L"TileDir",local_6c,&local_68);
  local_2c = 0x71732c;
  FUN_00407eb8(&DAT_0079a854,local_68);
  local_2c = 0x717336;
  FUN_00520290(*(undefined4 *)puVar1,&local_7c);
  local_2c = 0x717341;
  FUN_0041735c(local_7c,&local_78);
  local_2c = 0x71734e;
  FUN_004082dc(&local_78,L"Strips");
  local_2c = 0x71735e;
  FUN_00716e80(L"StripDir",local_78,&local_74);
  local_2c = 0x71736b;
  FUN_00407eb8(&DAT_0079a858,local_74);
  local_2c = 0x717377;
  iVar5 = FUN_0051c620(*(undefined4 *)PTR_DAT_007828e0);
  DAT_0079a860 = iVar5 + -0x3c;
  if (1000 < DAT_0079a860) {
    DAT_0079a860 = 1000;
  }
  local_2c = 0x717397;
  iVar5 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
  DAT_0079a868 = iVar5 + -0x3c;
  if (800 < DAT_0079a868) {
    DAT_0079a868 = 800;
  }
  local_2c = 0x7173b7;
  iVar5 = FUN_0051c620(*(undefined4 *)PTR_DAT_007828e0);
  DAT_0079a85c = iVar5 - DAT_0079a860 >> 1;
  if (DAT_0079a85c < 0) {
    DAT_0079a85c = DAT_0079a85c + (uint)((iVar5 - DAT_0079a860 & 1U) != 0);
  }
  local_2c = 0x7173d5;
  iVar5 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
  DAT_0079a864 = iVar5 - DAT_0079a868 >> 1;
  if (DAT_0079a864 < 0) {
    DAT_0079a864 = DAT_0079a864 + (uint)((iVar5 - DAT_0079a868 & 1U) != 0);
  }
  DAT_0079a86c = 1;
  local_2c = 0x7173fe;
  DAT_0079a85c = FUN_00716dd0(L"FormLeft",DAT_0079a85c);
  local_2c = 0x717413;
  DAT_0079a860 = FUN_00716dd0(L"FormWidth",DAT_0079a860);
  local_2c = 0x717428;
  DAT_0079a864 = FUN_00716dd0(L"FormTop",DAT_0079a864);
  local_2c = 0x71743d;
  DAT_0079a868 = FUN_00716dd0(L"FormHeight",DAT_0079a868);
  local_2c = 0x717453;
  DAT_0079a86c = FUN_00716d20(L"FormMaximized",DAT_0079a86c);
  if (DAT_0079a86c != '\0') goto LAB_0071750b;
  if (DAT_0079a85c < 0) {
LAB_00717482:
    DAT_0079a85c = 0;
  }
  else {
    local_2c = 0x71747a;
    iVar5 = FUN_0051c620(*(undefined4 *)PTR_DAT_007828e0);
    if (iVar5 < DAT_0079a85c) goto LAB_00717482;
  }
  if (DAT_0079a864 < 0) {
LAB_007174a6:
    DAT_0079a864 = 0;
  }
  else {
    local_2c = 0x71749e;
    iVar5 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
    if (iVar5 < DAT_0079a864) goto LAB_007174a6;
  }
  local_2c = 0x7174b9;
  iVar5 = FUN_0051c620(*(undefined4 *)PTR_DAT_007828e0);
  if (iVar5 + -200 < DAT_0079a85c) {
    local_2c = 0x7174d2;
    iVar5 = FUN_0051c620(*(undefined4 *)PTR_DAT_007828e0);
    DAT_0079a85c = iVar5 + -200;
  }
  local_2c = 0x7174e8;
  iVar5 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
  if (iVar5 + -200 < DAT_0079a864) {
    local_2c = 0x717501;
    iVar5 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
    DAT_0079a864 = iVar5 + -200;
  }
LAB_0071750b:
  local_2c = 0x717517;
  DAT_0079a820 = FUN_00716dd0(L"GameMakerTV",0);
  local_2c = 0x717528;
  DAT_0079a86d = FUN_00716d20(L"ColorCode",1);
  local_2c = 0x717539;
  DAT_0079a86e = FUN_00716d20(L"ShowLineNumbers",1);
  local_2c = 0x71754a;
  DAT_0079a86f = FUN_00716d20(L"ShowMatching",1);
  local_2c = 0x71755b;
  DAT_0079a870 = FUN_00716d20(L"Snippets",1);
  local_2c = 0x71756c;
  DAT_0079a871 = FUN_00716d20(L"CheckCode",1);
  local_2c = 0x71757d;
  DAT_0079a874 = FUN_00716dd0(L"CodeColor0",0);
  local_2c = 0x71758e;
  DAT_0079a878 = FUN_00716dd0(L"CodeColor1",0x800000);
  local_2c = 0x7175a0;
  DAT_0079a87c = FUN_00716dd0(L"CodeColor2",0xff0000);
  local_2c = 0x7175b2;
  DAT_0079a880 = FUN_00716dd0(L"CodeColor3",0x8000);
  local_2c = 0x7175c4;
  DAT_0079a884 = FUN_00716dd0(L"CodeColor4",0x80);
  local_2c = 0x7175d6;
  DAT_0079a888 = FUN_00716dd0(L"CodeColor5",0x80);
  local_2c = 0x7175e8;
  DAT_0079a88c = FUN_00716dd0(L"CodeColor6",0x80);
  local_2c = 0x7175fa;
  DAT_0079a890 = FUN_00716dd0(L"CodeColor7",&DAT_00800080);
  local_2c = 0x71760c;
  DAT_0079a894 = FUN_00716dd0(L"CodeColor8",0x8080);
  local_2c = 0x71761e;
  DAT_0079a898 = FUN_00716dd0(L"CodeColor9",0xffffff);
  local_2c = 0x717630;
  DAT_0079a89c = FUN_00716dd0(L"CodeColor10",0xe0fafa);
  local_2c = 0x717642;
  DAT_0079a8a0 = FUN_00716dd0(L"CodeColor11",0xa06850);
  local_2c = 0x717657;
  FUN_00716e80(L"FontName",L"Courier New",&local_80);
  local_2c = 0x717664;
  FUN_00407eb8(&DAT_0079a964,local_80);
  local_2c = 0x717673;
  DAT_0079a968 = FUN_00716dd0(L"FontSize",10);
  local_2c = 0x717684;
  DAT_0079a8a4 = FUN_00716d20(L"GroupUndo",1);
  local_2c = 0x717695;
  DAT_0079a8a5 = FUN_00716d20(L"AutomaticIndent",1);
  local_2c = 0x7176a6;
  DAT_0079a8a6 = FUN_00716d20(L"SmartTabs",0);
  local_2c = 0x7176b7;
  DAT_0079a8a7 = FUN_00716d20(L"CursorLine",0);
  local_2c = 0x7176cb;
  DAT_0079a8a8 = FUN_00716dd0(L"MaxUndo",1000);
  local_2c = 0x7176df;
  DAT_0079a8ac = FUN_00716dd0(L"IndentValue",4);
  local_2c = 0x7176f0;
  DAT_0079a8b0 = FUN_00716d20(L"CodeEditorInternal",1);
  local_2c = 0x717701;
  DAT_0079a8b1 = FUN_00716d20(L"CodeEditorBOLD",0);
  local_2c = 0x717715;
  FUN_00716e80(L"CodeEditor",0,&local_84);
  local_2c = 0x717722;
  FUN_00407eb8(&DAT_0079a8b4,local_84);
  local_2c = 0x71772e;
  DAT_0079a8b8 = FUN_00716d20(L"AutoCompletion",1);
  local_2c = 0x717742;
  DAT_0079a8bc = FUN_00716dd0(L"ComplDelay",0x2ee);
  local_2c = 0x717756;
  DAT_0079a8d0 = FUN_00716dd0(L"DefaultObjectTab",1);
  local_2c = 0x71776a;
  DAT_0079a8c0 = FUN_00716dd0(L"ComplWidth",0x19a);
  local_2c = 0x71777e;
  DAT_0079a8c4 = FUN_00716dd0(L"ComplHeight",0x6e);
  local_2c = 0x717792;
  DAT_0079a8c8 = FUN_00716dd0(L"ScriptWidth",0x28a);
  local_2c = 0x7177a6;
  DAT_0079a8cc = FUN_00716dd0(L"ScriptHeight",0x1ae);
  local_2c = 0x7177b7;
  DAT_0079a8d4 = FUN_00716d20(L"ArgumentHelp",1);
  iVar5 = 0;
  puVar6 = &DAT_0079a8d8;
  do {
    local_2c = 0x7177d0;
    FUN_0041666c(iVar5,&local_90);
    local_2c = 0x7177e6;
    FUN_0040839c(&local_8c,L"FindStr",local_90);
    local_2c = 0x7177f9;
    FUN_00716e80(local_8c,0,&local_88);
    local_2c = 0x717806;
    FUN_00407eb8(puVar6,local_88);
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0x11);
  iVar5 = 0;
  puVar6 = &DAT_0079a91c;
  do {
    local_2c = 0x717823;
    FUN_0041666c(iVar5,&local_9c);
    local_2c = 0x717839;
    FUN_0040839c(&local_98,L"ReplStr",local_9c);
    local_2c = 0x71784c;
    FUN_00716e80(local_98,0,&local_94);
    local_2c = 0x717859;
    FUN_00407eb8(puVar6,local_94);
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0x11);
  local_2c = 0x71786e;
  DAT_0079a960 = FUN_00716d20(L"FindCase",1);
  local_2c = 0x71787f;
  DAT_0079a961 = FUN_00716d20(L"FindWhole",0);
  local_2c = 0x717890;
  DAT_0079a962 = FUN_00716d20(L"ShowFind",1);
  local_2c = 0x7178a1;
  DAT_0079a96c = FUN_00716d20(L"ImageEditorInternal",1);
  local_2c = 0x7178b8;
  FUN_00716e80(L"ImageEditor",0,&local_a0);
  local_2c = 0x7178c8;
  FUN_00407eb8(&DAT_0079a970,local_a0);
  local_2c = 0x7178da;
  FUN_00716e80(L"WaveEditor",0,&local_a4);
  local_2c = 0x7178ea;
  FUN_00407eb8(&DAT_0079a974,local_a4);
  local_2c = 0x7178fc;
  FUN_00716e80(L"MidiEditor",0,&local_a8);
  local_2c = 0x71790c;
  FUN_00407eb8(&DAT_0079a978,local_a8);
  local_2c = 0x71791e;
  FUN_00716e80(L"Mp3Editor",0,&local_ac);
  local_2c = 0x71792e;
  FUN_00407eb8(&DAT_0079a97c,local_ac);
  local_2c = 0x71793a;
  DAT_0079a998 = FUN_00716d20(L"ShowDebugTrace",0);
  local_2c = 0x71794b;
  DAT_0079a999 = FUN_00716d20(L"RoomMinimap",1);
  DAT_0079a980 = 1;
  local_2c = 0x7179a2;
  DAT_0079a981 = FUN_00716d20(L"NoWebsite",0);
  local_2c = 0x7179b3;
  DAT_0079a982 = FUN_00716d20(L"NoNews",0);
  local_2c = 0x7179c4;
  DAT_0079a983 = FUN_00716d20(L"NewsBrowser",0);
  local_2c = 0x7179d5;
  DAT_0079a984 = FUN_00716dd0(L"NewsDate",0);
  local_2c = 0x7179e6;
  DAT_0079a988 = FUN_00716d20(L"Tutorial",1);
  local_2c = 0x717a00;
  FUN_00716e80(L"FontText",L"AaBbCcDd",&local_b0);
  local_2c = 0x717a10;
  FUN_00407eb8(&DAT_0079a994,local_b0);
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00717a35;
  local_24 = (undefined1 *)0x717a2d;
  thunk_FUN_00406e80(&local_b0,0x2b,puVar3);
  return;
}
