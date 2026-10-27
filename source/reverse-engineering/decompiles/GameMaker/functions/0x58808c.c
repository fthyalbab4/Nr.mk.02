// rea decompile_all
// name: FUN_0058808c
// address: 0x58808c
// body: available
// range: 0x58808c-0x5880d2 inclusive
// range: 0x58810b-0x58846f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058808c(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;

  if ((param_1[7] == 0) || (*param_1 == 0)) {
    iVar2 = -2;
  }
  else {
    if (param_2 == 4) {
      iVar3 = -5;
    }
    else {
      iVar3 = 0;
    }
    iVar2 = -5;
LAB_005880bd:
    switch(*(undefined1 *)param_1[7]) {
    case 0:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 4) = (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      if ((*(uint *)(param_1[7] + 4) & 0xf) == 8) {
        if (*(uint *)(param_1[7] + 0x10) < (*(uint *)(param_1[7] + 4) >> 4) + 8) {
          *(undefined1 *)param_1[7] = 0xd;
          FUN_0040b75c(&PTR_DAT_00584f20,param_1 + 6);
          *(undefined4 *)(param_1[7] + 4) = 5;
          iVar2 = iVar3;
        }
        else {
          *(undefined1 *)param_1[7] = 1;
          iVar2 = iVar3;
        }
      }
      else {
        *(undefined1 *)param_1[7] = 0xd;
        FUN_0040b75c(&PTR_DAT_00584f18,param_1 + 6);
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar2 = iVar3;
      }
      goto LAB_005880bd;
    case 1:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      bVar1 = *(byte *)*param_1;
      param_3 = (uint)bVar1;
      *param_1 = *param_1 + 1;
      if ((*(int *)(param_1[7] + 4) * 0x100 + param_3) % 0x1f == 0) {
        if ((bVar1 & 0x20) == 0) {
          *(undefined1 *)param_1[7] = 7;
          iVar2 = iVar3;
        }
        else {
          *(undefined1 *)param_1[7] = 2;
          iVar2 = iVar3;
        }
      }
      else {
        *(undefined1 *)param_1[7] = 0xd;
        FUN_0040b75c(&PTR_DAT_00584f28,param_1 + 6);
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar2 = iVar3;
      }
      goto LAB_005880bd;
    case 2:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 3;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 3:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 4;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 4:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 5;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 5:
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
        *param_1 = *param_1 + 1;
        param_1[9] = *(int *)(param_1[7] + 8);
        *(undefined1 *)param_1[7] = 6;
        iVar2 = 2;
      }
      break;
    case 6:
      *(undefined1 *)param_1[7] = 0xd;
      FUN_0040b75c(&PTR_DAT_00584f30,param_1 + 6);
      *(undefined4 *)(param_1[7] + 4) = 0;
      return -2;
    case 7:
      iVar2 = FUN_00587470(*(undefined4 *)(param_1[7] + 0x14),param_1,iVar2,param_3);
      if (iVar2 == -3) {
        *(undefined1 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        iVar2 = -3;
      }
      else {
        if (iVar2 == 0) {
          iVar2 = iVar3;
        }
        if (iVar2 != 1) {
          return iVar2;
        }
        FUN_005872bc(*(undefined4 *)(param_1[7] + 0x14),param_1,param_1[7] + 4);
        if (*(char *)(param_1[7] + 0xc) == '\0') {
          *(undefined1 *)param_1[7] = 8;
          iVar2 = iVar3;
        }
        else {
          *(undefined1 *)param_1[7] = 0xc;
          iVar2 = iVar3;
        }
      }
      goto LAB_005880bd;
    case 8:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 9;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 9:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 10;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 10:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined1 *)param_1[7] = 0xb;
      iVar2 = iVar3;
      goto LAB_005880bd;
    case 0xb:
      if (param_1[1] == 0) {
        return iVar2;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      if (*(int *)(param_1[7] + 4) == *(int *)(param_1[7] + 8)) {
        *(undefined1 *)param_1[7] = 0xc;
        iVar2 = iVar3;
      }
      else {
        *(undefined1 *)param_1[7] = 0xd;
        FUN_0040b75c(&PTR_DAT_00584f10,param_1 + 6);
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar2 = iVar3;
      }
      goto LAB_005880bd;
    case 0xc:
      return 1;
    case 0xd:
      return -3;
    default:
      iVar2 = -2;
    }
  }
  return iVar2;
}
