// rea decompile_all
// name: FUN_00718ac0
// address: 0x718ac0
// body: available
// range: 0x718ac0-0x71915d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x718ae0 (push 0x71915e followed by fs-segment stack chaining); handler 0x71915e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00718ac0(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0071915e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00407eb8(&DAT_0079a9a8,L"\\Software\\Game Maker\\Version 8.2\\Preferences");
  FUN_00716c00(&DAT_007191e0,DAT_0079a7f8);
  FUN_00716c88(L"Recent0",DAT_0079a7fc);
  FUN_00716c88(L"Recent1",DAT_0079a800);
  FUN_00716c88(L"Recent2",DAT_0079a804);
  FUN_00716c88(L"Recent3",DAT_0079a808);
  FUN_00716c88(L"Recent4",DAT_0079a80c);
  FUN_00716c88(L"Recent5",DAT_0079a810);
  FUN_00716c88(L"Recent6",DAT_0079a814);
  FUN_00716c88(L"Recent7",DAT_0079a818);
  FUN_00716b78(L"ShowRecent",DAT_0079a81c);
  FUN_00716b78(L"LoadLast",DAT_0079a824);
  FUN_00716b78(L"Backup",DAT_0079a825);
  FUN_00716c00(L"MaxBackup",DAT_0079a828);
  FUN_00716b78(L"ShowProgress",DAT_0079a82c);
  FUN_00716b78(L"RemoveTemp",DAT_0079a82d);
  FUN_00716b78(L"HideWait",DAT_0079a82e);
  FUN_00716b78(L"Warning",DAT_0079a82f);
  FUN_00716b78(L"ActionHints",DAT_0079a830);
  FUN_00716b78(L"RemoveOutside",DAT_0079a831);
  FUN_00716b78(L"RememberRoomSettings",DAT_0079a832);
  FUN_00716b78(L"RoomGridOnOffDefault",DAT_0079a833);
  FUN_00716b78(L"FillRoomWithBackground",DAT_0079a834);
  FUN_00716c00(L"RoomBackgroundFullColourDefault",DAT_0079a838);
  FUN_00716b78(L"SpriteOrigin",DAT_0079a83c);
  FUN_00716c00(L"GameMakerTV",DAT_0079a820);
  FUN_00716c88(L"SoundDir",DAT_0079a840);
  FUN_00716c88(L"SpriteDir",DAT_0079a844);
  FUN_00716c88(L"BackgroundDir",DAT_0079a848);
  FUN_00716c88(L"GameDir",DAT_0079a84c);
  FUN_00716c88(L"ScriptDir",DAT_0079a850);
  FUN_00716c88(L"TileDir",DAT_0079a854);
  FUN_00716c88(L"StripDir",DAT_0079a858);
  FUN_00716b78(L"FormMaximized",DAT_0079a86c);
  FUN_00716c00(L"FormLeft",DAT_0079a85c);
  FUN_00716c00(L"FormWidth",DAT_0079a860);
  FUN_00716c00(L"FormTop",DAT_0079a864);
  FUN_00716c00(L"FormHeight",DAT_0079a868);
  FUN_00716b78(L"ColorCode",DAT_0079a86d);
  FUN_00716b78(L"ShowLineNumbers",DAT_0079a86e);
  FUN_00716b78(L"ShowMatching",DAT_0079a86f);
  FUN_00716b78(L"Snippets",DAT_0079a870);
  FUN_00716b78(L"CheckCode",DAT_0079a871);
  FUN_00716c00(L"CodeColor0",DAT_0079a874);
  FUN_00716c00(L"CodeColor1",DAT_0079a878);
  FUN_00716c00(L"CodeColor2",DAT_0079a87c);
  FUN_00716c00(L"CodeColor3",DAT_0079a880);
  FUN_00716c00(L"CodeColor4",DAT_0079a884);
  FUN_00716c00(L"CodeColor5",DAT_0079a888);
  FUN_00716c00(L"CodeColor6",DAT_0079a88c);
  FUN_00716c00(L"CodeColor7",DAT_0079a890);
  FUN_00716c00(L"CodeColor8",DAT_0079a894);
  FUN_00716c00(L"CodeColor9",DAT_0079a898);
  FUN_00716c00(L"CodeColor10",DAT_0079a89c);
  FUN_00716c00(L"CodeColor11",DAT_0079a8a0);
  FUN_00716c88(L"FontName",DAT_0079a964);
  FUN_00716c00(L"FontSize",DAT_0079a968);
  FUN_00716b78(L"GroupUndo",DAT_0079a8a4);
  FUN_00716b78(L"AutomaticIndent",DAT_0079a8a5);
  FUN_00716b78(L"SmartTabs",DAT_0079a8a6);
  FUN_00716b78(L"CursorLine",DAT_0079a8a7);
  FUN_00716c00(L"MaxUndo",DAT_0079a8a8);
  FUN_00716c00(L"IndentValue",DAT_0079a8ac);
  FUN_00716b78(L"CodeEditorInternal",DAT_0079a8b0);
  FUN_00716b78(L"CodeEditorBOLD",DAT_0079a8b1);
  FUN_00716c88(L"CodeEditor",DAT_0079a8b4);
  FUN_00716b78(L"AutoCompletion",DAT_0079a8b8);
  FUN_00716c00(L"ComplDelay",DAT_0079a8bc);
  FUN_00716c00(L"DefaultObjectTab",DAT_0079a8d0);
  FUN_00716c00(L"ComplWidth",DAT_0079a8c0);
  FUN_00716c00(L"ComplHeight",DAT_0079a8c4);
  FUN_00716c00(L"ScriptWidth",DAT_0079a8c8);
  FUN_00716c00(L"ScriptHeight",DAT_0079a8cc);
  FUN_00716c88(L"FontText",DAT_0079a994);
  FUN_00716b78(L"ArgumentHelp",DAT_0079a8d4);
  iVar3 = 0;
  puVar2 = &DAT_0079a8d8;
  do {
    FUN_0041666c(iVar3,&local_c);
    FUN_0040839c(&local_8,L"FindStr",local_c);
    FUN_00716c88(local_8,*puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x11);
  iVar3 = 0;
  puVar2 = &DAT_0079a91c;
  do {
    FUN_0041666c(iVar3,&local_14);
    FUN_0040839c(&local_10,L"ReplStr",local_14);
    FUN_00716c88(local_10,*puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x11);
  FUN_00716b78(L"FindCase",DAT_0079a960);
  FUN_00716b78(L"FindWhole",DAT_0079a961);
  FUN_00716b78(L"ShowFind",DAT_0079a962);
  FUN_00716b78(L"ImageEditorInternal",DAT_0079a96c);
  FUN_00716c88(L"ImageEditor",DAT_0079a970);
  FUN_00716c88(L"WaveEditor",DAT_0079a974);
  FUN_00716c88(L"MidiEditor",DAT_0079a978);
  FUN_00716c88(L"Mp3Editor",DAT_0079a97c);
  FUN_00716b78(L"ShowDebugTrace",DAT_0079a998);
  FUN_00716b78(L"RoomMinimap",DAT_0079a999);
  FUN_00716b78(L"Advanced",DAT_0079a980);
  FUN_00716b78(L"NoWebsite",DAT_0079a981);
  FUN_00716b78(L"NoNews",DAT_0079a982);
  FUN_00716b78(L"NewsBrowser",DAT_0079a983);
  FUN_00716c00(L"NewsDate",DAT_0079a984);
  FUN_00716b78(L"Tutorial",DAT_0079a988);
  if (DAT_0079a990 != '\0') {
    FUN_00716c88(L"5piceAssetCompilerLocation",*(undefined4 *)PTR_PTR_00782938);
    FUN_00716c88(L"5piceCPPRunnerLocation",*(undefined4 *)PTR_PTR_00781d50);
    FUN_00716c88(L"5piceWebBrowserLocation",*(undefined4 *)PTR_DAT_0078286c);
    FUN_00716c88(L"5piceHTMLRunnerLocation",*(undefined4 *)PTR_PTR_00781cf4);
    FUN_00716c00(L"5piceTarget",DAT_0079a98c);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00719165;
  puStack_24 = (undefined1 *)0x71915d;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
