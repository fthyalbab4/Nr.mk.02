// rea decompile_all
// name: FUN_005767f4
// address: 0x5767f4
// body: available
// range: 0x5767f4-0x576919 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576818 (push 0x576937 followed by fs-segment stack chaining); handler 0x576937 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57683c (push 0x57691a followed by fs-segment stack chaining); handler 0x57691a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005767f4(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined1 uVar5;
  bool bVar6;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00576937;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_2c = (undefined1 *)param_4;
  puStack_30 = (undefined1 *)0x576829;
  local_c = param_2;
  local_8 = param_1;
  FUN_00572914(param_1,param_2,param_3);
  puStack_2c = (undefined1 *)0x576831;
  FUN_00576580(local_8);
  puStack_30 = &LAB_0057691a;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_2c = &stack0xfffffffc;
  piVar3 = (int *)FUN_00576014(local_8);
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  uVar5 = iVar4 == param_3 - local_8[0xa8];
  if ((iVar4 <= param_3 - local_8[0xa8]) && (uVar5 = param_4 == 0, !(bool)uVar5)) {
    FUN_00576014(local_8);
    uVar5 = 1;
    FUN_0043d1d4();
    iVar4 = (**(code **)(*(int *)local_8[0xdf] + 0x14))();
    local_8[0xe5] = iVar4;
  }
  (**(code **)(*local_8 + 0x120))(local_8,local_c,param_3);
  FUN_00408640(param_4,local_10);
  if (!(bool)uVar5) {
    if (local_c == 0) {
      cVar2 = FUN_0057745c(local_8[0xdf],param_4,0);
      bVar6 = cVar2 == '\0';
      if (bVar6) {
        FUN_00408640(local_8[0xe2],param_4);
        if (!bVar6) {
          FUN_00407eb8(local_8 + 0xe2,param_4);
          goto LAB_00576904;
        }
      }
    }
    FUN_00407eb8(local_8 + 0xe2,0);
    (**(code **)(*local_8 + 0x124))(local_8,local_c,param_3,param_4);
  }
LAB_00576904:
  puVar1 = puStack_30;
  *in_FS_OFFSET = (int)&local_10;
  puStack_30 = &LAB_00576921;
  iStack_34 = 0x576919;
  FUN_005765a8(local_8,&local_10,puVar1);
  return;
}
