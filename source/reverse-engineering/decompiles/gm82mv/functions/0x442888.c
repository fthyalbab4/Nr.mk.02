// rea decompile_all
// name: FUN_00442888
// address: 0x442888
// body: available
// range: 0x442888-0x44290d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44289d (push 0x44290e followed by fs-segment stack chaining); handler 0x44290e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442888(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0044290e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_0042ba48(*(undefined4 *)(param_4 + -0xc));
  uVar1 = **(undefined4 **)(iVar3 + 1);
  FUN_00443adc(*(undefined4 *)(param_4 + -8),0xb);
  uVar4 = 0;
  do {
    bVar5 = uVar4 < 0x1f;
    if (uVar4 < 0x20) {
      bVar5 = (param_1 >> (uVar4 & 0x1f) & 1) != 0;
    }
    if (bVar5) {
      FUN_0042bf3c(uVar1,uVar4,&local_8);
      FUN_00443a00(*(undefined4 *)(param_4 + -8),local_8);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  FUN_004436f8(*(undefined4 *)(param_4 + -8),0);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00442915;
  puStack_1c = (undefined1 *)0x44290d;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar2);
  return;
}
