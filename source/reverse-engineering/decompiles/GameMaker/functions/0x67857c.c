// rea decompile_all
// name: FUN_0067857c
// address: 0x67857c
// body: available
// range: 0x67857c-0x67870c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067857c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 local_18 [16];

  puVar9 = local_18;
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    iVar3 = FUN_00679e90(param_1);
    if ((iVar3 == 0) || (*(int *)(param_1 + 0x1b4) == 0)) goto LAB_006785b7;
    iVar3 = FUN_00679e90(param_1);
    bVar8 = (*(byte *)(iVar3 + 0x52) & 4) != 0;
  }
  else {
LAB_006785b7:
    bVar8 = false;
  }
  if (!bVar8) {
    bVar8 = false;
    goto LAB_0067860a;
  }
  iVar3 = FUN_00679e90(param_1);
  cVar2 = FUN_0067240c(*(undefined4 *)(iVar3 + 0x278));
  if (cVar2 == '\0') {
LAB_00678604:
    bVar8 = true;
  }
  else {
    iVar3 = FUN_00679e90(param_1);
    cVar2 = FUN_0067240c(*(undefined4 *)(iVar3 + 0x278));
    if (cVar2 != '\0') {
      iVar3 = FUN_00679e90(param_1);
      if (1 < (byte)(*(char *)(*(int *)(iVar3 + 0x278) + 0x14) - 3U)) goto LAB_00678604;
    }
    bVar8 = false;
  }
LAB_0067860a:
  if (bVar8) {
    FUN_00503a6c();
    cVar2 = FUN_00503b78();
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    bVar8 = false;
  }
  else {
    FUN_00679e90(param_1);
    iVar3 = FUN_00677f54();
    bVar8 = *(int *)(iVar3 + 0x44) ==
            *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x48) + 0x10) + 0x14);
  }
  if (bVar8) {
    bVar8 = (*(byte *)(param_1 + 0x52) & 4) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    FUN_004edf30(param_1,local_18);
    uVar10 = 0;
    uVar4 = (uint)*(byte *)(param_1 + 0x1ec);
    uVar5 = FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
    FUN_00679e90(param_1);
    uVar6 = FUN_004f76a8();
    uVar7 = FUN_00503a6c();
    FUN_00503e94(uVar7,uVar6,uVar5,puVar9,uVar4,uVar10);
    FUN_0045b33c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x40),0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a8) + 0x40);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_1 + 100));
  }
  else {
    iVar3 = FUN_0045bbf0(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x48));
    if (iVar3 == 0) {
      if ((*(char *)(param_1 + 0x1ec) == '\0') || (*(char *)(param_1 + 0x1d4) != '\0')) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x48),(&DAT_0077f398)[iVar3]);
    }
    (**(code **)(**(int **)(param_1 + 0x1a8) + 0x4c))(*(int **)(param_1 + 0x1a8),param_2);
  }
  return;
}
