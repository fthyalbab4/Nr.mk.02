// rea decompile_all
// name: FUN_00441718
// address: 0x441718
// body: available
// range: 0x441718-0x4417a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441742 (push 0x4417a7 followed by fs-segment stack chaining); handler 0x4417a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441718(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  puStack_20 = &LAB_004417a7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00443adc(param_1,0xe);
  if ((param_2 != 0) && (iVar3 = *(int *)(*(int *)(param_2 + 8) + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      FUN_00441fa8(param_1);
      uVar2 = FUN_0043a3e0(param_2,iVar4);
      FUN_00442000(param_1,uVar2);
      FUN_00441fb0(param_1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00441fb0(param_1);
  *in_FS_OFFSET = uStack_24;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}
