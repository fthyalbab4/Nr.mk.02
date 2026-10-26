// rea decompile_all
// name: FUN_0054e644
// address: 0x54e644
// body: available
// range: 0x54e644-0x54e835 inclusive
// range: 0x54e84d-0x54e853 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54e6a0 (push 0x54e836 followed by fs-segment stack chaining); handler 0x54e836 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054e644(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  bVar4 = 0;
  puStack_1c = (undefined1 *)0x54e661;
  FUN_00404f08(param_2,0x2d8,0);
  ppuVar2 = &PTR_FUN_0077b6b0;
  puVar3 = param_2;
  for (iVar1 = 0x35; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  param_2[0x42] = param_2;
  puStack_1c = (undefined1 *)0x54e695;
  FUN_0054f7d0(param_2 + 0x42,0x3e,0x1d0);
  puStack_20 = &LAB_0054e836;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  param_2[0x35] = &LAB_0054e52c;
  param_2[0x3a] = param_1;
  param_2[0x44] = param_2 + 0x35;
  puStack_1c = &stack0xfffffffc;
  FUN_0043f254(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
  FUN_00550f3c(param_2 + 0x42,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
  FUN_0054fa98(param_2 + 0x42,0xffffffff);
  param_2[0x4e] = 1;
  param_2[0x4f] = 1 << (*(byte *)(param_1 + 0x43) & 0x1f);
  param_2[0x56] = -(uint)(*(char *)(param_1 + 0x3c) != '\0');
  if (*(char *)(param_1 + 0x3d) != '\0') {
    param_2[0x4d] = 1;
  }
  if ((*(char *)(param_1 + 0x3e) == '\x01') || (param_2[0x4d] == 1)) {
    param_2[0x57] = 0xffffffff;
    param_2[0x5a] = 0xec;
  }
  if (*(char *)(param_1 + 0x42) == '\x01') {
    param_2[0x54] = 1;
    param_2[0x59] = 0;
    param_2[0x58] = 1;
  }
  param_2[0x3f] = param_2[0x54];
  *(char *)(param_2 + 0x40) = '\x01' - (param_2[0x59] == 0);
  param_2[0x41] = param_2[0x58];
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar1 = FUN_0054fbe4(param_2 + 0x42);
    if (iVar1 != 0) {
      param_2[0x5d] = param_2[0x59];
      param_2[0x54] = 1;
      param_2[0x59] = 0;
      param_2[0x58] = 1;
      param_2[0x52] = 0xffffffff;
    }
  }
  *in_FS_OFFSET = uStack_24;
  return;
}
