// rea decompile_all
// name: FUN_0060e5a4
// address: 0x60e5a4
// body: available
// range: 0x60e5a4-0x60e6a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0060e5a4(int param_1,char param_2,undefined4 param_3,double param_4,double param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;

  uVar7 = 0;
  if (((((param_5 < (double)(*(int *)(param_1 + 0xc0) + 1)) &&
        ((double)*(int *)(param_1 + 0xb8) <= param_5)) &&
       (param_4 < (double)(*(int *)(param_1 + 0xc4) + 1))) &&
      (((double)*(int *)(param_1 + 0xbc) <= param_4 &&
       (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) != 0.0)))) &&
     (*(char *)(param_1 + 0x108) == '\0')) {
    if (param_2 == '\0') {
      uVar7 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 < 0) {
        iVar1 = *(int *)(param_1 + 8);
      }
      iVar1 = FUN_005799a0(iVar1);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        uVar2 = FUN_004048b8();
        uVar3 = FUN_004048b8();
        uVar7 = *(undefined4 *)(param_1 + 0x24);
        uVar12 = *(undefined4 *)(param_1 + 0x20);
        uVar11 = *(undefined4 *)(param_1 + 0x2c);
        uVar10 = *(undefined4 *)(param_1 + 0x28);
        uVar9 = *(undefined4 *)(param_1 + 0x34);
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        uVar4 = FUN_004048b8();
        uVar5 = FUN_004048b8();
        uVar6 = FUN_004102e4();
        uVar7 = FUN_00623ea8(iVar1,uVar6,param_1 + 0xb8,uVar5,uVar4,uVar8,uVar9,uVar10,uVar11,uVar12
                             ,uVar7,uVar3,uVar2);
      }
    }
  }
  return uVar7;
}
