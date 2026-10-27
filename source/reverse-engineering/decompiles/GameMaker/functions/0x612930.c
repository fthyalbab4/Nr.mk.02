// rea decompile_all
// name: FUN_00612930
// address: 0x612930
// body: available
// range: 0x612930-0x6129ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61294e (push 0x6129ac followed by fs-segment stack chaining); handler 0x6129ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612930(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_006129ac;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = -1;
  local_8 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x14))();
  if (SBORROW4(iVar4,1)) {
    FUN_00405944();
  }
  iVar2 = local_c;
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      FUN_006126f8(param_1,iVar5,&local_10);
      cVar3 = FUN_005e3940(local_10,local_8);
      iVar2 = iVar5;
      if (cVar3 != '\0') break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      iVar2 = local_c;
    } while (iVar4 != 0);
  }
  local_c = iVar2;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006129b3;
  puStack_24 = (undefined1 *)0x6129ab;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
