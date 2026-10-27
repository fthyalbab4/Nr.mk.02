// rea decompile_all
// name: FUN_006701cc
// address: 0x6701cc
// body: available
// range: 0x6701cc-0x67028c inclusive
// range: 0x6702b0-0x6702cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6701fe (push 0x6702d0 followed by fs-segment stack chaining); handler 0x6702d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67023e (push 0x67028d followed by fs-segment stack chaining); handler 0x67028d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006701cc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x6701e6;
  uVar2 = FUN_00405a4c(&LAB_00433630,1);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  puStack_20 = &LAB_006702d0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x90) != 0) {
    puStack_28 = (undefined1 *)0x670213;
    puStack_1c = &stack0xfffffffc;
    FUN_00405a7c();
  }
  puStack_28 = (undefined1 *)0x67021b;
  piVar3 = (int *)FUN_0066fd44(param_1);
  *(int **)(param_1 + 0x90) = piVar3;
  puStack_28 = (undefined1 *)0x670233;
  (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 0x6c));
  puStack_2c = &LAB_0067028d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0043ff0c(uVar2,param_2);
  FUN_0043f254(uVar2);
  FUN_0043f5ec(uVar2,param_1);
  FUN_004493c0(param_1);
  FUN_0067076c(param_1,*(undefined4 *)(param_1 + 0x6c));
  FUN_00672ad4(*(undefined4 *)(param_1 + 0x6c));
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006702d7;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  puStack_20 = (undefined1 *)0x6702cf;
  FUN_00405a7c(uVar2,uStack_24,puVar1);
  return;
}
