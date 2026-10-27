// rea decompile_all
// name: FUN_005c8fec
// address: 0x5c8fec
// body: available
// range: 0x5c8fec-0x5c9085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c9007 (push 0x5c9086 followed by fs-segment stack chaining); handler 0x5c9086 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c8fec(int *param_1,char param_2,undefined4 *param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  puStack_24 = &LAB_005c9086;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_4 == '\0') {
    if (param_2 == '\0') {
      uVar2 = FUN_004256a8(param_5);
      FUN_005c8d80(param_1,*param_3,uVar2);
    }
    else if (param_2 == '\x01') {
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
      iVar1 = local_8;
      FUN_005c6acc(param_1,&local_c);
      if (iVar1 != local_c) {
        (**(code **)(*param_1 + 0x1c))(param_1,&local_10);
        (**(code **)(*local_10 + 0x60))(local_10,*param_3);
      }
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_005c7ef4(param_1);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c908d;
  puStack_24 = (undefined1 *)0x5c9085;
  FUN_00408e44(&local_10,&DAT_005c0e70,3);
  return;
}
