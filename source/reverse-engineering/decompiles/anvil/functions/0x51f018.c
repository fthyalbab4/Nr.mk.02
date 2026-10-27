// rea decompile_all
// name: FUN_0051f018
// address: 0x51f018
// body: available
// range: 0x51f018-0x51f0cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51f03b (push 0x51f0ce followed by fs-segment stack chaining); handler 0x51f0ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f018(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 local_10c;
  undefined1 local_105 [256];
  byte local_5;

  puStack_11c = &stack0xfffffffc;
  local_10c = 0;
  puStack_120 = &LAB_0051f0ce;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  (**(code **)(*param_2 + 0x44))();
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
  puVar1 = puStack_11c;
  while ((iVar2 == 1 && (local_5 != 0))) {
    puStack_11c = puVar1;
    FUN_0051ee94(param_1,local_105,local_5);
    local_105[local_5] = 0;
    FUN_0040838c(&local_10c,local_105,0x100);
    (**(code **)(*param_2 + 0x38))(param_2,local_10c);
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
    puVar1 = puStack_11c;
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0051f0d5;
  puStack_120 = (undefined1 *)0x51f0cd;
  thunk_FUN_004072d8(&local_10c,uStack_124,puVar1);
  return;
}
