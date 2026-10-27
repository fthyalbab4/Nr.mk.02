// rea decompile_all
// name: FUN_00513ca0
// address: 0x513ca0
// body: available
// range: 0x513ca0-0x513e79 inclusive
// range: 0x513e9a-0x513f9d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513ca0(int param_1,int param_2)

{
  short sVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  DWORD local_18;
  int local_14;
  int local_10;

  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x1f) == '\0') || (3 < *(ushort *)(param_2 + 4))) {
    switch(*(undefined2 *)(param_2 + 4)) {
    case 0:
      FUN_00514018(param_1,*(int *)(param_1 + 0xc) - (uint)*(ushort *)(param_1 + 8));
      break;
    case 1:
      FUN_00514018(param_1,*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8));
      break;
    case 2:
      iVar4 = FUN_00513b9c(param_1,1,0);
      FUN_00514018(param_1,*(int *)(param_1 + 0xc) - iVar4);
      break;
    case 3:
      iVar4 = FUN_00513b9c(param_1,1,0);
      FUN_00514018(param_1,iVar4 + *(int *)(param_1 + 0xc));
      break;
    case 4:
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        FUN_00514018(param_1,(int)*(short *)(param_2 + 6));
      }
      else {
        uVar3 = FUN_00513c44();
        FUN_00514018(param_1,uVar3,puVar5);
      }
      break;
    case 5:
      if (*(char *)(param_1 + 0x1d) != '\0') {
        if (*(int *)(param_1 + 0x14) < 0x8000) {
          FUN_00514018(param_1,(int)*(short *)(param_2 + 6));
        }
        else {
          uVar3 = FUN_00513c44();
          FUN_00514018(param_1,uVar3,puVar6);
        }
      }
      break;
    case 6:
      FUN_00514018(param_1,0);
      break;
    case 7:
      FUN_00514018(param_1,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else {
    if (*(ushort *)(param_2 + 4) < 2) {
      iVar4 = *(int *)(param_1 + 0x40);
      local_10 = (int)((longlong)(ulonglong)(uint)*(ushort *)(param_1 + 8) / (longlong)iVar4);
      local_14 = (int)((longlong)(ulonglong)(uint)*(ushort *)(param_1 + 8) % (longlong)iVar4);
    }
    else if ((ushort)(*(ushort *)(param_2 + 4) - 2) < 2) {
      iVar4 = *(int *)(param_1 + 0x3c);
      local_14 = (int)(uint)*(ushort *)(param_1 + 10) % iVar4;
      local_10 = (int)(uint)*(ushort *)(param_1 + 10) / iVar4;
    }
    else {
      iVar4 = 0;
      local_10 = 0;
      local_14 = 0;
    }
    local_18 = 0;
    for (; 0 < iVar4; iVar4 = iVar4 + -1) {
      DVar2 = GetTickCount();
      if (DVar2 - local_18 < *(uint *)(param_1 + 0x20)) {
        Sleep(*(int *)(param_1 + 0x20) - (DVar2 - local_18));
      }
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 1) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      else if (sVar1 == 2) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 3) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x9c))();
      local_18 = DVar2;
    }
    if (0 < local_14) {
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else if (sVar1 == 1) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) + local_14);
      }
      else if (sVar1 == 2) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else if (sVar1 == 3) {
        FUN_00514018(param_1,*(int *)(param_1 + 0xc) + local_14);
      }
    }
  }
  return;
}
