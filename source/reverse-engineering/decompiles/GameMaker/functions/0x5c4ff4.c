// rea decompile_all
// name: FUN_005c4ff4
// address: 0x5c4ff4
// body: available
// range: 0x5c4ff4-0x5c507b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c5018 (push 0x5c507c followed by fs-segment stack chaining); handler 0x5c507c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4ff4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = (int *)0x0;
  puStack_28 = &LAB_005c507c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_005c4f70(param_1);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      FUN_005c5340(local_8,iVar4,&local_18);
      (**(code **)(*local_18 + 0x20))(local_18,&local_14);
      cVar2 = FUN_005c06ac(local_14,local_c,local_10);
      if (cVar2 != '\0') break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005c5083;
  puStack_28 = (undefined1 *)0x5c5073;
  FUN_0040b140(&local_18,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5c507b;
  FUN_0040b140(&local_14);
  return;
}
