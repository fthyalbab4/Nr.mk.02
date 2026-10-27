// rea decompile_all
// name: FUN_00500f84
// address: 0x500f84
// body: available
// range: 0x500f84-0x501027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x500fac (push 0x501028 followed by fs-segment stack chaining); handler 0x501028 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500f84(int *param_1,char param_2)

{
  short sVar1;
  undefined1 *puVar2;
  short *psVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  short *local_8;

  local_8 = (short *)0x0;
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x500f9c;
    param_1 = (int *)FUN_00406510();
  }
  puStack_28 = &LAB_00501028;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00479fd0(param_1,0);
  (**(code **)(*param_1 + 0x148))(param_1,3);
  FUN_005017b8(param_1);
  FUN_00408d90(0,&local_8);
  psVar3 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    psVar3 = (short *)FUN_00407488(&local_8,local_8);
  }
  sVar1 = *psVar3;
  *(short *)(param_1 + 0xc5) = sVar1;
  if (sVar1 == 0x5c) {
    *(undefined2 *)(param_1 + 0xc5) = 0;
  }
  FUN_0050177c(param_1);
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0050102f;
  puStack_28 = (undefined1 *)0x501027;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar2);
  return;
}
