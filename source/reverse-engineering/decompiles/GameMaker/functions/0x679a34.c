// rea decompile_all
// name: FUN_00679a34
// address: 0x679a34
// body: available
// range: 0x679a34-0x679bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00679a34(int param_1,int param_2,int param_3,byte *param_4,char param_5,int param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  FUN_004eefd8(param_1,param_2,param_3,param_4,param_5,param_6);
  if (((*(int *)(param_1 + 0x1b4) == 0) ||
      (iVar3 = FUN_00679e90(param_1), *(char *)(iVar3 + 0x28c) == '\0')) ||
     ((cVar1 = FUN_00405c98(param_2,&PTR_FUN_0066d144), cVar1 == '\0' &&
      ((cVar1 = FUN_00405c98(param_2,&LAB_0066d4b8), cVar1 == '\0' &&
       (cVar1 = FUN_00405c98(param_2,&PTR_FUN_0066d358), cVar1 == '\0')))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  *param_4 = bVar2;
  if ((((*param_4 != 0) && (cVar1 = FUN_00405c98(param_2,&LAB_0066d4b8), cVar1 != '\0')) &&
      (*param_4 = *(int *)(param_2 + 0x48) == 0, *param_4 == 0)) &&
     (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x1b4))) {
    bVar2 = FUN_006724d0(*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_2 + 0x48));
    *param_4 = bVar2 ^ 1;
  }
  if ((*param_4 != 0) && ((param_5 == '\0' || (param_5 == '\x02')))) {
    iVar3 = 0;
    iVar4 = FUN_00679e90(param_1);
    cVar1 = *(char *)(iVar4 + 0x28f);
    if (cVar1 == '\0') {
      iVar4 = (int)*(uint *)(param_1 + 0x48) >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x48) & 1) != 0);
      }
      if (iVar4 < param_3) {
        uVar5 = FUN_00679e90(param_1);
        iVar3 = FUN_006765c0(uVar5,*(undefined4 *)(param_1 + 0x1b4));
      }
    }
    else if (cVar1 == '\x01') {
      iVar4 = (int)*(uint *)(param_1 + 0x48) >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x48) & 1) != 0);
      }
      if (param_3 < iVar4) {
        uVar5 = FUN_00679e90(param_1);
        iVar3 = FUN_00676f90(uVar5,*(undefined4 *)(param_1 + 0x1b4));
      }
    }
    else if (cVar1 == '\x02') {
      iVar4 = (int)*(uint *)(param_1 + 0x4c) >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x4c) & 1) != 0);
      }
      if (iVar4 < param_6) {
        uVar5 = FUN_00679e90(param_1);
        iVar3 = FUN_006765c0(uVar5,*(undefined4 *)(param_1 + 0x1b4));
      }
    }
    else if (cVar1 == '\x03') {
      iVar4 = (int)*(uint *)(param_1 + 0x4c) >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x4c) & 1) != 0);
      }
      if (param_6 < iVar4) {
        uVar5 = FUN_00679e90(param_1);
        iVar3 = FUN_00676f90(uVar5,*(undefined4 *)(param_1 + 0x1b4));
      }
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x1b4);
    }
    FUN_0067a414(*(undefined4 *)(iVar3 + 0x44),1);
  }
  return;
}
