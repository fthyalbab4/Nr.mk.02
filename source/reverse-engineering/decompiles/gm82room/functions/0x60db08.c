// rea decompile_all
// name: FUN_0060db08
// address: 0x60db08
// body: available
// range: 0x60db08-0x60dddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60db1f (push 0x60dddc followed by fs-segment stack chaining); handler 0x60dddc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060db08(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0060dddc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 8) = uVar3;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x10) = (double)in_ST0;
  fVar5 = in_ST7;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x18) = (double)in_ST1;
  fVar6 = fVar5;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x20) = (double)in_ST2;
  fVar7 = fVar6;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x28) = (double)in_ST3;
  fVar8 = fVar7;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x30) = (double)in_ST4;
  fVar9 = fVar8;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x38) = (double)in_ST5;
  fVar10 = fVar9;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x48) = (double)in_ST6;
  fVar11 = fVar10;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x50) = (double)in_ST7;
  fVar12 = fVar11;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x58) = (double)fVar5;
  fVar5 = fVar12;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x60) = (double)fVar6;
  fVar6 = fVar5;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x68) = (double)fVar7;
  fVar7 = fVar6;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x70) = (double)fVar8;
  fVar8 = fVar7;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x78) = (double)fVar9;
  fVar9 = fVar8;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x80) = (double)fVar10;
  fVar10 = fVar9;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x88) = (double)fVar11;
  fVar11 = fVar10;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x90) = (double)fVar12;
  fVar12 = fVar11;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x98) = (double)fVar5;
  fVar5 = fVar12;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0xa0) = (double)fVar6;
  fVar6 = fVar5;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0xa8) = (double)fVar7;
  fVar7 = fVar6;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0xb0) = (double)fVar8;
  fVar8 = fVar7;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 200) = uVar2;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0xc9) = uVar2;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0xca) = uVar2;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  uVar3 = FUN_00571fac(uVar3);
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  iVar4 = 0;
  do {
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xd4 + iVar4 * 4) = uVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0x108) = uVar2;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0x109) = uVar2;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x110) = (double)fVar9;
  fVar9 = fVar8;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x118) = (double)fVar10;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x120) = (double)fVar11;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x128) = (double)fVar12;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x130) = (double)fVar5;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x140) = (double)fVar6;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x148) = (double)fVar7;
  uVar3 = FUN_0050bbe0(param_2);
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x158) = (double)fVar8;
  FUN_0050bbf4(param_2);
  *(double *)(param_1 + 0x160) = (double)fVar9;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_0050bcd0(param_2);
  *(undefined1 *)(param_1 + 0x169) = uVar2;
  FUN_0050bc1c(param_2,&local_8);
  FUN_00408194(param_1 + 0x16c,local_8);
  FUN_0056e08c(*(undefined4 *)(param_1 + 0x104),param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0060dde3;
  puStack_1c = (undefined1 *)0x60dddb;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
