// rea decompile_all
// name: FUN_00484d18
// address: 0x484d18
// body: available
// range: 0x484d18-0x484e4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x484d3b (push 0x484e4f followed by fs-segment stack chaining); handler 0x484e4f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484d18(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int nBar;
  int iVar5;
  BOOL BVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00484e4f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  if ((param_4 < param_3) || (puVar1 = &stack0xfffffffc, param_4 < param_1[0xa0])) {
    FUN_0040b75c(PTR_PTR_00782360,&local_c);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_c);
    FUN_00406618();
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  if (param_2 < local_8) {
    param_2 = local_8;
  }
  if (param_4 < param_2) {
    param_2 = param_4;
  }
  if ((param_1[0x9e] != local_8) || (param_4 != param_1[0x9f])) {
    param_1[0x9e] = local_8;
    param_1[0x9f] = param_4;
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      iVar4 = -(uint)(param_2 == param_1[0x9d]);
      nBar = 2;
      iVar5 = local_8;
      pHVar3 = (HWND)FUN_004f76a8(param_1);
      SetScrollRange(pHVar3,nBar,iVar5,param_4,iVar4);
    }
  }
  if (param_2 != param_1[0x9d]) {
    param_1[0x9d] = param_2;
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_00484cbc(param_1);
      if (cVar2 == '\0') {
        BVar6 = -1;
        iVar4 = param_1[0x9f] - param_1[0x9d];
        iVar5 = 2;
        pHVar3 = (HWND)FUN_004f76a8(param_1);
        SetScrollPos(pHVar3,iVar5,iVar4,BVar6);
      }
      else {
        BVar6 = -1;
        iVar4 = param_1[0x9d];
        iVar5 = 2;
        pHVar3 = (HWND)FUN_004f76a8(param_1);
        SetScrollPos(pHVar3,iVar5,iVar4,BVar6);
      }
    }
    (**(code **)(*param_1 + 0x74))(param_1,1);
    FUN_00405d08(param_1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00484e56;
  puStack_20 = (undefined1 *)0x484e4e;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
