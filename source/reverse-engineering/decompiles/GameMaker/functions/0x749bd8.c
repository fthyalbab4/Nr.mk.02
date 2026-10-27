// rea decompile_all
// name: FUN_00749bd8
// address: 0x749bd8
// body: available
// range: 0x749bd8-0x749c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x749bf5 (push 0x749c60 followed by fs-segment stack chaining); handler 0x749c60 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00749bd8(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00749c60;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if ((param_4 & param_3) != 0) {
    iVar2 = *param_1;
    puVar1 = &stack0xfffffffc;
    if ((iVar2 != 0) && (puVar1 = &stack0xfffffffc, *(short *)(iVar2 + -10) != 2)) {
      iVar2 = FUN_00407048(param_1,*param_1);
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (0 < iVar3) {
      FUN_004082dc(param_1,&DAT_00749c80);
    }
    FUN_0040b75c(local_8,&local_c);
    FUN_004082dc(param_1,local_c);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00749c67;
  puStack_1c = (undefined1 *)0x749c5f;
  thunk_FUN_00406e5c(&local_c,uStack_20,puVar1);
  return;
}
