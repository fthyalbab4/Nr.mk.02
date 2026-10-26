// rea decompile_all
// name: FUN_00567ea0
// address: 0x567ea0
// body: available
// range: 0x567ea0-0x568068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x567ec2 (push 0x568069 followed by fs-segment stack chaining); handler 0x568069 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567ea0(int *param_1,ushort *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  HWND hWnd;
  BOOL BVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  UINT wMsgFilterMin;
  UINT wMsgFilterMax;
  UINT wRemoveMsg;
  undefined4 uVar6;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_38;
  undefined4 local_34;
  tagMSG local_30;
  int local_14;
  int local_10;
  char local_9;
  undefined4 local_8;

  puStack_44 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  local_8 = 0;
  puStack_48 = &LAB_00568069;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_9 = '\0';
  if (*param_2 == 0x1b) {
    puStack_44 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x114))();
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x110))();
    if (((cVar3 != '\0') && ((char)param_1[0x9f] == '\0')) && (*param_2 != 8)) {
      if (*param_2 == 0xd) {
        (**(code **)(*param_1 + 0x120))();
      }
      else {
        FUN_00567b30(param_1,&local_10,&local_14);
        if (1 < local_14 - local_10) {
          FUN_005683f0(param_1,CONCAT22(extraout_var,0x2e));
          local_10 = FUN_005682c4(param_1,local_10);
          FUN_00567b78(param_1,local_10);
        }
        if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          wRemoveMsg = 1;
          wMsgFilterMax = 0x102;
          wMsgFilterMin = 0x102;
          hWnd = (HWND)FUN_004f76a8(param_1);
          BVar4 = PeekMessageW(&local_30,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
          if ((BVar4 != 0) && (local_30.message == 0x12)) {
            PostQuitMessage(local_30.wParam);
          }
        }
        local_9 = FUN_005689d8(param_1,param_2,local_10);
        if (local_9 != '\0') {
          if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_00408034(&local_34,local_30.wParam & 0xffff);
            uVar6 = local_34;
            FUN_00408034(&local_38,*param_2);
            FUN_0040839c(&local_8,local_38,uVar6);
            uVar6 = 0x568009;
            FUN_00567b54(param_1,local_10,local_10 + 2);
          }
          else {
            uVar6 = 0x568016;
            FUN_00408034(&local_8,*param_2);
          }
          uStack_4c = local_8;
          uVar5 = FUN_004f76a8(param_1);
          FUN_0040ef5c(uVar5,0xc2,0,uVar6);
          FUN_00567b30(param_1,&local_10,&local_14);
          FUN_00568270(param_1,local_10,0);
        }
      }
    }
  }
  puVar2 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00568070;
  puStack_48 = (undefined1 *)0x568060;
  thunk_FUN_00406e80(&local_38,2,puVar2);
  puStack_48 = (undefined1 *)0x568068;
  thunk_FUN_00406e5c(&local_8);
  return;
}
