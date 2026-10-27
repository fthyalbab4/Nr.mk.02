// rea decompile_all
// name: FUN_00529ff0
// address: 0x529ff0
// body: available
// range: 0x529ff0-0x52a03a inclusive
// range: 0x52a073-0x52a3bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00529ff0(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  if (((param_1 == (int *)0x0) || (param_1[7] == 0)) || (*param_1 == 0)) {
    return -2;
  }
  if (param_2 == 4) {
    iVar5 = -5;
  }
  else {
    iVar5 = 0;
  }
  iVar4 = -5;
  do {
    switch(*(undefined4 *)param_1[7]) {
    case 0:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      bVar1 = *pbVar2;
      puVar3 = (undefined4 *)param_1[7];
      puVar3[1] = (uint)bVar1;
      if ((bVar1 & 0xf) != 8) {
        *puVar3 = 0xd;
        param_1[6] = (int)s_unknown_compression_method_0077952e;
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar4 = iVar5;
        break;
      }
      puVar3 = (undefined4 *)param_1[7];
      if ((uint)puVar3[4] < ((uint)puVar3[1] >> 4) + 8) {
        *puVar3 = 0xd;
        param_1[6] = (int)s_invalid_window_size_00779549;
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar4 = iVar5;
        break;
      }
      *(undefined4 *)param_1[7] = 1;
      iVar4 = iVar5;
    case 1:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      if ((((undefined4 *)param_1[7])[1] * 0x100 + (uint)*pbVar2) % 0x1f == 0) {
        if ((*pbVar2 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          iVar4 = iVar5;
          goto switchD_0052a034_caseD_2;
        }
        *(undefined4 *)param_1[7] = 7;
        iVar4 = iVar5;
      }
      else {
        *(undefined4 *)param_1[7] = 0xd;
        param_1[6] = (int)s_incorrect_header_check_0077955d;
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar4 = iVar5;
      }
      break;
    case 2:
switchD_0052a034_caseD_2:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      puVar3 = (undefined4 *)param_1[7];
      puVar3[2] = (uint)*pbVar2 << 0x18;
      *puVar3 = 3;
      iVar4 = iVar5;
switchD_0052a034_caseD_3:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2 * 0x10000;
      *(undefined4 *)param_1[7] = 4;
      iVar4 = iVar5;
switchD_0052a034_caseD_4:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2 * 0x100;
      *(undefined4 *)param_1[7] = 5;
      iVar4 = iVar5;
switchD_0052a034_caseD_5:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2;
      param_1[0xc] = *(int *)(param_1[7] + 8);
      *(undefined4 *)param_1[7] = 6;
      return 2;
    case 3:
      goto switchD_0052a034_caseD_3;
    case 4:
      goto switchD_0052a034_caseD_4;
    case 5:
      goto switchD_0052a034_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)s_need_dictionary_00779574;
      *(undefined4 *)(param_1[7] + 4) = 0;
      return -2;
    case 7:
      iVar4 = FUN_0052a61c(*(undefined4 *)(param_1[7] + 0x14),param_1,iVar4);
      if (iVar4 == -3) {
        puVar3 = (undefined4 *)param_1[7];
        *puVar3 = 0xd;
        puVar3[1] = 0;
        iVar4 = -3;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = iVar5;
        }
        if (iVar4 != 1) {
          return iVar4;
        }
        FUN_0052a520(*(undefined4 *)(param_1[7] + 0x14),param_1,param_1[7] + 4);
        if (((undefined4 *)param_1[7])[3] == 0) {
          *(undefined4 *)param_1[7] = 8;
          iVar4 = iVar5;
          goto switchD_0052a034_caseD_8;
        }
        *(undefined4 *)param_1[7] = 0xc;
        iVar4 = iVar5;
      }
      break;
    case 8:
switchD_0052a034_caseD_8:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      puVar3 = (undefined4 *)param_1[7];
      puVar3[2] = (uint)*pbVar2 << 0x18;
      *puVar3 = 9;
      iVar4 = iVar5;
switchD_0052a034_caseD_9:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2 * 0x10000;
      *(undefined4 *)param_1[7] = 10;
      iVar4 = iVar5;
switchD_0052a034_caseD_a:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2 * 0x100;
      *(undefined4 *)param_1[7] = 0xb;
      iVar4 = iVar5;
switchD_0052a034_caseD_b:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      pbVar2 = (byte *)*param_1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*pbVar2;
      puVar3 = (undefined4 *)param_1[7];
      if (puVar3[1] == puVar3[2]) {
        *(undefined4 *)param_1[7] = 0xc;
LAB_0052a3b8:
        return 1;
      }
      *puVar3 = 0xd;
      param_1[6] = (int)s_incorrect_data_check_00779584;
      *(undefined4 *)(param_1[7] + 4) = 5;
      iVar4 = iVar5;
      break;
    case 9:
      goto switchD_0052a034_caseD_9;
    case 10:
      goto switchD_0052a034_caseD_a;
    case 0xb:
      goto switchD_0052a034_caseD_b;
    case 0xc:
      goto LAB_0052a3b8;
    case 0xd:
      return -3;
    default:
      return -2;
    }
  } while( true );
}
