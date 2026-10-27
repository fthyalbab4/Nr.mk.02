// rea decompile_all
// name: FUN_00426988
// address: 0x426988
// body: available
// range: 0x426988-0x4269a1 inclusive
// range: 0x4269fa-0x426b94 inclusive
// range: 0x426bed-0x426d1c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00426988(ushort *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint local_8;

  uVar1 = *param_1;
  local_8 = param_3;
  switch(uVar1) {
  case 0:
    local_8 = 0;
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      FUN_00424184(1,0xb);
    }
    local_8 = 0;
    break;
  case 2:
    local_8 = (uint)(param_1[4] != 0);
    break;
  case 3:
    local_8 = (uint)(*(int *)(param_1 + 4) != 0);
    break;
  case 4:
    local_8 = (uint)(*(float *)(param_1 + 4) != 0.0);
    break;
  case 5:
    local_8 = (uint)(*(double *)(param_1 + 4) != 0.0);
    break;
  case 6:
    local_8 = (uint)((float)*(longlong *)(param_1 + 4) != 0.0);
    break;
  case 7:
    local_8 = (uint)(*(double *)(param_1 + 4) != 0.0);
    break;
  case 8:
    bVar2 = FUN_004267d4(param_1);
    local_8 = (uint)bVar2;
    break;
  case 9:
  case 0xd:
    bVar2 = FUN_00426898(param_1);
    local_8 = (uint)bVar2;
    break;
  default:
    if (uVar1 == 0x100) {
      bVar2 = FUN_004267d4(param_1);
      local_8 = (uint)bVar2;
    }
    else if (uVar1 == 0x101) {
      bVar2 = FUN_004268d8(param_1);
      local_8 = (uint)bVar2;
    }
    else if (uVar1 == 0x102) {
      bVar2 = FUN_004267d4(param_1);
      local_8 = (uint)bVar2;
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar3 = FUN_0042693c(param_1,&local_8);
      if (cVar3 == '\0') {
        bVar2 = FUN_00426898(param_1);
        local_8 = (uint)bVar2;
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        bVar2 = FUN_00426898(param_1);
        local_8 = (uint)bVar2;
        break;
      case 2:
        local_8 = (uint)(**(short **)(param_1 + 4) != 0);
        break;
      case 3:
        local_8 = (uint)(**(int **)(param_1 + 4) != 0);
        break;
      case 4:
        local_8 = (uint)(**(float **)(param_1 + 4) != 0.0);
        break;
      case 5:
        local_8 = (uint)(**(double **)(param_1 + 4) != 0.0);
        break;
      case 6:
        local_8 = (uint)((float)**(longlong **)(param_1 + 4) != 0.0);
        break;
      case 7:
        local_8 = (uint)(**(double **)(param_1 + 4) != 0.0);
        break;
      case 8:
        bVar2 = FUN_004267d4(param_1);
        local_8 = (uint)bVar2;
        break;
      case 0xb:
        local_8 = (uint)(byte)(1 - (**(short **)(param_1 + 4) == 0));
        break;
      case 0xc:
        bVar2 = FUN_00426988(*(undefined4 *)(param_1 + 4));
        local_8 = (uint)bVar2;
        break;
      case 0x10:
        local_8 = (uint)(**(char **)(param_1 + 4) != '\0');
        break;
      case 0x11:
        local_8 = (uint)(**(char **)(param_1 + 4) != '\0');
        break;
      case 0x12:
        local_8 = (uint)(**(short **)(param_1 + 4) != 0);
        break;
      case 0x13:
        local_8 = (uint)(**(int **)(param_1 + 4) != 0);
        break;
      case 0x14:
        bVar4 = false;
        if ((*(int **)(param_1 + 4))[1] == 0) {
          bVar4 = **(int **)(param_1 + 4) == 0;
        }
        local_8 = (uint)!bVar4;
        break;
      case 0x15:
        bVar4 = false;
        if ((*(int **)(param_1 + 4))[1] == 0) {
          bVar4 = **(int **)(param_1 + 4) == 0;
        }
        local_8 = (uint)!bVar4;
      }
    }
    break;
  case 0xb:
    local_8 = (uint)(byte)(1 - (param_1[4] == 0));
    break;
  case 0xc:
    bVar2 = FUN_00426988(*(undefined4 *)(param_1 + 4));
    local_8 = (uint)bVar2;
    break;
  case 0x10:
    local_8 = (uint)((char)param_1[4] != '\0');
    break;
  case 0x11:
    local_8 = (uint)((char)param_1[4] != '\0');
    break;
  case 0x12:
    local_8 = (uint)(param_1[4] != 0);
    break;
  case 0x13:
    local_8 = (uint)(*(int *)(param_1 + 4) != 0);
    break;
  case 0x14:
    bVar4 = false;
    if (*(int *)(param_1 + 6) == 0) {
      bVar4 = *(int *)(param_1 + 4) == 0;
    }
    local_8 = (uint)!bVar4;
    break;
  case 0x15:
    bVar4 = false;
    if (*(int *)(param_1 + 6) == 0) {
      bVar4 = *(int *)(param_1 + 4) == 0;
    }
    local_8 = (uint)!bVar4;
  }
  return local_8 & 0xff;
}
