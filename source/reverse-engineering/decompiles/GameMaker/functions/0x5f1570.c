// rea decompile_all
// name: FUN_005f1570
// address: 0x5f1570
// body: available
// range: 0x5f1570-0x5f1601 inclusive
// range: 0x5f1609-0x5f1611 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f15ab (push 0x5f1602 followed by fs-segment stack chaining); handler 0x5f1602 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005f1570(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 local_c;
  byte local_5;

  local_5 = 0;
  local_c = 0;
  puStack_18 = &local_c;
  uStack_1c = 0;
  uStack_20 = 0;
  puStack_24 = (undefined1 *)0x5f1591;
  iVar1 = (**(code **)PTR_DAT_007822cc)();
  if (iVar1 < 1) {
    return (uint)local_5;
  }
  puStack_24 = (undefined1 *)0x5f159d;
  iVar1 = FUN_0040431c(local_c);
  puStack_28 = &LAB_005f1602;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar6 = &local_c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = (**(code **)PTR_DAT_007822cc)();
  if (0 < iVar2) {
    iVar3 = iVar2 + -1;
    iVar5 = iVar1;
    if (SBORROW4(iVar2,1)) {
      iVar3 = FUN_00405944();
      iVar5 = extraout_EDX;
    }
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      do {
        if (*(int *)(iVar5 + 0x4c) == 0x17) {
          local_5 = 1;
          break;
        }
        iVar5 = iVar5 + 0x274;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *in_FS_OFFSET = 0;
  uVar4 = FUN_00404338(iVar1,0,puVar6,0x5f1609);
  return uVar4;
}
