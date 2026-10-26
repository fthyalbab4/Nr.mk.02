// rea decompile_all
// name: FUN_00490d4c
// address: 0x490d4c
// body: available
// range: 0x490d4c-0x490e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x490d6c (push 0x490e56 followed by fs-segment stack chaining); handler 0x490e56 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490d4c(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x490d61;
  FUN_00492630(param_1);
  puStack_18 = &LAB_00490e56;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004c45b8(param_1);
  FUN_004bcb48(param_1,0x41e,0x14,0);
  FUN_004bcb48(param_1,0x42f,*(undefined4 *)(param_1 + 0x2cc),0);
  iVar3 = *(int *)(param_1 + 0x2b4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 700);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c4);
      if (iVar3 == 0) {
        uVar2 = 0;
        iVar3 = 0;
      }
      else {
        uVar2 = *(uint *)(iVar3 + 0x38);
        iVar3 = *(int *)(iVar3 + 0x34);
      }
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x38);
      iVar3 = *(int *)(iVar3 + 0x34);
    }
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0x38);
    iVar3 = *(int *)(iVar3 + 0x34);
  }
  FUN_004bcb48(param_1,0x420,0,uVar2 & 0xffff | iVar3 << 0x10);
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  if (param_3 < 1) {
    param_3 = 1;
  }
  FUN_004bcb48(param_1,0x41f,0,param_2 & 0xffff | param_3 << 0x10);
  puVar1 = puStack_14;
  *(uint *)(param_1 + 0x280) = param_2;
  *(int *)(param_1 + 0x284) = param_3;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00490e5d;
  puStack_18 = (undefined1 *)0x490e55;
  FUN_00492638(param_1,uStack_1c,puVar1);
  return;
}
