// rea decompile_all
// name: FUN_00572ed8
// address: 0x572ed8
// body: available
// range: 0x572ed8-0x572f7c inclusive
// range: 0x572f9d-0x573656 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x572f02 (push 0x573657 followed by fs-segment stack chaining); handler 0x573657 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572ed8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  double local_14;
  int local_c;
  undefined4 local_8;

  puStack_38 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_3c = &LAB_00573657;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_c = param_3;
  local_8 = param_2;
  if (param_3 < 0xd7) {
    if (param_3 == 0xd6) {
      if ((*param_5 == 0) && (*param_4 == 0)) {
        if (*(double *)(param_4 + 2) == 0.0) {
          puStack_38 = &stack0xfffffffc;
          FUN_00610d7c(param_1,param_2,&PTR_DAT_0057370c);
        }
        else {
          local_14 = *(double *)(param_5 + 2) / *(double *)(param_4 + 2);
          if (local_14 <= 0.0) {
            puStack_38 = &stack0xfffffffc;
            local_18 = FUN_004102ac();
            *(double *)(param_5 + 2) = (double)(int)local_18;
          }
          else {
            puStack_38 = &stack0xfffffffc;
            local_18 = FUN_004102e4();
            *(double *)(param_5 + 2) = (double)(int)local_18;
          }
        }
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to div.");
      }
      goto LAB_0057363c;
    }
    if (param_3 < 0xd3) {
      if (param_3 == 0xd2) {
        if ((*param_5 == 0) && (*param_4 == 0)) {
          *(double *)(param_5 + 2) = *(double *)(param_5 + 2) + *(double *)(param_4 + 2);
          puStack_38 = &stack0xfffffffc;
        }
        else if ((*param_5 == 1) && (*param_4 == 1)) {
          puStack_38 = &stack0xfffffffc;
          FUN_004076c4(param_5 + 4,param_4[4]);
        }
        else {
          puStack_38 = &stack0xfffffffc;
          FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to +.");
        }
        goto LAB_0057363c;
      }
      if (param_3 != 0x65) {
        if (param_3 == 0xc9) {
          if ((*param_5 == 0) && (*param_4 == 0)) {
            if ((*(double *)(param_5 + 2) < 0.5) || (*(double *)(param_4 + 2) < 0.5)) {
              local_18 = 0;
            }
            else {
              local_18 = 1;
            }
            *(double *)(param_5 + 2) = (double)local_18;
            puStack_38 = &stack0xfffffffc;
          }
          else {
            puStack_38 = &stack0xfffffffc;
            FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for &&.");
          }
          goto LAB_0057363c;
        }
        if (param_3 == 0xca) {
          if ((*param_5 == 0) && (*param_4 == 0)) {
            if ((0.5 <= *(double *)(param_5 + 2)) || (0.5 <= *(double *)(param_4 + 2))) {
              local_18 = 1;
            }
            else {
              local_18 = 0;
            }
            *(double *)(param_5 + 2) = (double)local_18;
            puStack_38 = &stack0xfffffffc;
          }
          else {
            puStack_38 = &stack0xfffffffc;
            FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for ||.");
          }
          goto LAB_0057363c;
        }
        if (5 < param_3 - 0xccU) goto switchD_00572f76_caseD_dc;
      }
      if (*param_5 == *param_4) {
        if (*param_5 == 1) {
          puStack_38 = &stack0xfffffffc;
          FUN_004083c0(&local_1c,param_4[4]);
          uVar5 = local_1c;
          FUN_004083c0(&local_20,param_5[4]);
          local_18 = FUN_0041561c(local_20,uVar5);
          local_14 = (double)(int)local_18;
        }
        else {
          local_14 = *(double *)(param_5 + 2) - *(double *)(param_4 + 2);
          puStack_38 = &stack0xfffffffc;
        }
        *param_5 = 0;
        if (local_c < 0xcf) {
          if (local_c == 0xce) {
            if (((float10)local_14 <= _DAT_005738bc) || (_DAT_005738c8 < (float10)local_14)) {
              local_18 = 0;
            }
            else {
              local_18 = 1;
            }
            *(double *)(param_5 + 2) = (double)local_18;
          }
          else if (local_c == 0x65) {
            if (((float10)local_14 <= _DAT_005738bc) || (_DAT_005738c8 < (float10)local_14)) {
              local_18 = 0;
            }
            else {
              local_18 = 1;
            }
            *(double *)(param_5 + 2) = (double)local_18;
          }
          else if (local_c == 0xcc) {
            local_18 = (uint)((float10)local_14 < _DAT_005738bc);
            *(double *)(param_5 + 2) = (double)local_18;
          }
          else if (local_c == 0xcd) {
            local_18 = (uint)((float10)local_14 <= _DAT_005738c8);
            *(double *)(param_5 + 2) = (double)local_18;
          }
        }
        else if (local_c == 0xcf) {
          if (((float10)local_14 < _DAT_005738bc) || (_DAT_005738c8 < (float10)local_14)) {
            local_18 = 1;
          }
          else {
            local_18 = 0;
          }
          *(double *)(param_5 + 2) = (double)local_18;
        }
        else if (local_c == 0xd0) {
          local_18 = (uint)(_DAT_005738bc <= (float10)local_14);
          *(double *)(param_5 + 2) = (double)local_18;
        }
        else if (local_c == 0xd1) {
          local_18 = (uint)(_DAT_005738c8 < (float10)local_14);
          *(double *)(param_5 + 2) = (double)local_18;
        }
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Cannot compare arguments.");
      }
      goto LAB_0057363c;
    }
    if (param_3 == 0xd3) {
      if ((*param_5 == 0) && (*param_4 == 0)) {
        *(double *)(param_5 + 2) = *(double *)(param_5 + 2) - *(double *)(param_4 + 2);
        puStack_38 = &stack0xfffffffc;
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to -.");
      }
      goto LAB_0057363c;
    }
    if (param_3 == 0xd4) {
      if ((*param_5 == 0) && (*param_4 == 0)) {
        *(double *)(param_5 + 2) = *(double *)(param_5 + 2) * *(double *)(param_4 + 2);
        puStack_38 = &stack0xfffffffc;
      }
      else if ((*param_5 == 0) && (*param_4 == 1)) {
        *param_5 = 1;
        puStack_38 = &stack0xfffffffc;
        FUN_004072d8(param_5 + 4);
        iVar2 = FUN_004048b8();
        if (-1 < iVar2 + -1) {
          do {
            FUN_004076c4(param_5 + 4,param_4[4]);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to *.");
      }
      goto LAB_0057363c;
    }
    if (param_3 == 0xd5) {
      if ((*param_5 == 0) && (*param_4 == 0)) {
        if (*(double *)(param_4 + 2) == 0.0) {
          puStack_38 = &stack0xfffffffc;
          FUN_00610d7c(param_1,param_2,&PTR_DAT_0057370c);
        }
        else {
          *(double *)(param_5 + 2) = *(double *)(param_5 + 2) / *(double *)(param_4 + 2);
          puStack_38 = &stack0xfffffffc;
        }
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to /.");
      }
      goto LAB_0057363c;
    }
switchD_00572f76_caseD_dc:
    puStack_38 = &stack0xfffffffc;
    FUN_00610d7c(param_1,param_2,&PTR_DAT_00573b44);
  }
  else {
    switch(param_3) {
    case 0xd7:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        if (*(double *)(param_4 + 2) == 0.0) {
          puStack_38 = &stack0xfffffffc;
          FUN_00610d7c(param_1,param_2,&PTR_DAT_005737d0);
        }
        else {
          local_14 = *(double *)(param_5 + 2) / *(double *)(param_4 + 2);
          if (local_14 <= 0.0) {
            puStack_38 = &stack0xfffffffc;
            local_18 = FUN_004102ac();
          }
          else {
            puStack_38 = &stack0xfffffffc;
            local_18 = FUN_004102e4();
          }
          local_14 = (double)(int)local_18;
          *(double *)(param_5 + 2) = *(double *)(param_5 + 2) - local_14 * *(double *)(param_4 + 2);
        }
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments to mod.");
      }
      break;
    case 0xd8:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        local_18 = (uint)(0.5 <= *(double *)(param_5 + 2) != 0.5 <= *(double *)(param_4 + 2));
        *(double *)(param_5 + 2) = (double)local_18;
        puStack_38 = &stack0xfffffffc;
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for ^^.");
      }
      break;
    case 0xd9:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        puStack_38 = &stack0xfffffffc;
        uVar3 = FUN_004048b8();
        uVar4 = FUN_004048b8();
        *(double *)(param_5 + 2) = (double)CONCAT44(extraout_EDX_00 | extraout_EDX,uVar4 | uVar3);
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for |.");
      }
      break;
    case 0xda:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        puStack_38 = &stack0xfffffffc;
        uVar3 = FUN_004048b8();
        uVar4 = FUN_004048b8();
        *(double *)(param_5 + 2) = (double)CONCAT44(extraout_EDX_02 & extraout_EDX_01,uVar4 & uVar3)
        ;
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for &.");
      }
      break;
    case 0xdb:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        puStack_38 = &stack0xfffffffc;
        uVar3 = FUN_004048b8();
        uVar4 = FUN_004048b8();
        *(double *)(param_5 + 2) = (double)CONCAT44(extraout_EDX_04 ^ extraout_EDX_03,uVar4 ^ uVar3)
        ;
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for ^.");
      }
      break;
    default:
      goto switchD_00572f76_caseD_dc;
    case 0xdd:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        puStack_38 = &stack0xfffffffc;
        FUN_004048b8();
        FUN_004048b8();
        uVar5 = FUN_0040987c();
        *(double *)(param_5 + 2) = (double)CONCAT44(extraout_EDX_05,uVar5);
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for <<.");
      }
      break;
    case 0xde:
      if ((*param_5 == 0) && (*param_4 == 0)) {
        FUN_004048b8();
        FUN_004048b8();
        uVar5 = FUN_0040989c();
        *(double *)(param_5 + 2) = (double)CONCAT44(extraout_EDX_06,uVar5);
      }
      else {
        puStack_38 = &stack0xfffffffc;
        FUN_00610d7c(param_1,param_2,L"Wrong type of arguments for >>.");
      }
    }
  }
LAB_0057363c:
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0057365e;
  puStack_3c = (undefined1 *)0x573656;
  thunk_FUN_004072fc(&local_20,2,puVar1);
  return;
}
