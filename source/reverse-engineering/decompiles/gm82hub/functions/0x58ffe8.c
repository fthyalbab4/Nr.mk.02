// rea decompile_all
// name: FUN_0058ffe8
// address: 0x58ffe8
// body: available
// range: 0x58ffe8-0x59022a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x590002 (push 0x59022b followed by fs-segment stack chaining); handler 0x59022b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ffe8(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0059022b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0058ffd0();
  iVar3 = FUN_0050bbe0(param_1);
  if (iVar3 == 800) {
    uVar4 = FUN_0050be9c(param_1);
    uVar5 = FUN_0050bbe0(uVar4);
    FUN_004bb810(*(undefined4 *)(DAT_0084f024 + 0x388),uVar5);
    PTR_FUN_00686b38._0_1_ = FUN_0050bcd0(uVar4);
    FUN_0050bc1c(uVar4,&local_8);
    FUN_00408194(&PTR_u_Game_Information_00686b3c,local_8);
    DAT_00686b40 = FUN_0050bbe0(uVar4);
    DAT_00686b44 = FUN_0050bbe0(uVar4);
    DAT_00686b48 = FUN_0050bbe0(uVar4);
    DAT_00686b4c = FUN_0050bbe0(uVar4);
    DAT_00686b50 = FUN_0050bcd0(uVar4);
    DAT_00686b54 = FUN_0050bcd0(uVar4);
    PTR_FUN_00686b58._0_1_ = FUN_0050bcd0(uVar4);
    DAT_00686b5c = FUN_0050bcd0(uVar4);
    uVar5 = FUN_0050be14(uVar4);
    piVar1 = *(int **)(*(int *)(DAT_0084f024 + 0x388) + 0x2c0);
    (**(code **)(*piVar1 + 0x70))(piVar1,uVar5);
    FUN_00405fdc(uVar5);
    FUN_00405fdc(uVar4);
    FUN_004bb690(DAT_0084f024,PTR_u_Game_Information_00686b3c);
    if (DAT_00686b50 == '\0') {
      FUN_004e2e6c(DAT_0084f024,0);
    }
    else if (DAT_00686b54 == '\0') {
      FUN_004e2e6c(DAT_0084f024,1);
    }
    else {
      FUN_004e2e6c(DAT_0084f024,2);
    }
    if ((char)PTR_FUN_00686b58 == '\0') {
      FUN_004e328c(DAT_0084f024,0);
    }
    else {
      FUN_004e328c(DAT_0084f024,3);
    }
    iVar3 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    if (iVar3 < DAT_00686b48) {
      DAT_00686b48 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    }
    iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    if (iVar3 < DAT_00686b4c) {
      DAT_00686b4c = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    }
    if (DAT_00686b40 < 0) {
      iVar3 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
      DAT_00686b40 = iVar3 - DAT_00686b48 >> 1;
      if (DAT_00686b40 < 0) {
        DAT_00686b40 = DAT_00686b40 + (uint)((iVar3 - DAT_00686b48 & 1U) != 0);
      }
    }
    if (DAT_00686b44 < 0) {
      iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
      DAT_00686b44 = iVar3 - DAT_00686b4c >> 1;
      if (DAT_00686b44 < 0) {
        DAT_00686b44 = DAT_00686b44 + (uint)((iVar3 - DAT_00686b4c & 1U) != 0);
      }
    }
    FUN_004e7918(DAT_0084f024,DAT_00686b40);
    FUN_004e7954(DAT_0084f024,DAT_00686b44);
    FUN_004bac98(DAT_0084f024,DAT_00686b48);
    FUN_004baccc(DAT_0084f024,DAT_00686b4c);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00590232;
  puStack_1c = (undefined1 *)0x59022a;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar2);
  return;
}
