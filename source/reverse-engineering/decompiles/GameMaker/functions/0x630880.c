// rea decompile_all
// name: FUN_00630880
// address: 0x630880
// body: available
// range: 0x630880-0x630b10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630880(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_18;

  iVar4 = param_7;
  if (param_3 < param_7) {
    iVar4 = param_3;
  }
  if (param_7 < param_3) {
    param_7 = param_3;
  }
  param_7 = param_7 + 1;
  iVar5 = param_6;
  if (param_8 < param_6) {
    iVar5 = param_8;
  }
  if (param_8 <= param_6) {
    param_8 = param_6;
  }
  param_8 = param_8 + 1;
  FUN_0062f8ec(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_0062f940(iVar4,iVar5,param_7,param_8);
  if (param_5 == '\0') {
    iVar1 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045bc24(*(undefined4 *)(iVar1 + 0x48),0);
  }
  else {
    iVar1 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045bc24(*(undefined4 *)(iVar1 + 0x48),0xff00);
  }
  iVar1 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045b850(*(undefined4 *)(iVar1 + 0x44),0xff);
  if (DAT_0078a0f4 == '\0') {
    iVar1 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045b9a4(*(undefined4 *)(iVar1 + 0x44),DAT_0078a0ec);
    if (param_1 == 0) {
      iVar1 = param_8;
      iVar3 = param_7;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x48))(piVar2,iVar4,iVar5,iVar1,iVar3);
    }
    if (param_1 == 1) {
      iVar1 = param_8;
      iVar3 = param_7;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x74))(piVar2,iVar4,iVar5,iVar1,iVar3);
    }
    if (param_1 == 2) {
      uVar7 = 0x10;
      uVar6 = 0x10;
      iVar1 = param_8;
      iVar3 = param_7;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x7c))(piVar2,iVar4,iVar5,uVar6,uVar7,iVar1,iVar3);
    }
  }
  else {
    iVar1 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045b9a4(*(undefined4 *)(iVar1 + 0x44),DAT_0078a0ec * 2);
    if (param_1 == 0) {
      iVar1 = param_7 * 2;
      iVar3 = param_8 * 2;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x48))(piVar2,iVar4 * 2,iVar5 * 2,iVar3,iVar1);
    }
    if (param_1 == 1) {
      iVar1 = param_7 * 2;
      iVar3 = param_8 * 2;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x74))(piVar2,iVar4 * 2,iVar5 * 2,iVar3,iVar1);
    }
    if (param_1 == 2) {
      iVar1 = param_7 * 2;
      iVar3 = param_8 * 2;
      uVar7 = 0x20;
      uVar6 = 0x20;
      piVar2 = (int *)FUN_00462a64(DAT_0077f0e4);
      (**(code **)(*piVar2 + 0x7c))(piVar2,iVar4 * 2,iVar5 * 2,uVar6,uVar7,iVar3,iVar1);
    }
  }
  FUN_00630034(param_2,iVar4,iVar5,param_8,param_7);
  iVar1 = param_7;
  if (iVar4 < param_7) {
    iVar1 = iVar4;
  }
  iVar1 = (iVar1 - DAT_0078a0ec) + -2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar3 = param_8;
  if (iVar5 < param_8) {
    iVar3 = iVar5;
  }
  local_18 = (iVar3 - DAT_0078a0ec) + -2;
  if (local_18 < 0) {
    local_18 = 0;
  }
  if (param_7 < iVar4) {
    param_7 = iVar4;
  }
  iVar4 = param_7 + DAT_0078a0ec + 2;
  if (*(int *)(param_2 + 4) < iVar4) {
    iVar4 = *(int *)(param_2 + 4);
  }
  if (param_8 < iVar5) {
    param_8 = iVar5;
  }
  iVar5 = param_8 + DAT_0078a0ec + 2;
  if (*(int *)(param_2 + 8) < iVar5) {
    iVar5 = *(int *)(param_2 + 8);
  }
  FUN_00438c38(iVar1,local_18,iVar4,param_4,iVar5);
  return;
}
